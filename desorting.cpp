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
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      vector<int> diff;
      for (int i = 1; i < n; i++)
      {
         diff.push_back((arr[i] - arr[i - 1]));
      }
      sort(diff.begin(), diff.end());
      int ans = diff[0];
      if (ans < 0)
      {
         cout << 0 << endl;
      }
      else
      {

         cout << (ans / 2) + 1 << endl;
      }
   }
}