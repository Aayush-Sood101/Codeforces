#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int val1 = n / 5;
        int val2 = n % 5;
        if(val1 == 0){
            if(val2 == 1)
            cout<<"a";
            else if(val2 == 2)
            cout<<"ae";
            else if(val2 == 3)
            cout<<"aei";
            else if(val2 == 4)
            cout<<"aeio";
            cout<<endl;
            continue;
        }
        for(int i = 1 ; i<=val1 ; i++){
            cout<<"a";
        }
        if(val2 != 0){
            cout<<"a";
            val2--;
        }
        for(int i = 1 ; i<=val1 ; i++){
            cout<<"e";
        }
        if(val2 != 0){
            cout<<"e";
            val2--;
        }
        for(int i = 1 ; i<=val1 ; i++){
            cout<<"i";
        }
        if(val2 != 0){
            cout<<"i";
            val2--;
        }
        for(int i = 1 ; i<=val1 ; i++){
            cout<<"o";
        }
        if(val2 != 0){
            cout<<"o";
            val2--;
        }
        for(int i = 1 ; i<=val1 ; i++){
            cout<<"u";
        }
        if(val2 != 0){
            cout<<"u";
            val2--;
        }
        cout<<endl;
    }
}