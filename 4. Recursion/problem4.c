#include <stdio.h>

int fun(int n){  // n=5 4 3 2 1 0
    // base case
    if(n==0){
        return 0;
    }

    // recursive case
    if(n%2!=0){
        int ans = n + fun(n-1);
        return ans;
    } else {
        int ans  =  fun(n-1);
        return ans;
    }

}

int main()
{
    int n;
    scanf("%d",&n); // n= 5
    int ans = fun(n); // 5
    printf("%d\n",ans);

    return 0;
}