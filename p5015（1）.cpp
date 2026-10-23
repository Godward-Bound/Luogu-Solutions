#include<cstdio>

int main(){
    char s[10];//s<=5,开10足够 
    int cnt=0;
    int i;
                            //字符串读取时不用加& 
    while(scanf("%s",s)==1){//返回值==1即指可以读到数据 
          for(i=0;s[i]!='\0';i++){//注意！scanf中%s和%d都是“挑食的”, 
          cnt++;//会自动跳过前导的空格/换行，但中间遇到就会自动停 
          }
          }
          printf("%d\n",cnt);
          return 0;
          }
