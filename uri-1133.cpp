#include<iostream>
using namespace std;

int main()
{
    int x, y, i;
    cin>>x>>y;
    if(y>x)
        swap(y, x);


    for(i=y+1;i<x;i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
    }

    return 0;
}
