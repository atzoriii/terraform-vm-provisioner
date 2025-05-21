import os
import json
import subprocess
from jinja2 import Environment, FileSystemLoader

class TerraformGenerator:
    def __init__(self, config: dict):
        self.config = config

    def render_templates(self, templates_dir: str, tfvars_path: str):
        # Preparo la cartella di lavoro
        os.makedirs('generated', exist_ok=True)
        # Carico Jinja2
        env = Environment(loader=FileSystemLoader(templates_dir), trim_blocks=True, lstrip_blocks=True)
        # Render dei file .tf
        for tmpl in ['provider.tf.j2', 'variables.tf.j2', 'main.tf.j2']:
            template = env.get_template(tmpl)
            rendered = template.render(**self.config)
            out_path = os.path.join('generated', tmpl[:-3])  # rimuovo .j2
            with open(out_path, 'w') as f:
                f.write(rendered)
        # Creo il tfvars
        with open(tfvars_path, 'w') as f:
            json.dump(self.config, f, indent=2)

    def apply(self, tfvars_path: str):
        cwd = os.getcwd()
        os.chdir('generated')
        subprocess.run(['opentofu', 'init'], check=True)
        subprocess.run(['opentofu', 'apply', f'-var-file={os.path.abspath(tfvars_path)}', '-auto-approve'], check=True)
        os.chdir(cwd)
