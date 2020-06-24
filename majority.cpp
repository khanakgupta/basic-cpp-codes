
/**You have to given an array A of size N.
Find all the elements which appear more than floor(N/3) times in the given array.
Wait Wait!
There is a condition that you have to do your job in O(N) time complexity and O(1) space complexity.

Input Format
First line contains N ->No. of elements in the array
Second line has N integers denoting the elements of the array A ie A1,A2,A3…….AN.

Constraints
1<=N<=10^7
0<=Ai<=10^9

Output Format
Print a single line containing all the majority elements occurring more than floor(N/3) times.
If there is no majority element then just print "No Majority Elements".

Sample Input
8
2 2 3 1 3 2 1 1 
Sample Output
1 2
Explanation
None**/

#include<iostream>
using namespace std;
#include<vector>

vector<int> f(vector<int> d ){
    int ele1 ,ele2 , count1=1, count2=0 ;
    ele1=d[0];
    ele2=0;;
     
    for(int i=1;i<d.size();i++){

        if(count1==0){
            ele1=d[i];
            count1=1;

        }
        else if(d[i]==ele1){
            count1++;
        }
        else if(d[i]==ele2){
            count2++;

        }
        else if(count2==0){
            ele2=d[i];
            count2=1;

        }
        else{
            count2--;
            count1--;
        }
        

    }
    //cout<<ele1;
    //cout<<ele2;
    count1=count2=0;
    for(int i=0; i<d.size() ;i++){
        if(ele1==d[i]){
            count1++;
        }
        else if(ele2==d[i]){
            count2++;
        }

    }
    //cout<<count1;
    //cout<<count2;
    vector<int> ans;
    if(count1>d.size()/3){
        ans.push_back(ele1);
    }
    if(count2>d.size()/3){
        ans.push_back(ele2);
    }
    //cout<<ans.size();
    /**for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }**/
    return ans;

}

int main(){
    int n  ;
    //int t=n/3;
    cin>>n;
    vector<int> d(n,0);
    
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    
    vector<int> ans;
    
    ans=f(d);
    if(ans.size()==0){
        cout<<"No Majority Elements"<<endl;
    }
    else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    cout<<endl;
    return 0;


    

}
