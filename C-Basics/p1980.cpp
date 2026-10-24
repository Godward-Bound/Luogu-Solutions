#include<cstdio>

int main(){
    int n;
    int x;
    int cnt=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        int j=i;
          while(j>0){//不能把while放在if里面！要先进循坏进行j/=10；才能进行正确判断
              if(j%10==x){
            cnt++;
    }
            j/=10;//绝对不能把这行放到if里，否则直接死循环！！
        
    }
    }
    printf("%d\n",cnt);
    return 0;
}
