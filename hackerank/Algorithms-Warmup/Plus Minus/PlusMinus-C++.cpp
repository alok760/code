#include<iostream>
using namespace std;
int main()
{   int size;
    cin>>size;
    int arr[size];
    int a=0,b=0,c=0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            ++a;
        if(arr[i]<0)
            ++b;
        if(arr[i]==0)
            ++c;
    }
    size=size*1.0;
    cout<<a/(size*1.0)<<endl<<b/(size*1.0)<<endl<<c/(size*1.0);

    return 0;
}
