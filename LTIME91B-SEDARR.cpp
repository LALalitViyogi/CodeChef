#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    if(sum%k==0)
	    {
	        cout<<0<<endl;
	    }
	    else if( sum%k!=0)
	    {
	        cout<<1<<endl;
	    }
	}
	return 0;
}
