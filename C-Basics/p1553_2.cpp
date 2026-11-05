#include<bits/stdc++.h>
using namespace std;
string revfront(string x){//这是函数声明，不是调用函数 
//反转加减去前导零  
    reverse(x.begin(),x.end());
    auto p=x.find_first_not_of('0');
    return p==string::npos?"0":x.substr(p);//若能找到'0'，则返回索引值，反之则返回零 
}
string revback(string x){
	//反转加减去后导零，小数专用 
    reverse(x.begin(),x.end());
    auto p=x.find_last_not_of('0');//从后面开始找，用Last！ 
    return p==string::npos?"0":x.substr(0,p+1);//提取'0'前面的字符 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string n;
    cin>>n;
    if(n.back()=='%'){
        n.pop_back();
    cout<<revfront(n)<<"%";
        return 0;
    }
    string::size_type pos1=n.find(".");
    if(pos1!=string::npos){

        cout<<revfront(n.substr(0,pos1))<<".";
        cout<<revback(n.substr(pos1+1));//对于小数来说后面要用revback()函数 
        return 0;
    }
    string::size_type pos2=n.find("/");
    if(pos2 !=string::npos){
       cout<<revfront(n.substr(0,pos2))<<"/";
        cout<<revfront(n.substr(pos2+1));//分数则沿用revfront() 
    }else{
   
         cout<<revfront(n);
        }    
    return 0;
}/*总结：当要处理不同类型的数据时（同时有整数、小数、分数等）
考虑用自定义函数简化代码，提高代码质量。并且可以防止重复出错  */ 
