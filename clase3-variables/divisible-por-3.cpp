#include <iostream>
int main(void)
{
  int a = 0;
  std::cout<< "Ingrese el numero: "; std::cin>> a;
  if(a%3 == 0){
    std::cout<< "numero " << a<<" es divisible entre 3\n";
  }
  else {
    std::cout<< "numero " << a  << " no es divisible entre  3\n";
  }
  
  return 0;
}

