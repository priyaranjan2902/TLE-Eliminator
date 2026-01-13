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
      int flag = arr[0] % 2 == 0 ? 0 : 1;
      int count = 0;
      for (int i = 1; i < n; i++)
      {
         if (arr[i] % 2 == 0 && flag == 1)
         {
            flag = 0;
         }
         else if (arr[i] % 2 == 1 && flag == 0)
         {
            flag = 1;
         }

         else
         {
            count++;
         }
      }
      cout << count << endl;
   }
}