#include <bits/stdc++.h>
using namespace std;

bool solve()
{
   int n;
   cin >> n;
   unordered_map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      mp[x]++;
   }
   if (mp.size() == 1)
      return true;
   if (mp.size() > 2)
      return false;
   auto it = mp.begin();
   int count1 = it->second;
   it++;
   int count2 = (it)->second;
   if (n % 2 == 0)
      return count1 == count2;
   else
      return abs(count1 - count2) == 1;
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      if (solve())
         cout << "YES\n";
      else
         cout << "NO\n";
   }
   return 0;
}
