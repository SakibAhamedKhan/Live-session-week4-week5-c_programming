#include <stdio.h>

// call by value
void fun(int x){
    x=100;
}

// call by reference
void fun2(int* y){
    printf("%d\n",*y);
    *y=200;
}

int main()
{
    int b = 30;

    //int *a = &b;

    //fun(b);

   // printf("%d\n",b);

    fun2(&b);

    printf("After fun2 call: %d\n",b);

    return 0;
}