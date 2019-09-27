#include <iostream>

void helloworld(void); //declaracion

int main(void)
{
  helloworld();
  return 0;
}


void helloworld(void)//implementacion
{
  std::cout<< "hello world from a function \n";
}
