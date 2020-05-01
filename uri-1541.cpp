#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double length, width, land, prcnt;
    while(cin>>length, length != 0){ //this will take input while value of length is not zero
        cin>>width>>prcnt;
        double area = length*width*(100/prcnt);
        //cout<<area<<endl;
        cout<<(int)sqrt(area)<<endl;
    }

    return 0;
}
