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
      vector<int> v(n);
      for (int &i : v)
         cin >> i;
      bool flg = 0;
      for (auto i : v)
      {
         for (auto j : v)
            if (__gcd(i, j) <= 2)
            {
               flg = 1;
               break;
            }
         if (flg)
            break;
      }
      if (flg)
         cout << "Yes\n";
      else
         cout << "No\n";
   }
   return 0;
}
