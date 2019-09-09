#include<iostream>
using namespace std;

int main()
{
    int n, i, s=1, j, x1, x2, x3;
    cin>>n;
    for(i=1;i<=n;i++){
        x1=s*s;
        x2=s*x1;
        cout<<s<<" "<<x1<<" "<<x2<<endl;
        s++;
    }

    return 0;
}
