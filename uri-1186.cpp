#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j, inc=0;
    float sum = 0, num[12][12];
    char c;

    cin>>c;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>num[i][j];
        }
    }

    for(i=1;i<12;i++){
        for(j=12-i;j<12;j++){
            sum += num[i][j];
        }
    }

    if(c=='M') cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum<<endl;

    return 0;
}
