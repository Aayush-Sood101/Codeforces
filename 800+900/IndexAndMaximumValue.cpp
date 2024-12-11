#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        ll max_val = LLONG_MIN;
        for(int i = 0 ; i<n ; i++){
            ll val;
            cin>>val;
            if(val > max_val){
                max_val = val;
            }
        }

        for(int i = 0 ; i<m ; i++){
            char ch;
            cin>>ch;
            int l , r;
            cin>>l>>r;
            if(l<=max_val && max_val<=r){
                if(ch == '+')
                max_val += 1;
                else
                max_val -= 1;
            }

            cout<<max_val<<" ";
        }
        cout<<endl;
    }
}