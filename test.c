#include <stdio.h>

int main()
{
    int bil;
    char re;

    do
    {
        printf("Masukkan bilangan = ");
        scanf("%d", &bil);

        if (bil % 2 == 0) // bil. genap
        {
            printf("%d adalah bilangan genap\n", bil);
        }
        else // bil. genap
        {
            printf("%d adalah bilangan ganjil\n", bil);
        }

        printf("\nMau diulang lagi (Y/T)?");
        scanf(" %c", &re);

    } while ((re == 'Y') || (re == 'y'));

    return 0;
}
