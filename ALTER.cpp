#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int a,b,p,q;
	    std::cin >> a>>b>>p>>q;
	    if(p%a == 0 and q%b == 0 and  (p/a == q/b or abs(p/a - q/b)==1))
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
