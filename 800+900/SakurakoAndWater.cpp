#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v(n , vector<int> (n));

        //matrix input
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                cin>>v[i][j];
            }
        }

        int sum = 0;

        for(int k = n - 1 ; k>=0 ; k--){
            int j = k , i = 0;
            int min_val = INT_MAX;
            while(i < n && j < n){
                if(v[i][j] < min_val){
                    min_val = v[i][j];
                }
                i++;j++;
            }
            if(min_val < 0)
            sum += (-min_val);
        }

        for(int k = 1 ; k<n ; k++){
            int i = k , j = 0;
            int min_val = INT_MAX;
            while(i < n && j < n){
                if(v[i][j] < min_val){
                    min_val = v[i][j];
                }
                i++;j++;
            }
            if(min_val < 0)
            sum += (-min_val);
        }

        cout<<sum<<endl;

    }
}