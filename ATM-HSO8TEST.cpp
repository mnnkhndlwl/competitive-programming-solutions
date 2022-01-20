#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x = 0;
	double y = 0.00;
	cin>>x;
	cin>>y;
    if(x>y)
	{
	     cout << fixed << setprecision(2) << y << endl;
	}
	else if((x%5 == 0) && y>=(x+0.50))
	{
	    cout << fixed << setprecision(2) << ((y-x)-0.50) <<endl;
	}
	else
	{
	     cout << fixed << setprecision(2) << y << endl;
	}
	return 0;
}
