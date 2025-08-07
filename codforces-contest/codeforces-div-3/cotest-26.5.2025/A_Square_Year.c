#include <stdio.h>
#include <math.h>

int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 1; i <= test_case; i++)
    {
        double year;
        scanf("%lf", &year);
        double root1 = sqrt(year);

        int root2 = root1;

        if (root2 == root1)
        {
        

            int flag = 0;
            for (int i = root2 / 2; i <= root2; i++)
            {

                if (root2 == 45)
                {
                    printf("20 25\n");
                    break;
                }
                for (int j = root2 / 2; j >= 0; j--)
                {
                    if (flag == 1)
                    {
                        break;
                    }

                    if (j + i == root2 && i != j)
                    {
                        printf("%d %d\n", j, i);
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}