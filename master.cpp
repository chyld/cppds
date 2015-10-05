#include <iostream>
#include "./lib/ll.h"

int main(){
  auto l = new Chyld::LL<int>();
  l->addFront(3);
  std::cout << l << std::endl;
  l->addFront(5);
  std::cout << l << std::endl;
  return 0;
}
