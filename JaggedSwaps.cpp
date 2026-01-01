#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define pn cout << "NO\n";
#define py cout << "YES\n";

bool solve()
{
   ll n;
   cin >> n;
   vector<int> num(n);
   for (int i = 0; i < n; i++)
   {
      cin >> num[i];
   }
   if (num[0] == 1)
      return true;
   return false;
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
      if (solve())
      {
         py;
      }
      else
      {
         pn;
      }
   }

   return 0;
}
