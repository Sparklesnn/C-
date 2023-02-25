#include<iostream>
using namespace std;
int main(){
    int n,sum,sumALL=0;
    cout<<"請輸入測值?";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=i;j++){
            sum=sum+j;
        }
        cout<<"i="<<i<<", sum="<<sum<<endl;
        sumALL=sumALL+sum;
    }
    cout<<"總值為"<<sumALL;
}
