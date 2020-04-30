#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j, n, m, k;

    while(cin>>n){
        if(n == 0) break;
        int arr[n][n];
        for(i=0;i<n;i++){
            m=i+1;
            k=2;
            for(j=0;j<=i;j++, m--){
                arr[i][j] = m;
            }
            for(j=i+1;j<n;j++, k++){
                arr[i][j] = k;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j == 0){
                    cout<<setw(3)<<arr[i][j];
                }
                else
                    cout<<" "<<setw(3)<<arr[i][j];

            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
