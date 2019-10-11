#include<iostream>
using namespace std;

int main()
{
    int n, i, j, v[22];

    for(i=19;i>=0;i--){
        cin>>v[i];
    }

    for(j=0; j<=19; j++){
        cout<<"N["<<j<<"] = "<<v[j]<<endl;
    }

    return 0;
}


//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
