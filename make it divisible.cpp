#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int n = 0;
	    std::cin >> n;
	    for(int i =  1;i<=n;i++ )
	    {
	        if(i == 1 || i==n)
	        {
	            std::cout << 3;
	        }
	        else
	        {
	            std::cout << 0 ;
	        }
	    }
	    std::cout << endl;
	}
	return 0;
}
