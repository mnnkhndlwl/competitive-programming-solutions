#include<bits/stdc++.h>
using namespace std;

void ans()
{
    int n, k;
    cin >> n >> k;
    int array[k];
    for (int i = 0; i < k; i++)
    {
        cin >> array[i];
    }
    sort(array, array + k);
    vector<int> veck;
    int prev = 0;
    for (int j = 0; j < k; j++)
    {
        for (int l = array[j]; l > prev; l--)
        {
            veck.push_back(l);
        }
        prev = array[j];
    }
    for (auto it = veck.begin(); it != veck.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
}