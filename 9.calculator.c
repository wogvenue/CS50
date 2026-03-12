#include <stdio.h>
#include <cs50.h>
#include <string.h>

int topla(int x, int y);
int çıkar(int x, int y);
int çarp(int x, int y);
int böl(int x, int y);

int main(void)
{
    string a = get_string("Hangi işlemi yapmak istersin? ");
    int x = get_int("1. sayıyı giriniz: ");
    int y = get_int("2. sayıyı giriniz: ");
    if (strcmp(a, "toplama") == 0)
    {
        topla(x, y);
    }
    else if (strcmp(a, "çıkarma") == 0)
    {
        çıkar(x, y);
    }
    else if (strcmp(a, "çarpma") == 0)
    {
        çarp(x, y);
    }
    else if (strcmp(a, "bölme") == 0)
    {
        böl(x, y);
    }
    else
    {
        printf("Dört işlemden birini tamamı küçük harfle yazmalısınız!\n");
        return 1;
    }
    return 0;
}

int topla(int x, int y)
{
    int z = printf("Cevap: %i\n", x + y);
    return z;
}
int çıkar(int x, int y)
{
    int z = printf("Cevap: %i\n", x - y);
    return z;
}
int çarp(int x, int y)
{
    int z = printf("Cevap: %i\n", x * y);
    return z;
}
int böl(int x, int y)
{
    float z;
    while (y == 0)
    {
        y = get_int("Sıfıra bölünmez. 2. sayıyı tekrar giriniz: ");
    }
    z = printf("Cevap: %f\n", (float) x / y);
    return z;
}

// x = x * 2; == x *= 2;