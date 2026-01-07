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
      int neg = 0, pos = 0;
      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         if (x == -1)
            neg++;
         else
            pos++;
      }

      if (pos >= neg)
      {
         cout << (neg % 2) << '\n';
      }
      else
      {
         int k = (neg - pos + 1) / 2;
         if ((neg - k) % 2 != 0)
            k++;
         cout << k << '\n';
      }
   }
}
