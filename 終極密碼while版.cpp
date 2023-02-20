#include<iostream>
#include<cstdlib>  //提供一些函式與符號常量
#include<ctime>  //以時間作為亂數
using namespace std;
int main(){
	int guess,target;
	srand(time(NULL));  //使用srand函式初始化隨機函示，以time系統函式產生數值為參數 
	target=rand()%100+1;  //rand函式產隨機數值
	do{
		cout<<"請猜一個數字?";
		cin>>guess;
		if(guess>target){
			cout<<"猜太大"<<endl;
		}
		else if(guess<target){
			cout<<"猜太小"<<endl;
		}
		else{
			cout<<"答對了"<<endl; 
		}
	}while(guess!=target); 
}
