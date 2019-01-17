#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n!=0)
  {
    int count = 1, ocount = 69,temp;
    for(int i=0;i<n;i++)
      {
        cin>>temp;
        if(temp == count)
          count++;

        else if(temp > ocount)
        {
          cout<<"no"<<endl;
          break;
        }
        else
          ocount=temp;

        cout<<"debug : "<<temp<<" "<<i<<" "<<count<<" "<<ocount<<endl;

        if(i==n-1)
          cout<<"yes"<<endl;
      }

      cin>>n;

  }
  cout<<"end";
  return 0;
}
