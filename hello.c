#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[20];
    printf("Entrez le mot magique : ");
    scanf("%s", input);

    if (strcmp(input, "magique") == 0) {
        printf("Tu as trouvé l'easter egg!\n");
    } else {
        printf("Hello, World!\n");
    }

    return 0;
}

