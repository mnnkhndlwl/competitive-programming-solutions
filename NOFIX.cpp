#include <bits/stdc++.h> 
using namespace std;
int main() {
	int t = 0;
	cin >> t ;
	while(t--)
	{
        int n = 0;
        cin >> n;
        int array[n];
        int count = 0;
        for (int i=0 ; i<n;i++) {
            cin >> array[i];
        }
         for (int i=0; i<n+count;i++) {
            if(array[i-count] == i+1)
            {
                count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}

