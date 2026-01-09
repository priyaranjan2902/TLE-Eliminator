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
      string str;
      cin >> str;
      string rev = str;
      reverse(str.begin(), str.end());
      int k = 0;
      for (int i = 0; i < n / 2; i++)
      {
         if ((str[i] == '0' && rev[i] == '1') || (str[i] == '1' && rev[i] == '0'))
         {
            k += 2;
         }
         else
         {
            break;
         }
      }
      int r = n - k;
      cout << r << endl;
   }
}