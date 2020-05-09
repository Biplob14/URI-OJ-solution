#include<iostream>
#include<math.h>
#include <string>
#include<iomanip>
#include <sstream>
#include<stdio.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i, j, n;
    string s;
    while((cin>>n), (n != 0)){
        int f, arr[n][n], a=1, b, cnt=0;
        b= pow(2, (n-1)*2);
        while(b>0){
            b/=10;
            cnt++;
        }
        //cout<<cnt<<endl;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                arr[j][i] = a;
                if(j == 0)
                    cout<<setw(cnt)<<a;
                else
                    cout<<" "<<setw(cnt)<<a;
                a *= 2;
            }
            cout<<endl;
            a = arr[i+1][0];
        }
        cout<<endl;
    }
    return 0;
}
