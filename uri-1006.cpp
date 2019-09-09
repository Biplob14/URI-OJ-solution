#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    printf("MEDIA = %.1f\n", (a*2+b*3+c*5)/(3.0+5.0+2.0));


    return 0;
}
