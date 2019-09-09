#include<iostream>
using namespace std;

int main()
{
    int n, i, j=0;
    cin>>n;
    for(i=n;i<n+12;i++){
        if(i%2 != 0)
            cout<<i<<endl;
    }

    return 0;
}
