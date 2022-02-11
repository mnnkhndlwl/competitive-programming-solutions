#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int n  = 0;
	    cin>>n;
	    if(n == 2)
	    {
	        cout<<2<<" "<<1<<endl;
	    }
	    else
	    {
	    for(int i = 1;i<=n;i++) {
    if(i!=2) cout<<i<<" ";
             }
       cout<<2<<endl;
	}
	}

	return 0;
}
