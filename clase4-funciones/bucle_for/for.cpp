#include <iostream>

int main(void)
{
  int n=0;
  
  std::cout<< "ingrese el codigo para hakear el sia: ";std::cin>> n ;
  std::cout << "Hakeando el sia, por favor espere ... \n";

  
  for(n=0;n<=100;n=5+n)
    std::cout << n << "%" <<std::endl  ;
      
  if (n>100){
	std::cout <<" El sia ha sido hakeado \n ";
	std::cout <<" accediendo a las notas ... \n ";
	
      }

  return 0;
}
