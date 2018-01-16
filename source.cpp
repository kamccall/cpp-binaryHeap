#include "bheap.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
   bheap heap;

   // vector<int> numbers = {3, 17, 8, 19, 26, 13, 21, 33, 31, 27, 41, 15};
   vector<int> numbers = {3, 17, 5, 19, 26, 8, 21, 33, 31, 27, 41, 15, 13};

   for (int i = 0; i < numbers.size(); i++)
   {
      int* newInt = new int;
      *newInt = numbers[i];
      heap.Insert(newInt);
   }
   
   cout << "size var : " << heap.GetSize() << " elements." << endl;
   cout << "items has: " << heap.GetVectorSize() << " elements." << endl;

   cout << "original heap..." << endl;
   heap.Display();

   cout << endl;

   vector<int> newNumbers = {22, 2, 19, 40, 50, 7};

   for (int i = 0; i < newNumbers.size(); i++)
   {
      int* newInt2 = new int;
      *newInt2 = newNumbers[i];
      heap.Insert(newInt2);
   }

   cout << "updated heap..." << endl;
   heap.Display();
}