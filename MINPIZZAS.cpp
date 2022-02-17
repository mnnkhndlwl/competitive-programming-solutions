#include <iostream>
#include<math.h>
using namespace std;

int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
	// your code goes here
	int t  = 0;
	std::cin >> t;
	while(t--)
	{
	    int f = 0;
	    int p = 0;
	    std::cin >> f >> p;
	    cout<<f/gcd(f,p) <<endl;
	    
	}
	return 0;
}
