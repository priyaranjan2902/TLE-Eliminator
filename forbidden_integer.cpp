#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, c;
      cin >> a >> b >> c;

      if (c != 1)
      {
         cout << "YES\n";
         cout << a << "\n";
         for (int i = 0; i < a; i++)
            cout << 1 << " ";
         cout << "\n";
      }
      else if (b == 2 && a % 2 == 0)
      {
         cout << "YES\n";
         cout << a / 2 << "\n";
         for (int i = 0; i < a / 2; i++)
            cout << 2 << " ";
         cout << "\n";
      }
      else if (b > 2)
      {
         cout << "YES\n";
         if (a % 2 == 0)
         {
            cout << a / 2 << "\n";
            for (int i = 0; i < a / 2; i++)
               cout << 2 << " ";
         }
         else
         {
            cout << (a - 1) / 2 << "\n";
            for (int i = 0; i < (a - 3) / 2; i++)
               cout << 2 << " ";
            cout << 3 << " ";
         }
         cout << "\n";
      }
      else
      {
         cout << "NO\n";
      }
   }
}
