#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, i=0, j=0, res=0;

    while(cin>>x){
        if(x==0)
            break;

        if(x%2==0){
            int tmp=x+10;
            for(i=x;i<tmp;i+=2){

                res += i;
            }
            cout<<res<<endl;
            res=0;
        }
        else{
            x++;
            int tmp = x+10;
            for(i=x; i<tmp;i+=2){
                res += i;
            }
            cout<<res<<endl;
            res=0;
        }
    }
    return 0;
}
