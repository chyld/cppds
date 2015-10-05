#include <iostream>
#include "node.h"

#ifndef CHYLD_LL_H
#define CHYLD_LL_H

namespace Chyld{
  template<typename T>
  class LL{
  private:
    Node<T>* head;
    Node<T>* tail;
    int size;
  public:
    LL();
    ~LL();
  public:
    void addFront(T data);
    void addBack(T data);
    int length();
  };

  template<typename T>
  LL<T>::LL(){
    size = 0;
    head = NULL;
    tail = NULL;
  }

  template<typename T>
  LL<T>::~LL(){
  }

  template<typename T>
  void LL<T>::addFront(T data){
    if(head == NULL){
      head = tail = new Node<T>(data);
      size++;
    }else{
      head->prev = new Node<T>(data);
      head->prev->next = head;
      head = head->prev;
    }
  }

  template<typename T>
  void LL<T>::addBack(T data){
    if(head == NULL){
      head = tail = new Node<T>(data);
      size++;
    }else{
      tail->next = new Node<T>(data);
      tail->next->prev = tail;
      tail = tail->next;
    }
  }

  template<typename T>
  int LL<T>::length(){
    return size;
  }
}

#endif
