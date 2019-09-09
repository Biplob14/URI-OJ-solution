#include <iostream>
using namespace std;
int main() {
    int n,i=0,d=0;
    cin>>n;
    while(d<=10000){
        d = (n*i)+2;
        i++;
        if(d>10000)
            break;
        cout<<d<<endl;
    }
    return 0;
}
