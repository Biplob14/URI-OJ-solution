#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j;
    double sum=0, num[12][12];
    char c;
    cin>>c;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>num[i][j];
        }
    }

    for(i=11;i>6;i--){
        for(j=i-1;j>11-i;j--)
            //cout<<i<<" "<<j<<endl;
            sum += num[i][j];
    }

    if(c == 'M') cout<<fixed<<setprecision(1)<<sum/30.0<<endl;

    else
        cout<<fixed<<setprecision(1)<<sum<<endl;
    return 0;
}
