#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n=0,d=0;
	std::cin >> n>>d;
	int ans =0;
	int a[n];
	for (int i = 0; i < n; i++) 
	{
	   std::cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1; ) //n-1 because we are checking adjacent elements
	{
	    if(a[i+1]-a[i]<=d)
	    {
	        ans+=1;
	        i+=2;
	    }
	    else 
	    {
	        i++;
	    }
	}
	cout<<ans<<endl;
}
