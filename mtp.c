#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int longueur = 10; // Longueur du mot de passe
    char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+"; // Caracteres possibles pour le mot de passe
    int taille_caracteres = sizeof(caracteres) - 1; // Taille de la liste de Caracteres, moins un pour l'index

    // Initialisation du Generateur de nombres aléatoires
    srand(time(NULL));

    printf("Generateur de mot de passe\n");

    printf("Longueur du mot de passe : %d\n", longueur);
    printf("Caracteres possibles : %s\n\n", caracteres);

    printf("Mot de passe genere :\n");

    // Génération du mot de passe
    for (int i = 0; i < longueur; i++) {
        printf("%c", caracteres[rand() % taille_caracteres]);
    }

    printf("\n");

    return 0;
}
