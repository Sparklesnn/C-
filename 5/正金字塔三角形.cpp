#include<iostream>
using namespace std;
int main(){
    int n;
    do{
      for(int i=1;i<=n;i++){
        for(int k=0;k<n-i;k++){
            cout<<"-";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"+";
        }
        for(int q=0;q<n-i;q++){
            cout<<"-";
        }
        cout<<endl;
      }
    }while(cin>>n);
}
