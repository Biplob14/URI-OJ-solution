#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j;
    double num[12][12], sum = 0;
    char c;
    cin>>c;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>num[i][j];
        }
    }
    for(i=11;i>0;i--){
        for(j=i-1;j>=0;j--){
            sum+=num[i][j];
        }
    }

    if(c=='M') cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum<<endl;


    return 0;
}

