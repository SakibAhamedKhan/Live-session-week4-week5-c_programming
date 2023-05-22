#include <stdio.h>


// point 
// formate specifier %p
int main()
{
    int x=20;

    int *b = &x;

    printf("%p\n", &x);
    printf("%p\n", b);

    // Derefernce 
    printf("%d\n", *b);

    // update
    *b = 100;

    printf("%d\n",x);

    return 0;
}