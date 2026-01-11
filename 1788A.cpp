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
      int prod = 1;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         prod *= arr[i];
      }
      int temp = 1;
      int r = -1;
      for (int i = 0; i < n; i++)
      {
         temp *= arr[i];
         int k = prod / temp;
         if (temp == k)
         {
            r = i + 1;
            break;
         }
      }
      cout << r << "\n";
   }
}