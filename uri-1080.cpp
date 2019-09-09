#include <iostream>
 
using namespace std;
 
int main() {
    int n,i,temp = 0,pos;
    for(i=1;i<=100;i++){
        cin>>n;
        if(n>temp){
            temp = n;
            pos = i;
        }
    }
    cout<<temp<<endl<<pos<<endl;
    return 0;
}
