#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, result=0, i=0, j=0;
    cin >> n;
    while(j<n){
             cin >> x >> y;
            int tmp = x+(2*y);
            if(x%2!= 0){
            for(i=x; i<tmp; i+=2){
                result += i;
        }
                //cout<<"if";
                cout <<result<<endl;
                result = 0;
                }
            else{
                x+=1;
                for(i=x; i<tmp; i+=2){
                result += i;
        }
        //cout<<"else";
        cout <<result<<endl;
        result = 0;
    }
    j++;
    }
    return 0;
}

