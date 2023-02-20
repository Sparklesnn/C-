#include<iostream>
#include<cmath>  //因為使用pow 
using namespace std;
int main(){
	double A,r,y;
	cout<<"請輸入本金?";
	cin>>A;
	cout<<"請輸入年利率?";
	cin>>r;
	r=1+r/100;
	cout<<"請輸入欲存年數?";
	cin>>y;
	for(int n=1;n<=y;n++){
	cout<<"第"<<n<<"年本利和為"<<A*pow(r,n)<<endl; //pow(底數,指數)
	}
}
