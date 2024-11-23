
# Libft - Bibliothèque Standard C personnalisée

La **libft** est une bibliothèque écrite en C qui implémente un ensemble de fonctions utiles souvent absentes des bibliothèques standard. Elle est conçue pour être utilisée dans divers projets nécessitant des fonctionnalités de manipulation de chaînes, de gestion de mémoire et de listes chaînées.

## Table des matières
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Fonctions disponibles](#fonctions-disponibles)
  - [Partie Obligatoire](#partie-obligatoire)
  - [Bonus](#bonus)
- [Licence](#licence)

---

## Fonctionnalités

- Manipulation de chaînes de caractères
- Gestion de mémoire
- Conversion de types
- Fonctions utilitaires pour les listes chaînées
- Complètement conforme à la norme C89/C99 pour un usage étendu

---

## Installation

Pour compiler la bibliothèque :
```bash
git clone https://github.com/ton-utilisateur/libft.git
cd libft
make
```

Cela génère un fichier `libft.a` que vous pouvez inclure dans vos projets.

---

## Utilisation

Incluez la bibliothèque dans vos fichiers `.c` en ajoutant son en-tête :
```c
#include "libft.h"
```

Lors de la compilation, liez la bibliothèque statique :
```bash
gcc -Wall -Wextra -Werror -o mon_programme mon_programme.c -L. -lft
```

---

## Fonctions disponibles

### Partie Obligatoire

| Fonction         | Description                                            |
|------------------|--------------------------------------------------------|
| `ft_isalpha`     | Vérifie si un caractère est alphabétique.              |
| `ft_isdigit`     | Vérifie si un caractère est un chiffre.                |
| `ft_isalnum`     | Vérifie si un caractère est alphanumérique.            |
| `ft_isascii`     | Vérifie si un caractère est ASCII.                     |
| `ft_isprint`     | Vérifie si un caractère est imprimable.                |
| `ft_strlen`      | Calcule la longueur d'une chaîne.                      |
| `ft_bzero`       | Met une zone mémoire à zéro.                           |
| `ft_memset`      | Remplit une zone mémoire avec une valeur donnée.       |
| `ft_memcpy`      | Copie une zone mémoire.                                |
| `ft_memmove`     | Copie une zone mémoire en gérant les chevauchements.   |
| `ft_strchr`      | Trouve la première occurrence d'un caractère dans une chaîne. |
| `ft_strrchr`     | Trouve la dernière occurrence d'un caractère dans une chaîne. |
| `ft_strncmp`     | Compare deux chaînes sur un nombre donné de caractères.|
| `ft_strnstr`     | Trouve une sous-chaîne dans une autre.                 |
| `ft_atoi`        | Convertit une chaîne en entier.                        |
| `ft_strdup`      | Duplique une chaîne.                                   |
| `ft_calloc`      | Alloue une mémoire initialisée à zéro.                 |
| `ft_itoa`        | Convertit un entier en chaîne.                         |
| `ft_substr`      | Extrait une sous-chaîne d'une chaîne donnée.           |
| `ft_split`       | Divise une chaîne en fonction d'un délimiteur.         |
| `ft_strjoin`     | Concatène deux chaînes.                                |
| `ft_strtrim`     | Supprime les caractères inutiles au début et à la fin d'une chaîne. |
| `ft_strmapi`     | Applique une fonction sur chaque caractère d'une chaîne.|
| `ft_striteri`    | Applique une fonction sur chaque caractère avec son index. |
| `ft_putchar_fd`  | Écrit un caractère sur un descripteur de fichier donné.|
| `ft_putstr_fd`   | Écrit une chaîne sur un descripteur de fichier donné.  |
| `ft_putendl_fd`  | Écrit une chaîne suivie d'un retour à la ligne sur un descripteur de fichier. |
| `ft_putnbr_fd`   | Écrit un entier sur un descripteur de fichier donné.   |

### Bonus

| Fonction          | Description                                           |
|-------------------|-------------------------------------------------------|
| `ft_lstnew`       | Crée un nouvel élément de liste chaînée.              |
| `ft_lstadd_front` | Ajoute un élément au début de la liste chaînée.       |
| `ft_lstsize`      | Calcule le nombre d'éléments dans une liste chaînée.  |
| `ft_lstlast`      | Retourne le dernier élément d'une liste chaînée.      |
| `ft_lstadd_back`  | Ajoute un élément à la fin de la liste chaînée.       |
| `ft_lstdelone`    | Supprime un élément de la liste chaînée.              |
| `ft_lstclear`     | Supprime tous les éléments d'une liste chaînée.       |
| `ft_lstiter`      | Applique une fonction sur chaque élément d'une liste chaînée. |
| `ft_lstmap`       | Crée une nouvelle liste en appliquant une fonction sur chaque élément. |

---

## Licence

Ce projet est sous licence MIT. Vous êtes libre de l'utiliser, de le modifier et de le distribuer.

---

## Crédits

Ce projet a été réalisé dans le cadre de ma formation, en suivant les standards du projet **Libft** de 42.
