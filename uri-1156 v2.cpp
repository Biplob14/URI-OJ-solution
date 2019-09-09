#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float i, j=2, s=1, a;
    for(i=3;i<=39;i+=2){
            //cout<<i<<" ";
        //j+=2;
        s += i/j;
        //cout<<j<<" ";//cout<<s<<" ";
        j*=2;

    }
    cout<<setprecision(2)<<fixed<<s<<endl;

    return 0;
}
