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
      sort(arr.rbegin(), arr.rend());
      int x = arr[n - 1];
      int y = arr[0];
      if (x == y)
      {
         cout << "No";
      }
      else
      {
         cout << "Yes" << endl;
         cout << x << " ";
         for (int i = 0; i < n - 1; i++)
         {
            cout << arr[i] << " ";
         }
      }
      cout << "\n";
   }
   return 0;
}