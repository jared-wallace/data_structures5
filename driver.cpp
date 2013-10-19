#include <iostream>
#include "llcpInt.h"

using namespace std;

int main()
{
   Node* head = 0;
   int array[5] = {3,4,4,0,4};
   for (int i = 0; i < 5; i++)
   {
      cout << array[i] << " ";
   }
   for (int i = 0; i < 5; i++)
   {
      InsertAsTail(head, array[i]);
   }
   MakeDistinctPairs(head);
   Node* nodePtr = head;
   cout << endl;
   while(nodePtr != 0)
   {
      cout << nodePtr->data << " ";
      nodePtr = nodePtr->link;
   }
   return 0;
}

