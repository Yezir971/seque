# Seque : Générateur de projet C

## Description

**Seque** est un mini-projet en langage C que j'ai créé pour faciliter la création d'un nouveau projet en C. Il permet de générer automatiquement les fichiers de base nécessaires à l'initialisation d'un projet, tels que le fichier source `.c`, l'en-tête `.h` et un script d'exécution `.sh`.

## Fonctionnement

Une fois le programme compilé et lancé, il suffit de donner un nom de projet. Le programme génère alors trois fichiers automatiquement : 
- Un fichier source en C (`.c`) contenant les inclusions de base.
- Un fichier d'en-tête en C (`.h`) également avec les inclusions nécessaires.
- Un script shell (`.sh`) permettant de compiler le projet avec `gcc` et d'exécuter le fichier compilé.

### Exemple d'utilisation

1. Compilez et exécutez le programme.
   ```bash
   ./seque


### Installation et utilisation

Clonez ce dépôt sur votre machine :

`git clone https://github.com/Yezir971/seque.git`
`cd seque`

Compilez le programme avec gcc :

`gcc -o seque seque.c`

Exécutez le programme :

`./seque`