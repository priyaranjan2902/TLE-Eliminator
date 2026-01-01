#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define pn cout << "NO\n";
#define py cout << "YES\n";

void solve()
{
   int n;
   cin >> n;
   string cells;
   cin >> cells;
   int countdot = 0;
   for (int i = 0; i < n; i++)
   {
      if (cells[i] == '.')
      {
         countdot++;
      }
   }
   int triplet = 0;
   for (int i = 2; i < n; i++)
   {
      if (cells[i - 2] == '.' && cells[i - 1] == '.' && cells[i] == '.')
      {
         triplet = 1;
      }
   }
   if (triplet == 1)
   {
      cout << "2" << endl;
   }
   else
   {
      cout << countdot << endl;
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
