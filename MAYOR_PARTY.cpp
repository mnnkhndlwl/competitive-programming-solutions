#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t  =0;
	std::cin >> t;
	while(t--)
	{
	    int a,b,c;
	    std::cin >> a>>b>>c;
	    int sum = a + c;
	    if(sum > b)
	    {
	        std::cout << sum << std::endl;
	    }
	    else
	    {
	        std::cout << b << std::endl;
	    }
	}
	return 0;
}
