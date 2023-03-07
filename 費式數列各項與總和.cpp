//F[n]=F[n-1]+F[n-2]
#include<iostream>
using namespace std;
int main(){
    cout<<"請輸入欲測值?";
    int n;
    cin>>n;
    int F[n],sum=0;
    F[0]=1;
    F[1]=1;
    for(int i=2;i<n;i++){
      F[i]=F[i-1]+F[i-2];  
    }
    for(int i=0;i<n;i++){
        cout<<"第"<<i+1<<"個費式數列為"<<F[i]<<endl;
    }
    for(int i=0;i<n;i++){
        sum=sum+F[i];
    }
    cout<<"數列總和為"<<sum<<endl;
}
