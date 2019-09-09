#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b;
    c = (24-a)+b;
    if(c>24)
        cout<<"O JOGO DUROU "<<c-24<<" HORA(S)"<<endl;
    else
        cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;

    return 0;
}
