#include<iostream>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  while(n!=0)
  {
    long int count = 1, side = -1,temp;
    for(long int i=0;i<n;i++)
      {
        cin>>temp;
        if(temp == count || side == count+1)
        {
          count++;
          side = -1;
        }

        else if(temp > side && side != -1)
        {
          cout<<"no"<<endl;
          break;
        }
        else
          side=temp;

        //cout<<"debug : "<<temp<<" "<<i+1<<" "<<count<<" "<<side<<endl;

        if(i==n-1)
          cout<<"yes"<<endl;
      }

      cin>>n;

  }
  //cout<<"end";
  return 0;
}
