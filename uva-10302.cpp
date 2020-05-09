#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n;

    while(cin>>n){
            long long int sum = 0, i=0;
        while(i <= n){

            sum += i*i*i;
            i++;
        }
        cout<<sum<<endl;

    }

    return 0;
}
