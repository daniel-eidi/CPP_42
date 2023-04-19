
#include <iostream>
#include <string>


int main() {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;  // ponteiro para a std::string
  std::string& stringREF = str;   // referência para a string


  std::cout << "The memory address of the string variable: " << &str << std::endl;

  std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;

  std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

  std::cout << "Valor original: " << str << std::endl;
  std::cout << "Ponteiro: " << *stringPTR << std::endl;
  std::cout << "Referência: " << stringREF << std::endl;
  return 0;
}
