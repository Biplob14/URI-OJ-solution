#include<iostream>
using namespace std;

int main()
{
    int n, i, j=1, k, l, x=0;
    cin>>n;
    for(i=0;i<n;i++){
        k=j*j;
        l=k*j;
        cout<<j<<" "<<k<<" "<<l<<endl;
        k+=1;
        l=j*k;
        l=l-x;
        cout<<j<<" "<<k<<" "<<l<<endl;
        j++;
        x++;

    }

    return 0;
}
