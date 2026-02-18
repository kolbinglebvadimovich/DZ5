#include <iostream>

int main()
{
   const int size[5];
   int integers[]{1, 2, 3, 4, 5 };

   int array2[size];
   array2[0] = 10;
   array2[1] = 20;
   array2[2] = 30;
   array2[3] = 40;
   array2[4] = 50;

   for (int element{}; element < size; ++element)
   {
       std::cout << "Element[" << element << "]: " << array2[element] << std::endl;
   }
   

   return EXIT_SUCCESS;
}



