#include <bits/stdc++.h>
using namespace std;
void meraans()
{
    int n, k;
    cin >> n >> k;
    vector<int> array;
    for (int i = 1; i <= n; i++)
    {
        array.push_back(i);
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (k == n - 1)
    {
        swap(array[0], array[1]);
        for (auto i : array)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    int v = 0;
    k = n - k;
    while (k--)
    {
        swap(array[v], array[v + 1]);
        v++;
    }
    for (auto j : array)
    {
        cout << j << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        meraans();
    }
}