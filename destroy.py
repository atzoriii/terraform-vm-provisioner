#!/usr/bin/env python3
import subprocess

def destroy():
    try:
        subprocess.run(['tofu', '-chdir=generated', 'destroy', '-auto-approve'], check=True)
        print(" Infrastruttura distrutta con successo.")
    except subprocess.CalledProcessError as e:
        print(f" Errore durante la distruzione: {e}")

if __name__ == '__main__':
    destroy()
