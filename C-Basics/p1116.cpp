#include<cstdio>

int main()
{
    int n,a[1100],cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);//不能忘了&，不然会数组越界导致段错误 
    }
    for(int i=0;i<n-1;i++){  //条件取n-1是为了防止数组越界，当j=n-1，j+1=n，但a[n]不存在的！ 
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
