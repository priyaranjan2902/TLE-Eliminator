#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define pn cout << "NO\n";
#define py cout << "YES\n";

void solve()
{
   ll n, m;
   cin >> n;
   vector<int> v(n);

   vector<int> b;
   vector<int> c;
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   int maxi = *max_element(v.begin(), v.end());
   c.push_back(maxi);
   for (auto it : v)
   {
      if (it == maxi)
         continue;
      b.push_back(it);
   }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while (t--)
   {
      solve();
   }

   return 0;
}
