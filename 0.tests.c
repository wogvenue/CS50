#include <stdio.h>
#include <cs50.h>

void meow(long n);
long get_m(void);

int main(void)
{
    long m = get_m();
    printf("\n");
    meow(m);
    return 0;
}


long get_m(void)
{
    long m = get_long("How many times do you want the cat to meow? ");
    while (m <= 0)
    {
        while (m == 0)
        {
            m = get_long("Zero is not an option, how many times do you want the cat to meow? ");
        }
        while (m < 0)
        {
            m = get_long("Negative numbers are not options, how many times do you want the cat to meow? ");
        }
    }
    return m;
}

void meow(long n)
{
    for (long i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

//Buranın misali planı:
// -
// -
// -
// -
// -
// -
// -
// -
// -
// - 
// -
// -
// -
// -