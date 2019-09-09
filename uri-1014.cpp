#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int distance;
    float fuel;

    cin>>distance>>fuel;

    printf("%.3f km/l\n", distance/fuel);

    return 0;
}
