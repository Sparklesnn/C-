#include<iostream>
using namespace std;
int main(){
	int start,old,n;
	float now;
	cout<<"請輸入初始價值?";
	cin>>start;
	cout<<"請輸入折舊價值?";
	cin>>old;
	cout<<"請輸入年數?";
	cin>>n;
	for(int i=1;i<=n;i++){
		now = start-(start-old)*i/n;
		cout<<"第"<<i<<"年價值為"<<now<<endl; 
	}
}
