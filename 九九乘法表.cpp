#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;i++){ //外迴圈控制第一數
        for(int j=1;j<=9;j++){ //內迴圈控制第二數以及輸出結果
            cout<<i<<"*"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
}
