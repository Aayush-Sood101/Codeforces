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

        int cnt0 = 0;
        int cnt1 = 0;
        for(int k = 0 ; k<n ; k++){
            char ch = str[k];
            if(ch == '1')
            cnt1++;
            else{
                int i = k , j = k + 1;
                while(j < n){
                    if(str[j] == '0')
                    j++;
                    else
                    break;
                }
                cnt0++;
                k = j - 1;
            }
        }

        if(cnt1 > cnt0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}