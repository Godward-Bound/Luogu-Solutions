#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ans=-1,x,y; 
    cin>>n;
    vector<int>a(n);/*可以直接一行：vector<int>a(n),b(n),g(n),k(n);*/
    vector<int>b(n);//用结构体会更优美
    vector<int>g(n);
    vector<int>k(n);
    
    
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>g[i]>>k[i];//先读取地毯坐标
    }
    
    cin>>x>>y;//再读取点的坐标，否则无法比较（若直接比较x，y都是垃圾值）
    for(int i=0;i<n;i++){
        if(a[i]<=x&&x<=a[i]+g[i]&&b[i]<=y&&y<=b[i]+k[i]){
        /*c++的计算顺序是从左到右.不能写成a[i]<=x<=a[i]+g[i],
        否则会先算a[i]<=x,若成立则为1，反之则为0.但均会小于坐标值*/
            ans=i+1;//一共有n+2行数据
            
    }
    }
    if(ans!=-1)cout<<ans;
    else{
        cout<<"-1";
    }
    return 0;
    
}
