#include <iostream>
#include "./lib/list.h"

int main(){
  std::cout << "hello" << std::endl;
  Chyld::Node<int> n;
  std::cout << n.data << std::endl;
  std::cout << n.next << std::endl;
  //std::cout << n.next << std::endl;
  return 0;
}
