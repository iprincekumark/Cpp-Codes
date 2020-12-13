#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define F first
#define S second
using namespace std;
const int n = 1e6 + 1;
int prime[n + 1];
ll ans[n];
void pre()
{
    for (int i = 2; i <= n; ++i)
    {
        if (!prime[i])
        {
            prime[i] = i;
            if (i > 1000)
                continue;
            int o;
            if (i & 1)
                o = 2;
            else
                o = 1;
            for (int j = i; (j * i) <= n; j += o)
                if (!prime[j * i])
                    prime[j * i] = i;
        }
    }
    vector<ll> f, g;
    f.pb(1);
    f.pb(3);
    for (int i = 3; i < n; ++i)
    {
        g.clear();
        g.pb(1);
        int u = i + 1, p = 1, l, r = 1;
        while (u > 1)
        {
            if (prime[u] != p)
                l = 0;
            p = prime[u];
            for (int o = l; o < r; ++o)
                g.pb(g[o] * p);
            l = r;
            u /= p;
            r = g.size();
        }
        int m = g.size();
        --m;
        sort(g.begin(), g.end());
        for (auto x : f)
        {
            while (m >= 0)
            {
                if (((x * 1ll * g[m]) >= i))
                    --m;
                else
                    break;
            }
            ans[i] += (m + 1);
        }
        f = g;
    }
    ans[2] = 1;
    for (int i = 3; i < n; ++i)
        ans[i] += ans[i - 1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int t;
    cin >> t;
    cout << ans[t] << endl;
    return 0;
}