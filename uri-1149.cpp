#include<iostream>
using namespace std;

int main()
{
    int a, n, i, b=0;

    cin>>a>>n;
    while(n<=0) cin>>n;
    for(i=1; i<=n; i++){
        b+=a;
        a++;
    }
    cout<<b<<endl;

    return 0;
}
