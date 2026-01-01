#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin >> n;
   int result = INT_MAX;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      int y = abs(x);
      if (y < result)
      {
         result = y;
      }
   }
   cout << result << endl;
}

int main()
{

   solve();
   return 0;
}