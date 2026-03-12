#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char q = get_char("Kare mi dikdörtgen mi? (k/d) ");
    while (q != 'k' && q != 'd')
    {
        q = get_char("Sadece küçük harfle 'k' ya da 'd' karakterlerini kullanarak cevaplayınız. Kare mi dikdörtgen mi? ");
    }
    if (q == 'd')
    {
        const int a = get_int("Uzunluk? ");
        const int b = get_int("Genişlik? ");
        printf("\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else if (q == 'k')
    {
        const int c = get_int("Kenar uzunluğu? ");
        printf("\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}

//Bu şu demek: 3(3#\n) ve default yan yanadır. Yani 3 kez ###\n çizer. Sütun uzunluğu = Satır adedi. Yani i = satır adedi ve satır uzunluğu yani j = satırdaki tuğla adedi = satır uzunluğu.