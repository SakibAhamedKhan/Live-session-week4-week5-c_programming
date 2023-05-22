#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int star=1;
    for(int row=1; row<=n; row++){
        for(int space=1; space<= (n-row); space++){
            printf(" ");
        }
        
        for(int j=1; j<=star; j++){
            printf("%d",row);
        }
        printf("\n");

        star = star +2;
    }

    return 0;
}