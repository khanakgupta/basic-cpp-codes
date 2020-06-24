#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b[10];
    for(int i=0;i<10;i++){
        cin>>b[i];
    }
    int num=b[0];
    for(int i =0;i<10;i++){
        num^b[i];
        cout<<num;
    }
    return 0;


}