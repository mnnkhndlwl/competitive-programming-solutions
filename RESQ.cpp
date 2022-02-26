#include<bits/stdc++.h>
using namespace std;
int main() {
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int n=0;
	    int ans=INT_MAX;
	    std::cin >> n;
	    for (int i = 1; i <=sqrt(n); i++) {
	        if(n%i==0)
	        {
	            ans=min(ans,abs(i-(n/i)));
	        }
	    }
	    std::cout << ans << std::endl;
	}
	return 0;
}
