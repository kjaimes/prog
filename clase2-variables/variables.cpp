#include <iostream>
int main(void)
{
   double x = 7.4;
   std::cout << &x <<std::endl;
   {
     double x = 7.4;
     std::cout << &x << std::endl;
  }

return 0;
 
}
