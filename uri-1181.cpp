#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int l, i, j;
    char c;
    float n[12][12], sum=0;
    cin>>l>>c;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>n[i][j];
        }
    }
    for(i=0;i<12;i++){
        sum += n[l][i];
    }
    if(c=='M') cout<<fixed<<setprecision(1)<<sum/12<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum<<endl;


    return 0;
}
//1 2 -3 9 -5 5 6 1 -12 -10 11 12
