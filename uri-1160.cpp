#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, pa, pb, i=1, j=0;
    double g1, g2;

    cin>>t;

    for(i=1;i<=t;i++){
        cin>>pa>>pb>>g1>>g2;


        while(pa<=pb){
            pa =pa + ((pa*g1)/100);
            pb =pb + ((pb*g2)/100);
            j++;

            if(j>100){
                    cout<<"Mais de 1 seculo."<<endl;
                    break;

                }
        }

        if(j<=100)
            cout<<j<<" anos."<<endl;

            j=0;
    }


    return 0;
}
