int star = 1, space = 6;

        for (int i = 0; i < n + 5; i++)
        {
            for (int j = 0; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }

            printf("\n");
            star += 2;
            space--;
        }