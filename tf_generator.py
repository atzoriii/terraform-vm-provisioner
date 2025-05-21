import os
import json
import subprocess
from jinja2 import Environment, FileSystemLoader

class TerraformGenerator:
    def __init__(self, config: dict):
        self.config = config

    def render_templates(self, templates_dir: str, tfvars_path: str):
        # Creo cartella generata
        os.makedirs(os.path.dirname(tfvars_path), exist_ok=True)

        # Setup Jinja2
        env = Environment(loader=FileSystemLoader(templates_dir), trim_blocks=True, lstrip_blocks=True)

        # Render file .tf dal template
        for tmpl in ['provider.tf.j2', 'variables.tf.j2', 'main.tf.j2']:
            template = env.get_template(tmpl)
            rendered = template.render(**self.config)
            out_path = os.path.join('generated', tmpl[:-3])  # tolgo .j2
            with open(out_path, 'w') as f:
                f.write(rendered)

        # Salvo file variabili json
        with open(tfvars_path, 'w') as f:
            json.dump(self.config, f, indent=2)

    def apply(self, tfvars_path: str):
        cwd = os.getcwd()
        os.chdir('generated')
        subprocess.run(['tofu', 'init'], check=True)
        subprocess.run(['tofu', 'apply', f'-var-file={os.path.abspath(tfvars_path)}', '-auto-approve'], check=True)
        os.chdir(cwd)

    def destroy(self, tfvars_path: str):
        cwd = os.getcwd()
        os.chdir('generated')
        subprocess.run(['tofu', 'init'], check=True)
        subprocess.run(['tofu', 'destroy', f'-var-file={os.path.abspath(tfvars_path)}', '-auto-approve'], check=True)
        os.chdir(cwd)
