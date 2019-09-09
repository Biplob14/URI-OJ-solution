#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float i, m, n, j, ans;
    float s=0;
    for(i=1;i<=100;i++){
        s+=1/i;
        //cout<<s<<" ";
    }
    cout<<setprecision(2)<<fixed<<s<<endl;
    return 0;

}
