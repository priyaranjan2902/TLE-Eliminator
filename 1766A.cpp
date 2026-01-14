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
      int nz = 9;
      string num = to_string(n);
      int len = num.length();
      int result = (len - 1) * nz;
      int ten = pow(10, len - 1);
      int x = n / ten;
      // cout << x << endl;
      result += x;
      cout << result << endl;
   }
}