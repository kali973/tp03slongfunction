#include <stdio.h>
#include <cstring>

int slong(char *s1);

int main() {
    char *s1 = "ceci est litteral";
    char s2[] = "ceci est un tableau";

    printf("longueur de %s = %d \n", s1, slong(s1));
    printf("longueur de %s = %d \n", s2, slong(s2));
    return 0;
}

int slong(char *s1) {
    return strlen(s1);
}
