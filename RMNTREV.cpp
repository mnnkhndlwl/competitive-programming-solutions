#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t = 0;
	cin >> t;
	while(t--)
	{
	    int n = 0;
	    cin >>n; 
	    int k = 0;
	    cin>>k;
	    string s;
	    cin>>s;
	    string ans  = "";
	    int i = 0 , j =k-1;
	    while(i<j)
	    {
	        ans+=s[i];
	        ans+=s[j];
	        i++;
	        j--;
	    }
	    if(i == j)
	    {
	        ans += s[i];
	    }
	    reverse(ans.begin(),ans.end());
	    ans += s.substr(k,n-k);
	    cout<<ans<<endl;
	   
	}
	return 0;
}
