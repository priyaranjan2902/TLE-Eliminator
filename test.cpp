#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int N;
   cin >> N;
   vector<int> A(N);

   for (int i = 0; i < N; i++)
   {
      cin >> A[i];
   }

   // Count operations to make the first element negative
   int operations = 0;
   if (A[0] >= 0)
   {
      operations++;
      A[0] = -1; // Making it negative
   }

   // Count operations to make the last element positive
   if (A[N - 1] <= 0)
   {
      operations++;
      A[N - 1] = 1; // Making it positive
   }

   // Find minimum operations to split the array into negatives and positives
   int min_operations = N; // Maximum possible value
   for (int k = 1; k < N; k++)
   {
      int current_operations = 0;

      // Ensure elements from index 1 to k are negative
      for (int i = 1; i <= k; i++)
      {
         if (A[i] >= 0)
            current_operations++;
      }

      // Ensure elements from index k+1 to N are positive
      for (int i = k + 1; i < N; i++)
      {
         if (A[i] <= 0)
            current_operations++;
      }

      min_operations = min(min_operations, current_operations);
   }

   // Add operations for first and last elements
   cout << operations + min_operations << endl;

   return 0;
}
