#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int x = a[0] - 1;
        int b[m];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    cout << a[j] << " ";
                    a[j] = x;
                }
                else if (a[j] > b[i])
                    break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != x)
                cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
