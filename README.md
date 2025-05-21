# Terraform VM Provisioner
Semplice wrapper CLI Python per generare e applicare configurazioni Terraform (OpenTofu) su OpenStack/AWS.

## Requisiti
- Python 3.8+
- `pip install click jinja2`
- OpenTofu CLI installato (`opentofu init`, `opentofu apply`)

## Utilizzo
```bash
cd provisioner
python3 main.py

## Pubblicazione su GitHub
1. Crea un nuovo repository su GitHub (ad esempio `terraform-vm-provisioner`).
2. Inizializza Git nella cartella del progetto:
   ```bash
