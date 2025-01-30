#include<stdio.h>
int mai()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a== b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a== b || b == c || c == a){
        printf("Isoceles");

    }
    else{
        printf("scalene");
    }
    return 0;
}