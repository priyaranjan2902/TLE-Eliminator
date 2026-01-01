#include <bits/stdc++.h>
using namespace std;
long long solve()
{
   int n;
   cin >> n;
   vector<int> v(n - 1);
   long long sum = 0;
   for (int i = 0; i < n - 1; i++)
   {
      cin >> v[i];
      sum += v[i];
   }

   sum = sum * (-1);
   return sum;
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