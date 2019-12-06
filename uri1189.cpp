#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j, r=4;
    double sum=0, num[12][12];
    char c;

    cin>>c;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>num[i][j];
        }
    }
    for(i=1;i<11;i++){
        if(i<=5){
            for(j=0;j<i;j++){
                sum += num[i][j];
                //cout<<"1st "<<i<<" "<<j<<endl;
            }
        }

        else if(i>=6){
            for(j=r;j>=0;j--){
                sum += num[i][j];
                //cout<<i<<" "<<j<<endl;

            }
            r--;
        }
    }
    if(c == 'M') cout<<fixed<<setprecision(1)<<sum/30.0<<endl;

    else
        cout<<fixed<<setprecision(1)<<sum<<endl;

    return 0;
}
