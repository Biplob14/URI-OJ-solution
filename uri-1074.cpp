#include<iostream>
using namespace std;

int main()
{
    int n, x, i;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x;
        if(x<0 && x%2 != 0)
            cout<<"ODD NEGATIVE"<<endl;
        if(x<0 && x%2 == 0)
            cout<<"EVEN NEGATIVE"<<endl;
        if(x>0 && x%2 != 0)
            cout<<"ODD POSITIVE"<<endl;
        if(x>0 && x%2 == 0)
            cout<<"EVEN POSITIVE"<<endl;
        if(x == 0)
            cout<<"NULL"<<endl;
    }

    return 0;
}
