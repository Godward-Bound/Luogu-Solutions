#include<bits/stdc++.h>
using namespace std;

int min(int a,int b){
	if(a<b)return a;
	else   return b;
} 

int main(){
    int n,a[11000],b[11000],sum[5],num,ans=INT_MAX;
    cin>>n;
    for(int i=0;i<3;i++){
        cin>>a[i]>>b[i];
    if(n%a[i]==0)num=n/a[i];    //第一遍，只比不算 
        else     num=n/a[i]+1;
	    sum[i]=b[i]*num; 
    } 
    
    ans=min(min(sum[0],sum[1]),sum[2]);
	//第二遍，数值都确定了，不存在未出生的，随便比较 
    cout<<ans<<"\n";
    return 0;
}/*第三种写法，同样调用函数 
ans=10000*10000;
for(int i=0;i<3;i++){
    cin>>a[i]>>b[i];
    if(n%a[i]==0) num=n/a[i];
    else          num=n/a[i]+1;
    sum[i]=num*b[i];
    ans=min(ans,sum[i]);     // 跟上一轮的胜者比,不是跟sum[i+1]这个还没出生的"垃圾值"比 
*/ 
