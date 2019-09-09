#include <iostream>
using namespace std;
int main() {
    int n,x,y,sum=0,temp;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(x>y){
            temp = x;
            x = y;
            y = temp;
        }
        if(x%2==0){
            for(int j=x+1;j<y;j+=2)
                sum+=j;
        }
        else{
            for(int j=x+2;j<y;j+=2)
                sum+=j;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
