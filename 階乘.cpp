#include<iostream>
using namespace std;
int main(){
	int i=0,M;
	int fac=1;
	cout<<"請輸入欲測數字?";
	cin>>M;
	while(i<M){
		i=i+1;
		fac=fac*i;
	}
	cout<<"階乘為"<<fac;
	return 0;
}
