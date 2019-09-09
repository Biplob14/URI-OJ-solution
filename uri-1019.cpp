#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t, h, m, s;
    cin>>t;

    h = t/3600;
    t %= 3600;
    m = t/60;
    t %= 60;
    printf("%d:%d:%d\n", h, m, t);

    return 0;

}
