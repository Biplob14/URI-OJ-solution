#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,c=0,r=0,s=0,ttl,x;
    char ch;
    float prcnt;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        cin>>ch;
        switch(ch){
            case 'C': c+=x;
                    break;
            case 'R': r+=x;
                    break;
            default: s+=x;
        }
    }
    ttl=c+r+s;
    cout<<"Total: "<<ttl<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    prcnt = (c*100.0)/ttl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<prcnt<<" %"<<endl;
    prcnt = (r*100.0)/ttl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<prcnt<<" %"<<endl;
    prcnt = (s*100.0)/ttl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<prcnt<<" %"<<endl;
    return 0;
}
