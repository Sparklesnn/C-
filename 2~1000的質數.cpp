#include<iostream>
using namespace std;
int main(){
    int flag,j;
    for(int i=2;i<=1000;i++){
        j=2,flag=1;
        while((flag==1)&&(j<i)){
            if((i%j)==0){
                flag=0;
            }
            j=j+1;
        }
        if(flag==1){
            cout<<i<<"為質數"<<endl;
        }
    }
}
