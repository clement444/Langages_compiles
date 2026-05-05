#include <stdio.h>

int main(void) {
    char prenom[50];
    int age;
    float moyenne;

    printf("=== Fiche interactive ===\n");

    printf("Votre prenom : ");
    scanf("%49s", prenom);

    printf("Votre age : ");
    scanf("%d", &age);

    printf("Votre note moyenne : ");
    scanf("%f", &moyenne);

    printf("\nRésumé\n");
    printf("Prenom : %s\n", prenom);
    printf("Age : %d ans\n", age);
    printf("Note moyenne : %.2f\n", moyenne);

    return 0;
}