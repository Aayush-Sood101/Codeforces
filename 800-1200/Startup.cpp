#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;

        unordered_map<int , int> mp; // brand sum
        for(int i = 0 ; i<k ; i++){
            int b , c;
            cin>>b>>c;
            if(mp.find(b) != mp.end()){ // bottle is found with brand index
                mp[b] += c;
            } // no bottle found with brand index
            else
            mp[b] = c;
        }

        priority_queue<int> pq; // maxHeap
        for(auto p : mp){
            int sum = p.second;
            pq.push(sum);
        }

        int sum = 0;

        while(pq.size() > 0 && n > 0){
            sum += pq.top();
            pq.pop();
            n--;
        }

        cout<<sum<<endl;
    }

}