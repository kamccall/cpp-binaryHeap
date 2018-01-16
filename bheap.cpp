#include "bheap.h"
#include <iostream>
using namespace std;

bheap::bheap()
{
   size = 0;
   items.push_back(nullptr);
}

bheap::~bheap()
{
   // PROBLEM IS HERE: EVERYTHIGN WORKS FINE EXCEPT WHEN UNCOMMENTED
   // int numElements = items.size();

   // for(int i = )
   // for(int i=0; i < items.size(); i++)
   // {
   //    if (items[i] != nullptr)
   //    {
   //       delete items[i];
   //    }  
   // }
   // items.clear();
}

bool bheap::DeleteMin()
{
   if(size == 0) return false;

   delete items[1];
   items[1] = items[size];
   size--;

   BubbleDown(1);
   return true;
}

void bheap::BubbleDown(int position)
{
   int child = position *2;
   if (child > size) return;
   if (child!= size && *items[child] > *items[child + 1])
   {
      child++;
   }
   if(*items[child] < *items[position])
   {
      int temp = *items[child];
      *items[child] = *items[position];
      *items[position] = temp;

      BubbleDown(child);
   }
}

void bheap::Display()
{
   cout << "items.size: " << items.size() << endl;
   cout << "size value: " << GetSize() << endl;
   for(int i=1; i < GetSize() + 1; i++)
   {
      // cout << "i: " << i << endl;
      cout << *items[i] << endl;
   }
   // cout << "STILL good..." << endl;
}

int bheap::GetSize()
{
   return size;
}

int bheap::GetVectorSize()
{
   return items.size();
}

void bheap::Insert(int* number)
{
   if(number == nullptr) return;

   // put new number in first position
   items[0] = number;

   // add another element to vector
   size++;
   if(items.size() == size)
   {
      items.push_back(nullptr);
   }
   // cout << "size is now: " << size << endl;
   int position = size;

   while(*number < *items[position / 2])
   {
      items[position] = items[position / 2];
      position = position / 2;
   }
   
   items[position] = number;
}

