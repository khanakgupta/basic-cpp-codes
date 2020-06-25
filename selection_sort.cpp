#include<iostream>
using namespace std;

void s(int a[] , int n){
    for(int j=0;j<n-1;j++)
    {
        int min=a[0];
        int min_index=0;
        for(int i=j+1;i<n;i++){
            if(min>a[i]){
                min=a[i];
                min_index=i;
            }
        }
        int temp=a[j];
        a[j]=a[min_index];
        a[min_index]=temp;
    }


}

int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    s(a , n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}