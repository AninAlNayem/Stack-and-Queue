#include <bits/stdc++.h>
using namespace std;

bool solve(){

    string str;cin>>str;
    stack<char>st;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }
        else{
            if(st.empty()==1){
               return false;
            }
            int tp=st.top();
            bool a=(tp=='(' && str[i]==')')||(tp=='{' && str[i]=='}')
                  ||(tp=='[' && str[i]==']');
            if(a){
              st.pop();
            }
            else{
                return false;
            }

        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main() {

    int t;cin>>t;
    while(t--){
        bool res=solve();
        if(res){
            printf("Valid\n");
        }
        else{
            printf("Not valid\n");
        }
    }   
 
    return 0;
}
