#include<cstdio>

int main(){
    int n,k,a[11000],j=0,h=0;//其实这题不用数组更简单。。 
    int sum1=0,sum2=0;    //不用数组：for(int i=0;i<=n;i++) 
    scanf("%d %d",&n,&k);//if(i%k==0){sum1+=i;j++} 
    for(int i=0;i<n;i++){
        a[i]=i+1;//用数组必须自己手动把1到n塞进数组 
        
        if(a[i]%k==0){
            j++;
            sum1+=a[i];
        }else {   //不用数组的方法与上面同理 
            h++;
            sum2+=a[i];
        }    
    }
    double m,b;
    m=(double)sum1/j;//强制转换不能忘 
    b=(double)sum2/h;
    printf("%.1lf %.1lf\n",m,b);
    return 0;
}
