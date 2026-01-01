#include <bits/stdc++.h>
using namespace std;
bool solve()
{
   int n, k;
   cin >> n >> k;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }

   for (auto it : v)
   {
      if (it == k)
      {
         return true;
      }
   }

   return false;
}

int main()
{

   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int testcase;
   cin >> testcase;
   while (testcase--)
   {
      if (solve())
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}
