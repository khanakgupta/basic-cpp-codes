#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
#include<vector>
int fun(vector<string> a,int i, string s){
    if(i==a.size()){
        int freq[26]={0};
        for(int k=0;k<s.length();k++){
            if(freq[s[k]-'a']==1)
            return 0;
            freq[s[k]-'a']++;
        }
        
        return s.length();


    }
    //include the ith string 
    // or exclude the ith string 
    int op1,op2;
    op1=op2=INT_MIN;
    if(s.length()+a[i].length()<=26){
        op1=fun(a,i+1,s+a[i]);
    }
    op2=fun(a,i+1,s);
    
    return max(op1 ,op2);


}

int uniques(vector<string> a){
    string s="";
    return fun(a, 0,s);

}


int main(){
    int n;
    cin>>n;
    vector<string> a;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        a.push_back(c);


    }
    cout<<uniques(a)<<endl;
    return 0;
}
