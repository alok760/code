#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++,k++)
            arr[i][j]=k;
        int l=n-1-i;
        for(int j=0;j<n;j++,k++)
            arr[l][j]=k;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<" "<<arr[i][j];
        cout<<endl;
    }
    return 0;
}
