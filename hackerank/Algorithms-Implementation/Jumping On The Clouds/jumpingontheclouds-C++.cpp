#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],res=0;
    for (int j=0;j<n;j++)
        cin>>arr[j];
    for(int i=0;i<(n-1);)
    arr[i+2]?(res++,i++):(res++,i+=2);
    cout<<res;
    return 0;
}
