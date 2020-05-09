#include<iostream>
using namespace std;

int main()
{
    int n;

    while(cin>>n){
        int f=0, mx=0;
        while(n--){
            int l;
            cin>>l;
            if(l > mx) mx = l;
        }
        if(mx < 10) cout<<1<<endl;
        else if(mx>=10 && mx<20) cout<<2<<endl;
        else
            cout<<3<<endl;
    }

    return 0;
}
