#!/usr/bin/env python3
import click
from tf_generator import TerraformGenerator

@click.command()
@click.option('--provider', default='openstack', type=click.Choice(['openstack', 'aws']),
              help='Cloud provider target (openstack o aws).')

@click.option('--router-name', prompt='Nome del router', help='Nome da assegnare al router.')
@click.option('--subnet-name', prompt='Nome della subnet', help='Nome da assegnare alla subnet.')

@click.option('--vm-count', prompt='Numero di VM da creare', type=int)
@click.option('--vm-prefix', prompt='Prefisso per nomi VM', help='Usato per VM multiple.')
@click.option('--image', prompt='Nome immagine', help="Nome dell'immagine da usare.")
@click.option('--flavor', prompt='Flavor', help='Flavor/size per la VM.')
@click.option('--username', prompt='Username per accesso SSH', help='Utente di default sulla VM.')
@click.option('--key-name', prompt='Keypair name', help='Keypair da associare.')

# Credenziali OpenStack
@click.option('--auth-url', prompt='Auth URL OpenStack', help='URL di autenticazione OpenStack (es. https://openstack.example.com:5000/v3)')
@click.option('--tenant-name', prompt='Tenant Name', help='Nome del tenant/progetto OpenStack')
@click.option('--user-name', prompt='User Name', help='Nome utente OpenStack')
@click.option('--password', prompt=True, hide_input=True, confirmation_prompt=True, help='Password OpenStack')
@click.option('--region', prompt='Region', help='Regione OpenStack (es. RegionOne)')
@click.option('--domain-name', prompt='Domain Name', help='Dominio OpenStack (es. Default)')
@click.option('--external-network-id', prompt='External Network ID', help='ID della rete esterna')

def main(provider, router_name, subnet_name, vm_count, vm_prefix, image, flavor, username, key_name,
         auth_url, tenant_name, user_name, password, region, domain_name, external_network_id):
    config = {
        'provider': provider,
        'router_name': router_name,
        'subnet_name': subnet_name,
        'vm_count': vm_count,
        'vm_prefix': vm_prefix,
        'image': image,
        'flavor': flavor,
        'username': username,
        'key_name': key_name,
        'auth_url': auth_url,
        'tenant_name': tenant_name,
        'user_name': user_name,
        'password': password,
        'region': region,
        'domain_name': domain_name,
        'external_network_id': external_network_id,
    }
    gen = TerraformGenerator(config)
    gen.render_templates('templates', 'generated/configs/terraform.tfvars.json')
    gen.apply('generated/configs/terraform.tfvars.json')

if __name__ == '__main__':
    main()
