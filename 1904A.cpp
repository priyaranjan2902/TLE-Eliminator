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
      int kx, ky;
      cin >> kx >> ky;
      int qx, qy;
      cin >> qx >> qy;
      int ans = 0;
      long long p[8][2] = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
      for (int i = 0; i < 8; i++)
         for (int j = 0; j < 8; j++)
         {
            if (kx + p[i][0] + p[j][0] == qx && ky + p[i][1] + p[j][1] == qy)
               ans++;
         }
      if (a == b)
         ans /= 4;
      cout << ans << endl;
   }
   return 0;
}
