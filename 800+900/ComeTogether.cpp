#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int xa , ya , xb , yb , xc , yc;
        cin>>xa>>ya;
        cin>>xb>>yb;
        cin>>xc>>yc;

        int upB = 0 , downB = 0 , leftB = 0 , rightB = 0;
        int upC = 0 , downC = 0 , leftC = 0 , rightC = 0;


        //setting for B
        if(yb > ya)
        upB = yb - ya;
        if(yb < ya)
        downB = ya - yb;
        if(xb > xa)
        rightB = xb - xa;
        if(xb < xa)
        leftB = xa - xb;

        //setting for C
        if(yc > ya)
        upC = yc - ya;
        if(yc < ya)
        downC = ya - yc;
        if(xc > xa)
        rightC = xc - xa;
        if(xc < xa)
        leftC = xa - xc;
        int dist = 0;
        bool flag = true;
        if(upB != 0 && upC != 0){
            dist += min(upB , upC);
            dist += 1;
            flag = false;
        }

        if(downB != 0 && downC != 0){
            dist += min(downB , downC);
            dist += 1;
            flag = false;
        }

        if(leftB != 0 && leftC != 0){
            dist += min(leftB , leftC);
            if(flag)
            dist += 1;
        }

        if(rightB != 0 && rightC != 0){
            dist += min(rightB , rightC);
            if(flag)
            dist += 1;
        }

        if(dist == 0)
        cout<<"1"<<endl;
        else
        cout<<dist<<endl;
    }
}