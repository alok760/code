#include<iostream>
using namespace std;
int main()
    {
    int size;
    cin>>size;
    long long int arr[size],sum=0;
    for(int i=0;i<size;i++)
        {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
