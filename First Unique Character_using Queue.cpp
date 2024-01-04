#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;cin>>str;
    int arr[27];
    for(int i=0;i<27;i++)arr[i]=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        int idx=str[i]-'a';
        arr[idx]++;

    }
    char ch='\0';
    for(int i=0;i<n;i++){
        int idx=str[i]-'a';
        if(arr[idx]==1){
            ch=str[i];
            break;
        }
    }
    if(ch=='\0')
      printf("N\n");
    else
      printf("%c\n",ch);
}

int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
