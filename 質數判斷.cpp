#include<iostream>
using namespace std;
int main(){
	int n,i=2,flag=1;
	cout<<"請輸入欲測值?";
	cin>>n;
	while((flag==1)&&(i<n)){
	  if((n%i==0)){
	  	flag=0;
	  }
	  i=i+1;	
	}
	if(flag==1){
		cout<<n<<"為質數";
	}
	else{
		cout<<n<<"不為質數";
	}
	return 0;
}
