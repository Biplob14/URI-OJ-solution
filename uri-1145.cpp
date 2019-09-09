#include<iostream>
using namespace std;

int main()
{
    int x, y, i,z=0;
    cin>>x>>y;
    for(i=1;i<=y;i++){
        z++;
        if(z==x) cout<<i;
        else
            cout<<i<<" ";
        if(z==x){
            z=0;
            cout<<endl;
        }
    }
    return 0;
}
