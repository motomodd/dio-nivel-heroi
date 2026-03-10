#include <stdio.h>
#include <string.h>

int main() {

    int xp = 0;
    char rank[50] = "noob";
    char heroi[100];

    while (1) {
        printf("Nome do herói: ");
        fgets(heroi, sizeof(heroi), stdin);

        if (strcmp(heroi, "\n") == 0) {
            printf("ERRO! Insira o nome do herói!\n");
        } else {
            break;
        }
    }

    heroi[strcspn(heroi, "\n")] = 0;

    printf("%s, quantos XP você acumulou? ", heroi);
    scanf("%d", &xp);

    if (xp < 1000) strcpy(rank, "ferro");
    else if (xp >= 1001 && xp <= 2000) strcpy(rank, "bronze");
    else if (xp >= 2001 && xp <= 5000) strcpy(rank, "prata");
    else if (xp >= 5001 && xp <= 6000) {
        strcpy(rank, "falha ao obter rank!");
        printf("professor da DIO não definiu rank neste range\n");
    }
    else if (xp >= 6001 && xp <= 7000) strcpy(rank, "ouro");
    else if (xp >= 7001 && xp <= 8000) strcpy(rank, "platina");
    else if (xp >= 8001 && xp <= 9000) strcpy(rank, "ascendente");
    else if (xp >= 9001 && xp <= 10000) strcpy(rank, "imortal");
    else if (xp >= 10001) strcpy(rank, "radiante");

    printf("O herói de nome %s está no nível de %s!\n", heroi, rank);

    return 0;
}
