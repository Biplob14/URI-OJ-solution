#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
    double n, point;
    int b, decp;

    cin>>n;
    b = n;
    point = n-b;
    //cout<<point<<endl;
    cout<<"NOTAS:"<<endl;
    cout<<b/100<<" nota(s) de R$ 100.00"<<endl;
    b%=100;
    cout<<b/50<<" nota(s) de R$ 50.00"<<endl;
    b%=50;
    cout<<b/20<<" nota(s) de R$ 20.00"<<endl;
    b%=20;
    cout<<b/10<<" nota(s) de R$ 10.00"<<endl;
    b%=10;
    cout<<b/5<<" nota(s) de R$ 5.00"<<endl;
    b%=5;
    cout<<b/2<<" nota(s) de R$ 2.00"<<endl<<"MOEDAS:"<<endl;
    b%=2;
    cout<<b<<" moeda(s) de R$ 1.00"<<endl;
    decp = point*100;
    //cout<<decp;
    cout<<decp/50<<" moeda(s) de R$ 0.50"<<endl;
    decp%=50;
    cout<<decp/25<<" moeda(s) de R$ 0.25"<<endl;
    decp%=25;
    cout<<decp/10<<" moeda(s) de R$ 0.10"<<endl;
    decp%=10;
    cout<<decp/05<<" moeda(s) de R$ 0.05"<<endl;
    decp%=05;
    cout<<decp/01<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
