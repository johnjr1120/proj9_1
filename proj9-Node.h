/*
* file: proj9-Node.h
* author: John Aguilar Jr
* course: CSI 1440
* assignment: project 9
*
* due date: 4/24/2023
* date creating: 4/17/2023
*
*/

#ifndef PROJ9_PROJ9_NODE_H
#define PROJ9_PROJ9_NODE_H

template <class T>
class Node {
public:
    T data;
    Node<T> *next;

    Node(T e) {
        data = e;
        next = NULL;
    }
};

#endif //PROJ9_PROJ9_NODE_H
