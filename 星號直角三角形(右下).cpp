#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"請輸入層數?";
    cin>>n;
    for(int i=1;i<=n;i++){  //當i增加，k(空白)一同遞減，j(星號)則遞增
        for(int k=1;k<=n-i;k++){ 
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
