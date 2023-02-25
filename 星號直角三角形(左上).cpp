#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"請輸入層數?";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){ //因頂端為三角形最寬處，故需小於等於n
            cout<<"*";
        }
        cout<<endl;
    }
}
