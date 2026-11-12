#include<bits/stdc++.h>
using namespace std;

struct student{//结构体全部打包
    int chin;//语文成绩，下同
    int math;
    int engl;
    int bh;//学号
    int sum;
};
bool cmp( student a,student b){//bool 类型只返回true和false
    if(a.sum!=b.sum)return a.sum>b.sum;//只要两者总分不相等，就按总分大到小排列
    else
        if(a.chin!=b.chin)return a.chin>b.chin;//若总分相等，则按语文成绩大小排列
    else
        return a.bh<b.bh;//若前两者都相等，则按学号大小排列，规定小的排在前面
}
int main(){
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].chin>>arr[i].math>>arr[i].engl;//只读取三科成绩，不能读取学号！否则只能读到垃圾值
        arr[i].bh=i+1;//学号从一开始，不是零
        arr[i].sum=arr[i].chin+arr[i].math+arr[i].engl;//定义总分
        }
        sort(arr,arr+n,cmp);//begin、end都是vector里自带的，裸数组里用不了
                           //cmp是指这段数据的排列规则
    for(int i=0;i<5;i++){
        cout<<arr[i].bh<<" "<<arr[i].sum<<"\n";//注意要换行
    }
    return 0;
}
