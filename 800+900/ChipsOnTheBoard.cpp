#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        ll minValA = INT_MAX , sumA = 0;
        ll minValB = INT_MAX , sumB = 0;

        for(int i = 0 ; i<n ; i++){
            ll val;
            cin>>val;
            if(val < minValA){
                minValA = val;
            }
            sumA += val;
        }


        for(int i = 0 ; i<n ; i++){
            ll val;
            cin>>val;
            if(val < minValB){
                minValB = val;
            }
            sumB += val;
        }

        ll val1 = minValA * n + sumB;
        ll val2 = minValB * n + sumA;

        ll val3 = min(val1 , val2);
        cout<<val3<<endl;

    }
}