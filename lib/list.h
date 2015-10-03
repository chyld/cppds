#include <iostream>

namespace Chyld{
  template<class T>
  class Node{
  private:
    Node* prev;
  public:
    Node* next;
    T data;
    Node();
    Node(T val);
    ~Node();
  };
}

// -------------------------------------------------------------------------- //
// -------------------------------------------------------------------------- //
// -------------------------------------------------------------------------- //

template<class T>
Chyld::Node<T>::Node(){
  std::cout << "Node Default Constructor" << std::endl;
}

template<class T>
Chyld::Node<T>::Node(T val){
  this->data = val;
}

template<class T>
Chyld::Node<T>::~Node(){
}
