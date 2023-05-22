#include <stdio.h>

int add(int a, int b){ /// parameter
    int ans = a+b;
    return 0;
}

int difference(int a, int b){
    int ans = a-b;
    return 0;
}

int division(int a, int b){
    int ans = b/a;
    return 0;
}
int main()
{
    int a=10,b=20;

    int c = add(a, b); //argument // 30
    int d = difference(a, b);
    int e = division(a,b);

    printf("%d %d %d\n",c, d, e);

    int x=100,y=70;
    int z = add(x, y);
    printf("%d",z);

    return 0;
}