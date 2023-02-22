#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"請輸入欲測數值?";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+pow(i,2);
    }
    cout<<"1*1+2*2+...+n*n等於"<<sum; 
}
