#include<stdio.h>

int main()
{int n;
int fact=1;
int i =1;
scanf("%d",&n);
for (i=1; i <=n; i++)
{
        fact *= i;
        printf("´ËÊ±i=%d,fact=%d\n",i,fact);
}
        printf("%d!=%d\n",n,fact);
        return 0;   
}
