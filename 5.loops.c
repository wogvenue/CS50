#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //normal while loop:
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }

    //normal for loop:
    for (int i2 = 0; i2 < 3; i2++)
    {
        printf("meow2\n");
    }

    //while and get loop:
    int n = get_int("What's n? ");
    while (n < 0)
    {
        n = get_int("n can't be smaller than zero. What's n? ");
    }
    for (int i3 = n; i3 > 0; i3--)
    {
        printf("meow3\n");
    }

    //while-if-for loop:
    int m;
    while (true)
    {
        m = get_int("What's m? ");
        if (m < 0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    for (int i4 = m; i4 > 0; i4--)
        {
        printf("meow4\n");
        }
    
    //do-while loop:
    int b;
    do
    {
        b = get_int("What's b? ");
    }
    while (b < 0);
    for (int i5 = 0; i5 < b; i5++)
    {
        printf("meow5\n");
    }
}

//counter'ı +1 arttır = counter = counter + 1; = counter += 1; = counter++;
//burada olan önce bir counter atamak, sonra o counter'ın değerini bir arttırmaktır.
//aynı matematik gibi: ! = değildir demek. (n = 0) değil demek için bir parantez daha açarız. (!(n = 0)).