#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"請輸入層數?";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  //印星號
            cout<<"*";
        }
        cout<<endl;
    }
}
