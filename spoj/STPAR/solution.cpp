#include<iostream>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  while(n!=0)
  {
    long int count = 1, side = -1,temp,t=0;
    for(long int i=0;i<n;i++)
      {
        cin>>temp;
        if(temp == count || side == count+1)
        {
          count++;
          side = -1;
        }

        else if(temp > side && side != -1)
          t=1;
        else
          side=temp;

        //cout<<"debug : "<<temp<<" "<<i+1<<" "<<count<<" "<<side<<endl;

        if(i==n-1)
          cout<<(t?"no":"yes")<<endl;
      }

      cin>>n;

  }
  //cout<<"end";
  return 0;
}
