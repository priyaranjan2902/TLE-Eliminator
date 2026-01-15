#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, n;
      cin >> n >> a >> b;
      string res = "No";
      if (n > (a + b) + 1)
      {
         res = "Yes";
      }
      else if (n == (a + b) + 1)
      {
         res = "No";
      }
      else if (n == a && n == b && a == b)
      {
         res = "Yes";
      }
      cout << res << endl;
   }
}