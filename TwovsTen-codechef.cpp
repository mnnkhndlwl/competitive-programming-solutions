#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 0;
	cin>>t;
	while(t--)
	{
	    int x = 0;
	    cin>>x;
	    int ans = 0;
	    if(x%10 == 0)
	    {
	        cout<<0<<endl;
	    }
	    else if(x%5 == 0){
	        while(x%10 != 0)
	        {
	            x=x*2;
	            ans++;
	        }
	        cout<<ans<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
