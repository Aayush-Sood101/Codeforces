#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int val1 = str[0] - 48;
        int val2 = str[2] - 48;
        if(val1 == val2)
        cout<<str[0]<<"="<<str[2]<<endl;
        else if(val1 > val2)
        cout<<str[0]<<">"<<str[2]<<endl;
        else
        cout<<str[0]<<"<"<<str[2]<<endl;
    }
}