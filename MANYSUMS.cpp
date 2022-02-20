#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t =0;
	cin >> t;
	while(t--)
	{
	    long long int l = 0;
	    long long int r =0;
	    cin >> l;
	    cin >> r;
	    std::cout << (2*r - 2*l) + 1 << std::endl;
	}

}
