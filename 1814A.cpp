#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b;
      cin >> a >> b;
      int k = a / b;
      int r = k * b;
      int rem = a - r;
      if (rem % 2 == 0)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
}