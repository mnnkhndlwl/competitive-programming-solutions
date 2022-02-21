#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    long long int n,w;
	    cin>>n>>w;
	    long long int a[n];
	    for (int i =0;i<n;i++) {
	        std::cin >> a[i];
	    }
	    long long int sum =0 ;
	    sort(a,a+n);
	    int i =0;
	    for (i = n-1; i>=0; i--) {
	        sum+=a[i];
	        if(w<=sum)
	        {
	            break;
	        }
	    }
	 cout<< i <<endl;
	}
	return 0;
}
