#include<iostream>
using namespace std;

int main()
{
    int t, n, i, s=0, j;

    cin>>t;
    for(i=0;i<1000;i++){
        for(j=0;j<t;j++){
            cout<<"N["<<s<<"] = "<<j<<endl;
            s++;
            if(s>=1000)
                break;
        }
        if(s>=1000)
            break;
    }


    return 0;
}
