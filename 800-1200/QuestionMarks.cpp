#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        unordered_map<char , int> mp; //char freq
        for(char ch: str)
        mp[ch]++;

        int cnt = 0;

        for(auto p : mp){
            char ch = p.first;
            int freq = p.second;
            if(ch == '?') continue;
            if(freq < n)
            cnt += freq;
            else
            cnt += n;
        }

        cout<<cnt<<endl;
    }
}