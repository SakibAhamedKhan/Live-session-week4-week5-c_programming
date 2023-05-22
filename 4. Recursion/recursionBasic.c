#include <stdio.h>

void first(int n){
    // base case
    if(n==5){
        return;
    }

    printf("first function\n");
    // recursive case
    first(n+1);
}

int main()
{
    first(1);

    return 0;
}