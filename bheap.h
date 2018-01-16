#include <vector>
using namespace std;

class bheap
{
private:
   int size;
   vector<int*> items;

public:
   bheap();
   ~bheap();
   
   bool DeleteMin();
   void BubbleDown(int position);

   int  GetSize();
   int  GetVectorSize();
   void Insert(int* number);
   int* FindMin();
   void Display();
};