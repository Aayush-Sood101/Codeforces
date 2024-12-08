#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int days;
        cin>>days;

        int req_blocks = 1;
        int size = 1;
        int cnt = 0;

        int blocks = 0;

        for(int i = 1 ; i<=days ; i++){
            int val;
            cin>>val;
            blocks += val;
            while(req_blocks < blocks){
                req_blocks = size * size;
                size += 2;
            }
            if(req_blocks == blocks)
            cnt++;
        }

        cout<<cnt<<endl;
    }
}