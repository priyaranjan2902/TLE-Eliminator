#include <bits/stdc++.h>
using namespace std;

// bool prime(int n)
// {
//    if (n <= 1)
//       return false;
//    for (int i = 2; i * i <= n; i++)
//    {
//       if (n % i == 0)
//          return false;
//    }
//    return true;
// }
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

      vector<int> v1, v2;
      sort(arr.begin(), arr.end());
      v1.push_back(arr[0]);
      for (int i = 1; i < n; i++)
      {
         if (v1[0] == arr[i])
         {
            v1.push_back(arr[i]);
         }
         else
         {
            v2.push_back(arr[i]);
         }
      }

      int x = v1.size();
      int m = v2.size();
      if (x == 0 || m == 0)
      {
         cout << "-1" << endl;
      }
      else
      {
         cout << x << " " << m << endl;
         for (auto it : v1)
         {
            cout << it << " ";
         }
         cout << endl;
         for (auto it : v2)
         {
            cout << it << " ";
         }
         cout << endl;
      }
   }
   return 0;
}