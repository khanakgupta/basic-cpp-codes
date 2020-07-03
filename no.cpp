#include<iostream>
using namespace std;

void merge(int *a , int s, int end){
    int mid=(s+end)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];

    while(i<=mid && j<=end){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    //copying the remaining elements 
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=end){
        temp[k++]=a[j++];

    }

    for(int i=s;i<=end;i++){
        a[i]=temp[i];
    }
    
}


void sort(int *a , int s , int end){
    //using the base condition
    if(s>=end ){
        return ;
    }
    //declaring the mid
    int mid=(s+end)/2;
    //sorting recursively
    sort(a,s,mid);
    sort(a,mid+1,end);
    merge(a,s, end);



}

int main(){
    int s;
    cin>>s;

    int a[100];
    for(int i=0;i<s;i++){
        cin>>a[i];

    }
    sort(a,0,s-1);
    for(int i=0;i<s;i++){
        cout<<a[i];
    }
    return 0;


}