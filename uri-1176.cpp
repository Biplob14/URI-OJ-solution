#include<iostream>
using namespace std;

int main()
{
    int i, n, t, j;
    long long unsigned int first, sec, next;

    cin>>t;

    for(i=0;i<t;i++){
        cin>>n;
        if(n==0)
            cout<<"Fib(0) = 0"<<endl;
        else if(n==1)
            cout<<"Fib(1) = 1"<<endl;
        else
        {
            first = next = 0;
            sec = 1;

            for(j=0;j<n-1;j++){
                next = first+sec;
                first=sec;
                sec=next;
            }
            cout<<"Fib("<<n<<") = "<<next<<endl;


        }

    }

    return 0;
}
