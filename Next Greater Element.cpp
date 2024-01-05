/*
Problem Statement
Given an integer array, find the next greater element for every array element. The next greater element of a number x is the first greater number to the right of x in the array.
Input:
2
7
2 7 3 5 4 6 8
5
1 2 3 4 5
Output:
7 8 5 6 6 8 -1
2 3 4 5 -1
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   stack<int>st;
   vector<int>res;
   for(int i=n-1;i>=0;i--){
     if(st.empty()){
        res.push_back(-1);
        st.push(arr[i]);
     }
     else{
        if(arr[i]<st.top()){
            res.push_back(st.top());
            st.push(arr[i]);
        }
        else{
            while(!st.empty() && arr[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                res.push_back(-1);
                st.push(arr[i]);
            }
            else{
                res.push_back(st.top());
                st.push(arr[i]);
            }
        }
     }
   }
   for(int i=n-1;i>=0;i--){
    cout<<res[i]<<" ";
   }cout<<"\n";

}

int main(){

   int t;cin>>t;
   while(t--){
    solve();
   }

}
