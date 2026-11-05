#include<bits/stdc++.h>
using namespace std;
/*这一版是不调用函数、直接重复做出来的 
所以看上去比较臃肿，因此不推荐这种写法，
但思路都是相同的，也提供了while的循坏写法
*/ 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string n;
    cin>>n;
    if(n.back()=='%'){
        n.erase(n.size()-1,1);    
    reverse(n.begin(),n.end());//反转顺序 
    while(n.size()>1&&n[0]=='0'){
        n.erase(0,1);//erase用于清除指定范围内的字符 
     }
    cout<<n<<"%";
        return 0;
   
    }
    string::size_type pos1=n.find(".");//返回'.'的下标，找不到返回特殊值 
    if(pos1!=string::npos){/*这是说明find的返回值是一个正常值，而不是"无"           
                              即：string n中存在'.'*/ 
	string a=n.substr(0,pos1);//从0开始切pos个字符。即：点前面的那一截 
    string b=n.substr(pos1+1);//从POS+1切到末尾。即：点后面那截 
    
    reverse(a.begin(),a.end());
     reverse(b.begin(),b.end());
    while(a.size()>1&&a[0]=='0'){//size（）>1是为了保证留有一个零 
        a.erase(0,1);            //比如输入0.00,就会输出0.0。而不是0. 
    }
    while(b.size()>1&&b[0]=='0'){
        b.erase(0,1);
    }
    while(b.size()>1&&b.back()=='0'){
        b.pop_back();
    }
        
    cout<<a<<"."<<b;
        return 0;
    }
    string::size_type pos2=n.find("/");
    if(pos2 !=string::npos){
        string a=n.substr(0,pos2);
    string b=n.substr(pos2+1);
    
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    while(a.size()>1&&a[0]=='0'){
        a.erase(0,1);
    }
    while(b.size()>1&&b[0]=='0'){
        b.erase(0,1);
    }
        cout<<a<<"/"<<b;
        return 0;
    }
    else{
        reverse(n.begin(),n.end());
    while(n.size()>1&&n[0]=='0'){
        n.erase(0,1);
        }
         cout<<n;
        }    
    return 0;
}
