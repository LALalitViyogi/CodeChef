#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    int count=0;
	    count=count+(a/x)+(b/y);
	    if(a%x!=0)
	    {
	        count++;
	    }
	    if(b%y!=0)
	    {
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

