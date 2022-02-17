#include <bits/stdc++.h> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>A[i];
    }
    sort(A,A+3);
    cout<<(A[1] - A[0]) + (A[2] - A[1])<<endl;
    return 0;
}
