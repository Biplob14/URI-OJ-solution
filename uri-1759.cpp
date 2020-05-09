#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;
    n--;
    while(n--){
        if(n < 0) break;
        cout<<"Ho ";
    }
    cout<<"Ho!"<<endl;
    return 0;
}
