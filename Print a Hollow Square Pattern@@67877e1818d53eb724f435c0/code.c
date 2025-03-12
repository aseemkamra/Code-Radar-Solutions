#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i; i<=n;i++){
        for (int j;j<=i;i++){

           if(i == 0 || i == n || j == 0 || j ==m){
            printf("*");
           }
           else
           printf(" ");

        }
        printf("\n");
    }
}