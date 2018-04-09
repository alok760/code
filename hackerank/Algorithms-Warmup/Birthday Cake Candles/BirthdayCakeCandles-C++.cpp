#include <iostream>
using namespace std;

int main() {
    int inp;
    cin>>inp;
    int arr[inp],max=-1,count=0;
    for(int i=0;i<inp;i++){
	cin>>arr[i];
	if(arr[i]>max)
	    max=arr[i];
    }
    for(int i=0;i<inp;i++)
        if(arr[i]==max)
            count++;
    cout<<count;
	return 0;
}
