/*
* file: proj9-MyList.h
* author: John Aguilar Jr
* course: CSI 1440
* assignment: project 9
*
* due date: 4/24/2023
* date creating: 4/17/2023
*
*/

#ifndef PROJ9_PROJ9_MYLIST_H
#define PROJ9_PROJ9_MYLIST_H

#include "proj9-ContainerIfc.h"
#include "proj9-Node.h"
#include <iostream>

using namespace std;

template <class T>
class MyList : public ContainerIfc <T> {
public:
    MyList();
    ~ MyList();
    MyList(const MyList&);
    MyList <T>& operator = (const MyList&);
    MyList <T>& pushFront(T);
    MyList <T>& pushBack(T);
    MyList <T>& popFront(T&);
    MyList <T>& popBack(T&);
    int getSize();
    bool isEmpty();
    T front();
    T back();
    T& operator [](int);
    void erase();

protected:
    Node<T> *head;
};

//Big Four---------------------------------------------------------------------
/*
 * description: class constructor
 * pre-condition: none
 * post-condition: head points to NULL
 * return: nothing
 */
template <class T>
MyList<T>::MyList(){
    head = NULL;
}

/*
 * description: class destructor
 * pre-condition: a MyList object exists
 * post-condition: all memory allocated to the MyList is deleted
 * return: nothing
 */
template <class T>
MyList<T>::~ MyList(){
    Node<T>* curr = head;
    while(curr){
        Node<T>* temp = curr->next;
        delete curr;
        curr = temp;
    }
}

/*
 *description: class copy constructor
 * pre-condition: a MyList object exists
 * post-condition: a copy of the class object n is made
 * return: nothing
 */
template <class T>
MyList<T>::MyList(const MyList& n){

}

/*
 * description: overloaded assignment operator
 * pre-condition: a object exists
 * post-condition: the object n is unchanged and *this is an exact copy of n
 * return: *this
 */
template <class T>
MyList <T>& MyList<T>::operator=(const MyList& n){

}

//Reference Operator-----------------------------------------------------------
/*
 * description: returns a reference to data element n in the linked list
 * pre-condition: a object exists
 * post-condition: the object is unchanged
 * error: throw BADINDEX if n >= currentSize or n < 0
 */
template <class T>
T& MyList<T>:: operator [](int ndx){

}

//Push and Pop Functions-------------------------------------------------------
/*
 * description: store data element n in a new Node and adds the Node to the front of a data structure (MyList)
 * pre-condition: a MyList object exists
 * post-condition: a new Node has been added to the front of the MyList
 * return: a reference to self
 */
template <class T>
MyList <T>& MyList<T>::pushFront(T val){
    Node<T>* newNode = new Node<T>(val);
    newNode->next = head;
    head = newNode;
    return *this;
}
/*
 * description: store data element n in a new Node and adds the Node to the rear (end) of a data structure (MyList)
 * pre-condition: a MyList object exists
 * post-condition: a new data element has been added to the rear (end) of the MyList
 * return: a reference to self
 */
template <class T>
MyList <T>& MyList<T>::pushBack(T val){
    Node<T>* newNode = new Node<T>(val);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    return *this;
}

/*
 * description: removes a data element from the front of the data structure (MyList)
 * pre-condition: a object exists
 * post-condition: a Node has been removed from the front of the linked MyList pointed to by head, and set n equal to the data of the node removed
 * error: if the MyList is empty throw a BADINDEX exception
 * return: a reference to self
 */
template <class T>
MyList <T>& MyList<T>::popFront(T& val){
    Node<T>* newNode = new Node<T>(val);
    Node<T>* current = head;

}

/*
 * description: removes a data element from the rear (end) of the data structure (MyList)
 * pre-condition: a object exists
 * post-condition: a Node has been removed from the rear of the linked MyList pointed to by head and set n to the data of the node removed
 * error: if the MyList is empty throw a BADINDEX exception
 * return: a reference to self
 */
template <class T>
MyList <T>& MyList<T>::popBack(T&){

}

//Front and Back Functions-----------------------------------------------------
/*
 * description: returns a copy of the first data item in the linked list
 * pre-condition: a object exists
 * post-condition: the object is unchanged
 * error: throw BADINDEX if the linked MyList is empty
 */
template <class T>
T MyList<T>:: front(){

}

/*
 * description: returns a copy of the last data item in the linked list
 * pre-condition: a object exists
 * post-condition: the object is unchanged
 * error: throw BADINDEX if the linked MyList is empty
 */
template <class T>
T MyList<T>::back(){

}

//Other Functions--------------------------------------------------------------
/*
 * description: returns the number of Nodes currently in the linked MyList
 * pre-condition: a object exists
 * post-condition: the linked MyList is unchanged
 * return: an integer value representing the number of elements in the MyList
 */
template <class T>
int MyList<T>::getSize(){

}

/*
 * Description:    Returns state information about the list
 * Pre-condition:  A object exists
 * Post-condition: The MyList is unchanged
 * Return:         True if the MyList is empty false otherwise
 */
template <class T>
bool MyList<T>::isEmpty(){

}

/*
 * description: removes all nodes from MyList
 * pre-condition: a object exists
 * post-condition: the object is an empty MyList
 */
template <class T>
void MyList<T>::erase(){

}

#endif //PROJ9_PROJ9_MYLIST_H
