#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      int result = -1;
      int x = d - b;
      int y = (a + x) - c;
      if (x < 0 || y < 0)
      {
         result = -1;
      }
      else
      {
         result = x + y;
      }
      cout << result << endl;
   }
}