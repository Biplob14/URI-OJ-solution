#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i;
    double x;
    cin>>x;
    cout<<fixed<<setprecision(4)<<"N[0] = "<<x<<endl;
    for(i=1;i<100;i++){
        x/=2;
        cout<<fixed<<setprecision(4)<<"N["<<i<<"] = "<<x<<endl;
    }


    return 0;
}
