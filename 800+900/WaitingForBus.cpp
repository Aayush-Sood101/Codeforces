#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int waitList = 0;
    while(n--){
        char ch;
        cin>>ch;
        int val;
        cin>>val;
        if(ch == 'P')
        waitList += val;
        else{
            if(waitList < val){
                cout<<"YES"<<endl;
                waitList = 0;
            }
            else if(waitList == val){
                cout<<"NO"<<endl;
                waitList = 0;
            }
            else{
                waitList -= val;
                cout<<"NO"<<endl;
            }
        }
    }
}