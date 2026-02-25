#include <iostream>

int main()
{
   int size { 5 };
   int integers[size]{ 1, 2, 3, 4, 5 };

   int array2[size];
   array2[0] = 1000;
   array2[1] = 2000;
   array2[2] = 3000;
   array2[3] = 4000;
   array2[4] = 4000;

   for ( int element{}; element < size; ++element)
   {
       std::cout << "Element[" << element << "]: " << array2[element] << std::endl;
   }
}


    return EXIT_SUCCESS;
