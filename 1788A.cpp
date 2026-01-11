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
      int two = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         if (arr[i] == 2)
            two++;
      }
      int result = -1;
      if (two == 0)
      {
         result = 1;
      }
      else if (two % 2 == 0)
      {
         int k = two / 2;
         int count = 0;
         for (int i = 0; i < n; i++)
         {
            if (arr[i] == 2)
            {
               count++;
               if (count == k)
               {
                  result = i + 1;
                  break;
               }
            }
         }
      }
      cout << result << "\n";
   }
}