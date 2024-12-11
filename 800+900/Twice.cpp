#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int , int> mp; //val freq
        for(int i = 0 ; i<n ; i++){
            int val;
            cin>>val;
            mp[val]++;
        }

        int cnt = 0;
        for(auto p : mp){
            int freq = p.second;
            cnt += freq / 2;
        }

        cout<<cnt<<endl;
    }
}