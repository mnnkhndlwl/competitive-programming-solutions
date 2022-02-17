#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int A = 0,B = 0,X = 0,Y =0;
	    std::cin >> A >> B >> X >> Y;
	    if((A*B) < (X*Y))
	    {
	        cout<<"YES"<<endl;
	    }
	    else if((A*B) == (X*Y))
	    {
	        cout<<"YES"<<endl;
	    }
	    else 
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
