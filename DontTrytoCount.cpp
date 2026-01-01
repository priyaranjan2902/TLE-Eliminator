#include <bits/stdc++.h>
using namespace std;

int solve()
{
   int n, m, count = 0;
   string x, s;
   cin >> n >> m;
   cin >> x >> s;

   if (n > 25)
   {
      return -1;
   }

   while (x.size() < s.size())
   {

      x += x;
      count++;
   }
   if (x.find(s) != string::npos)
   {
      return count;
   }
   x += x;
   if (x.find(s) != string::npos)
   {
      return count + 1;
   }
   return -1;
}

int main()
{
   int testcases;
   cin >> testcases;
   while (testcases--)
   {
      cout << solve() << endl;
   }
   return 0;
}
