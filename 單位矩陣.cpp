#include<iostream>
using namespace std;
int main(){
    int i=1,j; //記得初始化i=1
    while(i<=4){
        j=1;
        while(j<=4){
            if(i==j){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            j++;
        }
        i++;
        cout<<endl;
    }
}
