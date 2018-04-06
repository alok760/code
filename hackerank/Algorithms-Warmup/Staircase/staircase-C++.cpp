#include<iostream>

using namespace std;
int main()
{
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
                cout<<" ";
        for(int k=0;k<i+1;k++)
                cout<<"#";
        cout<<endl;
    }
    return 0;
}
