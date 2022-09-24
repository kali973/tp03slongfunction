
3. Calcul de la longueur d'une chaîne de caractères

Compléter le programme suivant en écrivant une fonction slong() qui calcule la longueur d'une chaîne de caractères. On rappelle qu'une chaîne de caractères est une suite de caractères terminée par un zéro (la valeur numérique 0, pas le caractère '0').

Modifiez le Makefile et compilez (remarque : vous pouvez juste mettre à jour le Makefile en changeant les valeurs de PROG et SOURCES. Cependant il est également possible de compiler plusieurs programme en rajoutant des règles dans le Makefile).

#include <stdio.h>

int main() {
char *s1  = "ceci est litteral";
char s2[] = "ceci est un tableau";

printf("longueur de %s = %d \n", s1, slong(s1));
printf("longueur de %s = %d \n", s2, slong(s2));
return 0;
}

Il existe une fonction de bibliothèque qui fait la même chose. Quel est son nom ? Si vous ne savez pas comment la trouver, tapez: man string (ou cherchez sur Internet).

