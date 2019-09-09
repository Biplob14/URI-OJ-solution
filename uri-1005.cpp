#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    float a, b, c;

    scanf("%f%f", &a, &b);
        c = (a*3.5+b*7.5)/(3.5+7.5);
        printf("MEDIA = %.5f\n", c);

    return 0;
}
