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
   int  GetSize();
   int  GetVectorSize();
   void Insert(int* number);
   int* FindMin();
   bool DeleteMin();
   void Display();
};