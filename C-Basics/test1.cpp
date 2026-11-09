#include<cstdio>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
	int main(){
		int a=2,b=4;
		swap(&a,&b);
		printf("%d %d",a,b);
		return 0;
	} 
