#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i, sqr;
    cin>>n;
    for(i=2;i<=n;i+=2)
        cout<<i<<"^2 = "<<i*i<<endl;

    return 0;
}
