#include <stdio.h>

int main() {
    int option = 0;

    printf("Select a Brazilian state:\n\
    [1] - Paraná\n\
    [2] - Rio Grande do Sul\n\
    [3] - Santa Catarina\n\
    [4] - Acre\n\
    [5] - Amapá\n\
    [6] - Amazonas\n\
    [7] - Pará\n\
    [8] - Rondônia\n\
    [9] - Roraima\n\
    [10] - Tocantins\n\
    [11] - Alagoas\n\
    [12] - Bahia\n\
    [13] - Ceará\n\
    [14] - Maranhão\n\
    [15] - Paraíba\n\
    [16] - Pernambuco\n\
    [17] - Piauí\n\
    [18] - Rio Grande do Norte\n\
    [19] - Sergipe\n\
    [20] - Espírito Santo\n\
    [21] - Minas Gerais\n\
    [22] - Rio de Janeiro\n\
    [23] - São Paulo\n\
    [24] - Goiás\n\
    [25] - Mato Grosso\n\
    [26] - Mato Grosso do Sul\n\
    [27] - Distrito Federal\n");
    printf("Option: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1: printf("South\n"); break;
        case 2: printf("South\n"); break;
        case 3: printf("South\n"); break;
        case 4: printf("North\n"); break;
        case 5: printf("North\n"); break;
        case 6: printf("North\n"); break;
        case 7: printf("North\n"); break;
        case 8: printf("North\n"); break;
        case 9: printf("North\n"); break;
        case 10: printf("North\n"); break;
        case 11: printf("North East\n"); break;
        case 12: printf("North East\n"); break;
        case 13: printf("North East\n"); break;
        case 14: printf("North East\n"); break;
        case 15: printf("North East\n"); break;
        case 16: printf("North East\n"); break;
        case 17: printf("North East\n"); break;
        case 18: printf("North East\n"); break;
        case 19: printf("North East\n"); break;
        case 20: printf("South East\n"); break;
        case 21: printf("South East\n"); break;
        case 22: printf("South East\n"); break;
        case 23: printf("South East\n"); break;
        case 24: printf("Midwest\n"); break;
        case 25: printf("Midwest\n"); break;
        case 26: printf("Midwest\n"); break;
        case 27: printf("Midwest\n"); break;
        default: printf("Invalid option.\n");
    }
}