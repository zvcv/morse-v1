#include <stdio.h>

int main()
{

    char again;
    char *dotdash[27] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "/"};
    char inputt[500];
    int ngannou;

    do
    {
        printf("Input: ");
        scanf("%[^\n]%*c", inputt);
        // scanf("%i", &ngannou);

        int length = 0;
        while (inputt[length] != '\0')
        {
            length++;
        }
        printf("Morse: ");
        for (int i = 0; i < length; i++)
        {
            if (inputt[i] >= 97 && inputt[i] <= 122)
            {
                printf("%s ", dotdash[inputt[i] - (97)]);
            }
            else if (inputt[i] >= 65 && inputt[i] <= 90)
            {
                printf("%s ", dotdash[inputt[i] - (65)]);
            }
            else if (inputt[i] == 32)
            {
                printf("%s ", dotdash[26]);
            }
            else
            {
                printf("%c ", inputt[i]);
            }
        }
        printf("\n");

        // for (int x = 0; x < length; x++)
        // {
        //     inputt[x] = 0;
        // }

        printf("again? (Y/N) : ");
        scanf("%c", &again);

    } while ((again == 'Y') || (again == 'y'));

    return 0;
}