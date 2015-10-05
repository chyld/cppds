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

  template<typename T>
  Node<T>::Node(){
    prev = NULL;
    next = NULL;
  }

  template<typename T>
  Node<T>::Node(T data) : Node(){
    this->data = data;
  }

  template<typename T>
  Node<T>::~Node(){
  }
}

#endif
