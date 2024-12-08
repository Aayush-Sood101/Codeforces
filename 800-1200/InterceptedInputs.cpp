#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        unordered_map<int, int> mp; //val freq
        for(int i = 1 ; i<=k ; i++){
            int val;
            cin>>val;
            mp[val]++;
        }

        k -= 2;

        for(auto p : mp){
            int val = p.first;
            int freq = p.second;
            if(k % val == 0){
                int req_val = k / val;
                if(mp.find(req_val) != mp.end()){
                    if(val != req_val || (val == req_val && mp[val] > 1)){
                        cout<<val<<" "<<req_val<<endl;
                        break;
                    }
                }
            }
        }
    }
}