#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--!=0)
	{
	    int swap=0;
	    int n, r0, r1, r2, g1, g2, g0, b0, b1, b2;
	    cin>>n;
	    cin>>r0>>g0>>b0;
	    cin>>r1>>g1>>b1;
	    cin>>r2>>g2>>b2;
	    swap=r1+r2;
	    if(r1>=g0)
	    swap=swap+r1-g0+b1;
	    else
	    swap=swap+r2-b0+g2;
	    cout<<swap<<endl;
	}
	return 0;
}

//changed