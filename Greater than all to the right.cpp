#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    vector<int>arr;
    bool f=1;
    int mx=-1;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        arr.push_back(a);
        if(a>=mx){
            mx=a;
        }
        else{
            f=0;
        }
    }
    if(f && n!=1){
        printf("%d\n",n);
        continue;
    }
    mx=-1;
    vector<int>res;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>mx){
            res.push_back(arr[i]);
            mx=arr[i];
        }
    }

   sort(res.begin(),res.end());
   for(int i=0;i<res.size();i++){
    cout<<res[i]<< " ";
   }
   cout<<"\n";


  }
return 0;
}
