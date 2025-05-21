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
def main(provider, router_name, subnet_name, vm_count, vm_prefix, image, flavor, username, key_name):
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
    }
    gen = TerraformGenerator(config)
    gen.render_templates('templates', 'configs/terraform.tfvars.json')
    gen.apply('configs/terraform.tfvars.json')

if __name__ == '__main__':
    main()
