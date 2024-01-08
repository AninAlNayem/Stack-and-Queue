#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l[n],r[n];
    stack<int>st;
  
    // previous smaller
  
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            l[i]=0;
        }
        else{
            l[i]=st.top()+1;
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }

  // next smaller
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            r[i]=n-1;
        }
        else{
            r[i]=st.top()-1;
        }
        st.push(i);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,(r[i]-l[i]+1)*arr[i]);
    }
    cout<<ans<<"\n";

}

int main(){
   int t;cin>>t;
   while(t--){
     solve();
   }
}
