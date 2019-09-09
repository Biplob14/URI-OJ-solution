#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float x,a=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a += x*2;
        cin>>x;
        a += x*3;
        cin>>x;
        a += x*5;
        a /=10;
        cout<<fixed<<setprecision(1)<<a<<endl;
        a = 0;
    }
    return 0;
}
