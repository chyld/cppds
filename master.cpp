#include <iostream>
#include "./lib/node.h"

int main(){
  auto n = new Chyld::Node<int>(3);
  std::cout << n->data << std::endl;
  delete n;
  return 0;
}
