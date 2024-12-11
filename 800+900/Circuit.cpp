#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int cnt0 = 0 , cnt1 = 0;
        for(int i = 0 ; i<2*n ; i++){
            int val;
            cin>>val;
            if(val == 0) cnt0 += 1;
            else cnt1 += 1;
        }
        int val1 = cnt0 / 2;
        int val2 = cnt1 / 2;
        cout<<(n - val1 - val2)<<" ";
        cout<<min(cnt0 , cnt1)<<endl;
    }
}