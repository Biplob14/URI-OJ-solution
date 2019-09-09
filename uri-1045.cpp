#include<iostream>
using namespace std;
int main()
{
    double a,b,c,x,y,z;
    cin>>x>>y>>z;
    if(y>z){
        if(x>y){
            a = x;
            b = y;
            c = z;
        }
        else{
            a = y;
            b = x;
            c = z;
        }
    }
    else{
        a = z;
        b = y;
        c = x;
    }
    if(a >= b+c)
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else{
        if(a*a == (b*b + c*c))
            cout<<"TRIANGULO RETANGULO"<<endl;
        else if(a*a > (b*b + c*c))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        else if(a*a < (b*b + c*c))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a==b && b==c)
            cout<<"TRIANGULO EQUILATERO"<<endl;
        else if(a==b || b==c || a==c)
            cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
