#include <stdio.h>

void fun(int n){ // n = 6 5 4 3 2 1 0 

    // base case
    if(n<0){
        return;
    }
    // recursive case
    fun(n-1);

    if(n%2!=0){
        printf("%d ",n);
    }
}

int main()
{
    int n;
    scanf("%d",&n); // n=6

    fun(n); // 6
    return 0;
}