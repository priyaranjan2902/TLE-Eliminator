#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
#define pn cout << "NO\n";
#define py cout << "YES\n";

void solve()
{
   char matrix[10][10];
   int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
   for (int i = 0; i < 10; i++)
   {
      for (int j = 0; j < 10; j++)
      {
         cin >> matrix[i][j];
         if (matrix[i][j] == 'X')
         {
            if (i == 0 || j == 0 || i == 9 || j == 9)
               count1++;
            else if (i == 1 || j == 1 || i == 8 || j == 8)
               count2++;
            else if (i == 2 || j == 2 || i == 7 || j == 7)
               count3++;
            else if (i == 3 || j == 3 || i == 6 || j == 6)
               count4++;
            else if (i == 4 || j == 4 || i == 5 || j == 5)
               count5++;
         }
      }
   }

   int result = 1 * count1 + 2 * count2 + 3 * count3 + 4 * count4 + 5 * count5;
   cout << result << endl;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while (t--)
   {
      solve();
   }

   return 0;
}
