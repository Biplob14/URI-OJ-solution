#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, a;
    float v;
    for(i=0; i<100; i++){
        cin>>v;
        if(v<=10)
            cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<v<<endl;
    }

    return 0;
}
