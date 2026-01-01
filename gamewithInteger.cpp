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
   if (n % 3 == 0)
   {
      cout << "Second" << endl;
   }
   else
      cout << "First" << endl;
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
