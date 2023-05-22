#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int space=n-1;
    int star=1;
    for(int i=1; i<=n; i++){
        // space print
        for(int j=1; j<=space; j++){
            printf(" ");
        }

        // star print
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");

        space = space -1;
        star = star + 1;
    }

    return 0;
}