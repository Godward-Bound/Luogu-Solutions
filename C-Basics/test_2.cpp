#include<bits/stdc++.h>//万能头文件，c++标配 

int main()
{
	int arr[5]={10,20,30,40,50};//定义普通数组 
	//定义指针p.取向数组首地址（&arr[0]） 
	int*p=arr;//用for循坏配合*（p+1）打印 
	for(int i=0;i<5;i++){
		//arr[i]的本质就是*(arr+i)
		//所以*(p+i)就是顺着指针往后找 
		printf("%d ",*(p+i));
		
	}
	//注意：上面的for循坏结束后，p依然指向arr[0]
	//这里为了安全，我们让p重新指回开头 
	printf("\n");
	p=arr;
	
	while(p<arr+5){//arr+5就是最后一个元素后面的地址 
		printf("%d ",*p);//以下两步可以用 printf("%d",*p++)代替 
		p++;//因为++的优先级比*高 
	}
	printf("\n");
	return 0;
 } 
