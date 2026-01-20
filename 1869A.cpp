#include <bits/stdc++.h>
using namespace std;
int t, n, a[101];
int main()
{
   cin >> t;
   while (t--)
   {
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
         cin >> a[i];
      }
      if (n % 2 == 0)
      {
         cout << 2 << endl;
         cout << 1 << " " << n << endl;
         cout << 1 << " " << n << endl;
      }
      else
      {
         cout << 4 << endl;
         cout << 1 << " " << n - 1 << endl;
         cout << 1 << " " << n - 1 << endl;
         cout << n - 1 << " " << n << endl;
         cout << n - 1 << " " << n << endl;
      }
   }
}