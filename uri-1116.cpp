#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, x, y, i;
    float div;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(y == 0)
            cout<<"divisao impossivel"<<endl;
        else{
        div = (x*1.00)/y;
        cout<<fixed<<setprecision(1)<<div<<endl;
        }
    }

    return 0;
}
