#include <iostream>
int main(void)
{
  double millas=0.0;
  double kilometros=0.0;
  std::cout << "Ingrese la millas que desea convertir" <<std::endl;
  std::cin >> millas;
  kilometros=millas*1.609;
  std::cout << "km :" << kilometros <<std::endl;
  return 0;
    
    


}
