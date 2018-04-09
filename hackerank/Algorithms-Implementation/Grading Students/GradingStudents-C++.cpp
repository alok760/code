#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n>=38)
    {
      if(5-n%5<3)
        n+=5-n%5;
    }
    cout<<n<<endl;
  }
  return 0;
}
