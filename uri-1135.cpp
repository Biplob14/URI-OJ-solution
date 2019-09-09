#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    while(n!=0){
        for(i=1;i<=n/2;i++){
            for(j=1;j<=n;j++){
                if(j>=i && (n-j+1)>=i){
                    if(i<=9)
                        cout<<"  "<<i;
                    else
                        cout<<" "<<i;
                }
                else if(j>n/2){
                    if((n-j+1)<=9)
                        cout<<"  "<<(n-j+1);
                    else
                        cout<<" "<<(n-j+1);
                }
                else{
                    if(j<=9)
                        cout<<"  "<<j;
                    else
                        cout<<" "<<j;
                }
                if(j<n)
                    cout<<" ";
            }
            cout<<endl;
        }
        for(i=(n/2)+1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(j>=(n-i+1) && (n-j+1)>=(n-i+1)){
                    if((n-i+1)<=9)
                        cout<<"  "<<(n-i+1);
                    else
                        cout<<" "<<(n-i+1);
                }
                else if(j>n/2){
                    if((n-j+1)<=9)
                        cout<<"  "<<(n-j+1);
                    else
                        cout<<" "<<(n-j+1);
                }
                else{
                    if(j<=9)
                        cout<<"  "<<j;
                    else
                        cout<<" "<<j;
                }
                if(j<n)
                    cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cin>>n;
    }
    //cout<<endl;
    return 0;
}
