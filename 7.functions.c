#include <stdio.h>
#include <cs50.h>

//Bu satıra Ptototype denir.
void meow(long n);
long get_m(void);

int main(void)
{
    long m = get_m();
    meow(m);
    return 0;
}


long get_m(void)
{
    long m;
    do
    {
        m = get_long("How many times do you want the cat to meow? ");
    }
    while (m < 0);
    return m;
}

void meow(long n)
{
    for (long i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}


//Burada "meow" adında bir fonksiyon yazdık ve bu fonksiyonu ana (main)
//fonksiyonumuzun altına girdik. Daha sonra C dili programı üstten alta
//okuduğundan kendi fonksiyonumuzun ilk satırını kopyalayıp en başa yapıştırdık,
//sonuna noktalı virgül koyduk, böylece değişken tanımlarken döngülerde yaptığımızın
//aynını yapmış olduk ve "Böyle bir fonksiyon var." dedik.