//I need to replace min char with max char
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string str;
        cin>>str;

        unordered_map<char , int> mp; // char freq
        for(char ch: str)
        mp[ch]++;

        char maxCh = '\0';
        int maxFreq = 0;
        char minCh = '\0';
        int minFreq = INT_MAX;
        
        for(auto p : mp){
            char ch = p.first;
            int freq = p.second;

            if(freq > maxFreq){
                maxFreq = freq;
                maxCh = ch;
            }
        }
        for(auto p : mp){
            char ch = p.first;
            int freq = p.second;

            if(freq < minFreq && ch != maxCh){
                minFreq = freq;
                minCh = ch;
            }
        }
        string ans;
        bool flag = true;

        for(char ch: str){
            if(flag && ch == minCh){
                flag = false;
                ans += maxCh;
            }
            else
            ans += ch;
        }
        
        cout<<ans<<endl;
    }
}