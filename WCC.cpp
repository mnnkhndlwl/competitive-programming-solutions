#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t = 0;
	std::cin >> t;
	while(t--)
	{
	    int x = 0;
	    std::cin >> x;
	    string Points;
	    std::cin >> Points;
	    int Pcarl = 0 ;
	    int Pchef  =0 ;
	    for(int i = 0;i<Points.size();i++)
	    {
	        if(Points[i] == 'C')
	        {
	            Pcarl += 2;
	        }
	        else if(Points[i] == 'N')
	        {
	            Pchef += 2;
	        }
	        else if(Points[i] == 'D')
	        {
	            Pcarl += 1;
	            Pchef += 1;
	        }
	    }
	    if(Pcarl > Pchef)
	    {
	        cout<<60*x<<endl;
	    }
	    else if (Pcarl == Pchef)
	    {
	        cout<<55*x<<endl;
	    }
	    else if(Pcarl < Pchef)
	    {
	        cout<<40*x<<endl;
	    }
	}
	return 0;
}
