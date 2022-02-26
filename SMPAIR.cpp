#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t =0 ;
	std::cin >> t;
	while(t--)
	{
	    int n = 0;
	    cin>>n;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        /* code */
	        std::cin >> a[i];
	    }
	    sort(a,a+n);
	    cout<<a[0]+a[1]<<endl;
	}
	return 0;
}
