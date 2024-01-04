/*
Given a non-negative integer N represented as a string, remove K digits from the number so that the new number is the smallest possible.
Input:
2
1432219 3
10 1
Output:
1219
0
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
   string str;cin>>str;
   int k;cin>>k;

   int n=str.length();
   stack<char>st;
   for(int i=0;i<n;i++){
      while(!st.empty() && str[i]<st.top() && k>0){
            st.pop();
            k--;
      }
      st.push(str[i]);
   }
   while(k--){
    st.pop();
   }

   string ans="";
   while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
   }

   reverse(ans.begin(),ans.end());

   string res="";
   int idx=0;
   n=ans.length();
   while(idx<n){
      if(ans[idx]!='0')
        break;
      idx++;
   }
   for(int i=idx;i<n;i++){
     res.push_back(ans[i]);
   }
   if(res.length()>0){
      cout<<res<<"\n";
   }
   else{
     cout<<"0"<<"\n";
   }
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }

return 0;
}
