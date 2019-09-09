#include<iostream>
using namespace std;

int main()
{
    int x, i, n;

    while(cin>>x){
            if(x==0) break;
        for(i=1;i<=x;i++){
            if(i==x) cout<<i;
            else
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
