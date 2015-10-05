#include <iostream>

#ifndef CHYLD_NODE_H
#define CHYLD_NODE_H

namespace Chyld{
  template<typename T>
  class Node{
  private:
    Node* prev;
    Node* next;
  public:
    T data;
  public:
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
  this->prev = NULL;
  this->next = NULL;
}

template<class T>
Chyld::Node<T>::Node(T data) : Node(){
  this->data = data;
}

template<class T>
Chyld::Node<T>::~Node(){
}

#endif
