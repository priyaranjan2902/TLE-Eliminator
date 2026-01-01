#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pn cout << "NO\n";
#define py cout << "YES\n";

bool solve()
{
   ll n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   vector<int> sorted_array(n);
   for (int i = 0; i < n; i++)
   {
      sorted_array[i] = i + 1;
   }

   for (int i = 1; i < n - 1; i++)
   {
      if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
      {
         swap(arr[i], arr[i + 1]);
      }
   }

   return arr == sorted_array;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while (t--)
   {
      if (solve())
         py else pn
   }

   return 0;
}
