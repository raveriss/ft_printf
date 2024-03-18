# Projet ft_printf
<div align="center">
  <img src="https://github.com/ayogun/42-project-badges/raw/main/badges/ft_printfe.png" alt="Badge du projet ft_printf">
</div>

## Description
Ce projet vise à recoder la fonction printf() de la libc. L'objectif est d'apprendre à utiliser une variété d'arguments et de maîtriser le traitement de différents formats de données. C'est une excellente occasion d'améliorer vos compétences en programmation C, en mettant en œuvre une fonction complexe et polyvalente.

## Tableau des Composants du Projet

| Fichier           | Description                                           | Responsabilité                                  | Statut    |
|-------------------|-------------------------------------------------------|-----------------------------------------|-----------|
| `ft_printf.c`     | Le cœur de l'implémentation de `ft_printf`            | Traitement des formats et affichage     | Complet   |
| `parse_format.c`  | Parse les spécificateurs de format                    | Analyse de la chaîne de format          | Complet   |
| `print_char.c`    | Fonctions pour imprimer des caractères et des chaînes | Gestion de `%c` et `%s`                 | Complet   |
| `print_numbers.c` | Fonctions pour imprimer des nombres                   | Gestion de `%d`, `%i`, `%u`, `%x`, `%X` | Complet   |
| `utils.c`         | Fonctions utilitaires pour l'implémentation           | Diverses aides pour l'impression        | Complet   |
| `Makefile`        | Fichier pour compiler le projet et créer la librairie | Compilation                             | Complet   |

## Installation et Compilation
```
git clone git@github.com:raveriss/ft_printf.git
cd ft_printf
make
```

## Utilisation
Incluez ft_printf.h dans votre projet et liez avec libftprintf.a lors de la compilation. Utilisez ft_printf comme vous utiliseriez printf.

## Options
Ce projet imite le comportement de printf et supporte les conversions cspdiuxX%.

## Caractéristiques
Gestion variée d'arguments.
Supporte les conversions principales.
Absence de fuites de mémoire et conformité avec les normes de l'école 42.
Fonctions externes autorisées
malloc
free
write
va_start, va_arg, va_copy, va_end

## Ressources et Remerciements
Tutoriel sur printf: YouTube - Glootie
Guide sur les fonctions à nombre variable d'arguments: Blog Perhonen
