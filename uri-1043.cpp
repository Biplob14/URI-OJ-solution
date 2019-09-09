#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double a, s, b, c, peri, area;
    int i;

    cin>>a>>b>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a ){
        s = (a+b+c);
        printf("Perimetro = %.1f\n",s);
    }
    else{
        peri =((a+b)/2.0)*c;
        printf("Area = %.1f\n", peri);

    }

    return 0;
}
