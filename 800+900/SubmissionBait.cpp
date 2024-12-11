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

        bool flag = false;

        for(auto p : mp){
            int freq = p.second;
            if(freq % 2 != 0){
                flag = true;
                break;
            }
        }

        cout<<((flag) ? "YES" : "NO")<<endl;
    }
}