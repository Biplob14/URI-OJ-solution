#include<iostream>
using namespace std;

int main()
{
    int i, n, fac=1, tmp;
    cin>>n;
    for(i=1;i<=n;i++){
        //tmp=i;
        fac=fac*i;
    }
    cout<<fac<<endl;
    return 0;
}
