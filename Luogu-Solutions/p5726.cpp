#include<cstdio>

int main(){
    int n,i,x=0,h=1,t;
    int a[1100];
    double sum=0.0;//明确数据类型 
    scanf("%d",&n); 
    for(i=0;i<n;i++){
        scanf(" %d ",&a[i]);
    }//其实这里可以直接把sum表达出来。。
    //27行的循环多余了 
    for(int j=0;j<n;j++){
        if(a[j]>=a[x]){   //a[x]为最大值
            t=a[x];  //设立一个“空杯子 ”作为中转站，防止a[x]原来的值被覆盖 
            a[x]=a[j];//下面同理 
            a[j]=t;
        }
        }
        for(int k=0;k<n;k++){
            if(a[k]<=a[h]){  //a[h]为最小值
                t=a[h];
                a[h]=a[k];
                a[k]=t;
        }
        }
    double sco_last;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    sco_last=(double)(sum-a[h]-a[x])/(double)(n-2);//注意！！分母要减2 
    printf("%.2lf\n",sco_last);
    return 0;
}
