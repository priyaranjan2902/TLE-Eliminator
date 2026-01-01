#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool canCompleteCycle(const vector<int> &portals)
{
   int n = portals.size();
   vector<bool> visited(n, false);
   int start = 0, count = 0;

   while (!visited[start])
   {
      visited[start] = true;
      start = portals[start] - 1;
      count++;
   }

   // Check if all portals were visited and we returned to the starting point
   return count == n && start == 0;
}

int main()
{
   int n;
   cin >> n;
   vector<int> portals(n);

   for (int i = 0; i < n; ++i)
   {
      cin >> portals[i];
   }

   if (canCompleteCycle(portals))
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }

   return 0;
}
