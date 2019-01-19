#include<iostream>
using namespace std;
int change(int inp, int in)
{
  if(in == 0)
    return -1*inp;
  return inp;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int l,a,b,c,fl=0;
    cin>>l>>a>>b>>c;
    for(int i=0;i<=1;i++)
      for(int j=0;j<=1;j++)
        for(int k=0;k<=1;k++)
          if(change(a,i)+change(b,j)+change(c,k)==l)
            fl++;
    cout<<(fl?"WIN":"LOSE")<<endl;
  }
  return 0;
}
