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
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
      }
      int maxi = 0;
      int zero = 0;
      for (int i = 0; i < n; i++)
      {
         if (a[i] == 0)
         {
            zero++;
            maxi = max(maxi, zero);
         }
         else
         {
            zero = 0;
         }
      }
      cout << maxi << endl;
   }
}