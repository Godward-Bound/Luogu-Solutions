#include<bits/stdc++.h>//万能头文件 
using namespace std;
int main(){
    ios::sync_with_stdio(false);//加速咒语 
    cin.tie(0);
    string n;//把整数当作字符串处理 
    cin>>n;
    if(n[0]=='-'){
    cout<<"-";
        n=n.substr(1);//把‘-’拿掉之后赋值为正数 
    }
    reverse(n.begin(),n.end());//颠倒顺序 
    while(n.size()>1&&n[0]=='0'){
        n.erase(0,1);//若有前导零则消除 
    }
    cout<<n<<"\n";//输出结果 
    return 0;
}

