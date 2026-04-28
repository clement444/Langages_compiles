#include <stdio.h>

int main(void) {
    char prenom[] = "Clement";
    int age = 24;
    float taille = 1.70f;
    char initiale = 'C';

    printf("+-------------------------------+\n");
    printf("|       FICHE D'IDENTITE        |\n");
    printf("+-------------------------------+\n");
    printf("| Prenom   : %-19s|\n", prenom);
    printf("| Age      : %d ans             |\n", age);
    printf("| Taille   : %.2f m            |\n", taille);
    printf("| Initiale : %-19c|\n", initiale);
    printf("+-------------------------------+\n");
    printf("| Code de sortie : 0 (succes)   |\n");
    printf("+-------------------------------+\n");

    return 0;
}
