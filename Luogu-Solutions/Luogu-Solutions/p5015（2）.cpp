#include<cstdio>

int main(){
    char c;//getchar()函数的返回值其实是int！ 
    int cnt=0;//所以最好用int搭配getchar(),char要看编译器的脸色 
  
    while((c=getchar())!='\n'&&c!=EOF){//getchar与scanf(%c)用法相近，都会读入空格和换行 
          if(c!=' '){                  //c!=EOF是防止循环一直进行下去，EOF返回值为-1，即未读到任何数据 
          cnt++;
          }
          }
          printf("%d",cnt);
          return 0;
          }
		  //总结：读字符(getchar())永远用int
		  //处理字符时(printf("%c",c)):别担心，printf会打印出正确的字符 
		  //即想打印出整数用%d,打印出字母（A）用%c 
