#include<iostream>
using namespace std;
int main(){
	int A,B,C;
	cout<<"請輸入A值?";
	cin>>A;
	cout<<"請輸入B值?";
	cin>>B;
	cout<<"請輸入C值?";
	cin>>C;
	if (A>B&&A>C){
		cout<<"A="<<A<<"為最大值"<<endl; 
	}
	else if (C>B&&C>A){
		cout<<"C="<<C<<"為最大值"<<endl; 
	}	
	else{
		cout<<"B="<<B<<"為最大值"<<endl; 
	}
	return 0;		 
}
