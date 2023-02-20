#include<iostream>
using namespace std;
int main(){
	int A,B,C;
	cout<<"請輸入第一數?";
	cin>>A;
	cout<<"請輸入第二數?";
	cin>>B;
	do{
		C=A%B;
		A=B;
		B=C;
	}
	while(C!=0);
	cout<<"最大公因數為"<<A;
	return 0; 
}
