#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Introduzca 3 numeros diferentes:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
                printf("%d es el mayor y %d es el menor", a, c);
            else
                printf("%d es el mayor y %d es el menor", a, b);
        }
        else
            printf("%d es el mayor y %d es el menor", c, b);
    }
    else
    {
        if(b>c)
        {
            if(a>c)
                printf("%d es el mayor y %d es el menor", b, c);
            else
                printf("%d es el mayor y %d es el menor", b, a);
        }
        else
            printf("%d es el mayor y %d es el menor", c, a);
    }

    return 0;
}
