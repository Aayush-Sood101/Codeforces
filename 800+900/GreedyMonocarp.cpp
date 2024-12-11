#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;

        priority_queue<int> pq; // maxHeap
        for(int i = 0 ; i<n ; i++){
            int val;
            cin>>val;
            pq.push(val);
        }

        int sum = 0;
        int pVal = -1;
        while(pq.size() > 0){
            int val = pq.top();
            pq.pop();
            sum += val;
            pVal = val;
            if(sum >= k)
            break;

        }
        if(sum < k)
        cout<<k - sum<<endl;
        else if(sum == k)
        cout<<"0"<<endl;
        else{
            cout<<(k - (sum - pVal))<<endl;
        }
    }
}