#include <iostream>
using namespace std;
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int a=0,b=0;
	    std::cin >> a>>b;
	    int ans = gcd(a,b);
	    if(ans > 1)
	    {
	        std::cout << "0" << std::endl;
	    }
	    else if(gcd(a+1,b)>1 or gcd(a,b+1)>1)
	    {
	        std::cout << "1" << std::endl;
	    }
	    else{
	        std::cout << "2" << std::endl;
	    }
	}
	return 0;
}
