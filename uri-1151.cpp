#include<iostream>
using namespace std;

int main()
{
    int i, f1=0, f2=1, next, n, j=0;

    cin>>n;
    //cout<<"0";
    for(i=0;i<n;i++){
        j++;
    if(j==n)
        cout<<f1<<endl;
    else
        cout<<f1<<" ";
        next=f1+f2;
        f1=f2;
        f2=next;
        //cout<<" "<<next;
    }
    //cout<<"h";

    return 0;
}
