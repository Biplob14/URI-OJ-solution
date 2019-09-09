#include<iostream>
using namespace std;

int main()
{
    int i, n, evn=0, odd=0, pos=0, neg=0;
    for(i=0; i<5; i++){
        cin>>n;
        if(n == 0 || n%2 == 0)
            evn++;
        if(n%2 != 0)
            odd++;
        if(n>0)
            pos++;
        if(n<0)
            neg++;
    }
    cout<<evn<<" valor(es) par(es)"<<endl<<odd<<" valor(es) impar(es)"<<endl<<pos<<" valor(es) positivo(s)"<<endl<<neg<<" valor(es) negativo(s)"<<endl;

    return 0;
}
