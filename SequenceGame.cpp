#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin >> n;
   vector<int> v(n);
   vector<int> result;
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }

   result.push_back(v[0]);
   for (int i = 1; i < n; i++)
   {
      if (v[i - 1] <= v[i])
      {
         result.push_back(v[i]);
      }
      else
      {
         result.push_back(v[i]);
         result.push_back(v[i]);
      }
   }
   cout << result.size() << "\n";
   for (auto It : result)
   {
      cout << It << " ";
   }
   cout << "\n";
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}