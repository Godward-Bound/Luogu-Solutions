#include<cstdio>

int main(){
   double a;
    int n,g,s,b,q;
    scanf("%lf",&a);
    n=(int)(a*10+0.5);
        q=n/1000;
        b=n/100%10;
        s=n%100/10;
        g=n%10;
        printf("%d.%d%d%d\n",g,s,b,q);
        //这题没啥好说的，这是最好想的方法，主要是不要想的太复杂了 
    
    return 0;
    
}
