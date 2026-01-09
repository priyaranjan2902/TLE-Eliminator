#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;

      vector<int> a(n);
      int r = 0;
      int x = -1;
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
         r ^= a[i];
      }
      if (n % 2 == 0)
      {
         if (r == 0)
         {
            x = 0;
         }
         else
         {
            x = -1;
         }
      }
      else
      {
         x = r;
      }
      cout << x << endl;
   }
}