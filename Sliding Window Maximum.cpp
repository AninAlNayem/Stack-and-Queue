#include<bits/stdc++.h>
using namespace std;

void solve(){

   int n,k;cin>>n>>k;
   vector<int>num(n,0);
   for(int i=0;i<n;i++){
     cin>>num[i];
   }
   deque<int>deq;
   for(int i=0;i<n;i++){

     while(!deq.empty() && deq.front()<=i-k){
        deq.pop_front();
     }
     while(!deq.empty() && num[i]>=num[deq.back()]){
           deq.pop_back();
     }
     deq.push_back(i);
     if(i>=k-1){
        printf("%d ",num[deq.front()]);
     }
   }printf("\n");

}

int main(){

  int t;cin>>t;
  while(t--){
    solve();
  }

return 0;
}
