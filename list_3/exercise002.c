#include <stdio.h>

void header() {
    for (int i = 0; i < 20; i++)
    {
        printf("\n");
    }
    printf("====== WATCH LIST ======\n");
}

int main() {
    int option = 0;

    header();
    printf("Select a category:\n[1] - Film\n[2] - Serie\n[3] - Documentary\n");
    printf("Option: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            header();
            printf("Select a gender:\n[1] - Suspense\n[2] - Action\n");
            printf("Option: ");
            scanf("%d", &option);

            switch (option)
            {
                case 1: printf("The orphan.\n"); break;
                case 2: printf("Batman: The Dark Knight.\n"); break;
                default: printf("Invalid option.\n"); break;
            }

            break;
        
        case 2:
            header();
            printf("Select a gender:\n[1] - Drama\n[2] - Comedy\n");
            printf("Option: ");
            scanf("%d", &option);

            switch (option)
            {
                case 1: printf("Revenge.\n"); break;
                case 2: printf("How I met your mother.\n"); break;
                default: printf("Invalid option.\n"); break;
            }

            break;
        
        case 3:
            header();
            printf("Select a gender:\n[1] - Investigation\n[2] - Science\n");
            printf("Option: ");
            scanf("%d", &option);

            switch (option)
            {
                case 1: printf("Revenge.\n"); break;
                case 2: printf("How I met your mother.\n"); break;
                default: printf("Invalid option.\n"); break;
            }

            break;
        
        default: printf("Invalid option.\n"); break;
    }
}