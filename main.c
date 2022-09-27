#include <stdio.h>
#include <string.h>

int slong(const char *s1); // Pour une variable const on ne peut pas faire de write sur un pointeur

int main() {
    const char *s1 = "Ma chaîne rêvée";
    char s2[] = "ceci est un tableau";

    printf("longueur de %s = %d \n", s1, slong(s1));
    printf("longueur de %s = %d \n", s2, slong(s2));
    return 0;
}

int slong(const char *s1) {
    return strlen(s1);
}
