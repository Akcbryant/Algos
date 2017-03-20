package main

import "fmt"

//Doubly linked list

type LinkedList struct {
  head *Element
}

type Element struct {
  next *Element
  prev *Element
  key interface{} //interface{} is equivalent to any type
}

func (l LinkedList) search(key interface{}) interface{} {
  return key
}

func (l *LinkedList) insert(key interface{}) {
  e := &Element{key: key}
  if (l.head == nil) {
    l.head = e
  } else {
    l.head.next = e
    e.prev = l.head
    l.head = e
  }
}

func main() {
  list := new(LinkedList)
  list.insert(3)
  list.insert(4)
  list.insert(5)

  fmt.Printf("%+v\n", list.head.prev)
}
