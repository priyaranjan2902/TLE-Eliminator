#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long a, b;
      cin >> a >> b;

      if ((a % 2 == 0) || ((b % 2 == 1) && (b <= a)))
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
}