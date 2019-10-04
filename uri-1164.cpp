#include<iostream>
using namespace std;

int main()
{
    int t, x, i, j, sum=0;

    cin>>t;

    for(i=1;i<=t;i++){
        cin>>x;
        int y = x/2;
        for(j=1; j<=y; j++){
            if(x%j==0)
                sum += j;
                //cout<<sum<<endl;
        }
        if(sum == x)
            cout<<x<<" eh perfeito"<<endl;
        else
            cout<<x<<" nao eh perfeito"<<endl;

        sum = 0;
    }


    return 0;
}
