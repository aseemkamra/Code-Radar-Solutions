#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i; i<=n;i++){
        for (int j;j<=i;i++){
            printf("*");
        }
    }
}