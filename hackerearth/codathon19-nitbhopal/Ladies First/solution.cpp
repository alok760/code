#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long int n,sum = 0,temp,n1;
    cin>>n;
    for(long int i=1;i<=n;i++)
    {
      long long int n1=i-1;
      temp=pow(2,n1)+(pow(2,n1-1)*n1);
      sum+=temp;
      //cout<<"i = "<<i<<"  "<<"n1: "<<n1<<"  "<<"pow1: "<<pow(2,n1)<<"  "<<"pow2: "<<(pow(2,n1)*n1)<<endl;
    }
    cout<<sum<<endl;
  }
  return 0;
}
