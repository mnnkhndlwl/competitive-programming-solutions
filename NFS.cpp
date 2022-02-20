#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    float u,v,a,s;
	    std::cin >> u >> v >> a >>s;
	    if(u == v)
	    {
	        std::cout << "YES" << std::endl;
	    }
	    else if(u>v)
	    {
	       
	        if((u*u - 2*a*s)<=v*v)
	        {
	            std::cout << "YES" << std::endl;
	        }
	        else
	        {
	            std::cout << "NO" << std::endl;
	        }
	    }
	    else if(u<v)
	    {
	        std::cout << "YES" << std::endl;
	    }
	}
	return 0;
}
