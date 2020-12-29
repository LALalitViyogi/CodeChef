#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	while(test--)
	{
	    string one;
	    cin>>one;
	    int paircount=0;
	    for(int i=0;i<one.length();i++)
	    {
	        for(int j=i+1;j<one.length();j++)
	        {
	            if(one[i]==one[j])
	            {
	                paircount++;
	                break;
	            }
	        }
	    }
	    if(paircount>one.length()/3)
	    {
	        cout<<one.length()/3<<endl;
	    }
	    else
	    {
	        cout<<paircount<<endl;
	    }
	}
	return 0;
}
