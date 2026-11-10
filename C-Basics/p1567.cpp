#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
    if(a>b)return a;
    else   return b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,cur=1,ans=1;//cur是当前的意思
    cin>>n;
    int t,prv;
    cin>>prv;//prv指先前的，即前一天的气温
    for(int i=2;i<=n;i++){//这里i决定的是循坏进行的次数
           cin>>t;//读取今天的气温，
        if(t>prv)cur++;
        else{ans=max(ans,cur);cur=1;}//此时连续上升中断了，要存档，并且cur要重置为1
           prv=t;//为下一轮循环做好准备
    }
    ans=max(cur,ans);//最终再打一次擂台，赢者即为ans
    cout<<ans;
    return 0;
}
/*
总结：这题没有依循传统的数组与循坏组合的方式进行枚举，而是直接读取、比较、处理,这样滚动的循坏。
另一个很重要的收获就是知道了单纯用i来控制循坏的次数，不在拘泥于i是否有实际意义
t即today,就是今日的气温，他的寿命很短，只有一轮，每次与prv进行交接，
每轮结尾 prv = t; 今天变成昨天，腾位置给明天的t    */
