#include<iostream>
using namespace std;

int main()
{
    int m, n, i, sum=0;
    while(cin>>m>>n){
        if(m<=0) break;
        if(n<=0) break;
        if(n>m)
        swap(n, m);

    for(i=n;i<=m;i++){

        sum += i;
        cout<<i<<" ";
    }
    cout<<"Sum="<<sum<<endl;
    sum = 0;
    }
    return  0;
}
