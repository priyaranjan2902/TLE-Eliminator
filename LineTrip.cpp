#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define pn cout << "NO\n";
#define py cout << "YES\n";

void solve()
{
   ll n, m;
   cin >> n >> m;
   int gastank[n + 1];
   gastank[0] = 0;
   for (int i = 1; i <= n; i++)
   {
      cin >> gastank[i];
   }
   int minimum_volume = (m - gastank[n]) * 2;

   for (int i = 1; i <= n; i++)
   {
      int diff = gastank[i] - gastank[i - 1];
      if (diff > minimum_volume)
      {
         minimum_volume = diff;
      }
   }

   cout << minimum_volume << endl;
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
