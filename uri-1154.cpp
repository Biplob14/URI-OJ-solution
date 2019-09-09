#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float i, n, j=0, sum=0;
    float avrg;
    while(cin>>n){
        if(n<0) break;

        j++;
        sum += n;
    }
    avrg=sum/j;
    cout<<setprecision(2)<<fixed<<avrg<<endl;
    return 0;
}
