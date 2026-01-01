#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(int n, int k, vector<int> &boxes)
{
   if (k >= 2)
   {
      return true;
   }
   vector<int> sorted_box;
   sorted_box = boxes;

   sort(sorted_box.begin(), sorted_box.end());
   return (sorted_box == boxes);
}
int main()
{
   int test_case;
   cin >> test_case;
   while (test_case--)
   {
      int a, b;
      cin >> a >> b;
      vector<int> boxes;
      for (int i = 0; i < a; i++)
      {
         int box_value;
         cin >> box_value;
         boxes.push_back(box_value);
      }
      if (solve(a, b, boxes))
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}