#include<iostream>
using namespace std;

int main()
{
    int x, z, i, b=0, c=0;
    cin>>x;
    while(cin>>z){
        if(z>x) break;
    }
    while(b<z){
        b+=x;
        x++;
        c++;
    }
    cout<<c<<endl;

    return 0;
}
