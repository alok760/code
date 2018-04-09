#include<iostream>
using namespace std;
int main()
{
    int size,d,count=0;
    cin>>size>>d;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            if((arr[i]+arr[j])%d==0)
               ++count;
    cout<<count;
    return 0;
}
