#include<iostream>
using namespace std;
int main(){
    int acc=123,pass=000,a,p;
    do{
        cout<<"請輸入帳戶?";
        cin>>a;
        cout<<"請輸入密碼?";
        cin>>p;
        if((a==acc)&&(p==pass)){
            cout<<"帳號密碼正確"<<endl;
        break;
        }
        else{
        cout<<"請再輸入一次"<<endl;    
        }
    }while(1);
}
