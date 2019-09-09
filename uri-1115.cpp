#include<iostream>
using namespace std;

int main()
{
    int x, y;

    while(cin>>x>>y){
        if(x == 0 || y == 0) break;
        if(x>0 && y>0)
            cout<<"primeiro"<<endl;
        if(x<0 && y>0)
            cout<<"segundo"<<endl;
        if(x<0 && y<0)
            cout<<"terceiro"<<endl;
        if(x>0 && y<0)
            cout<<"quarto"<<endl;
    }

    return 0;
}
