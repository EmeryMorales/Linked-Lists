// FILE: Slist.cpp
// B Sanders, Rhodes College
// updated: 2.03.2020 CLION FIX
//
//		Implementation: singly linked list
//
//		Class invariants:
//			- head, tail, and cursor are nonzero
//			- head points at empty head node
//			- tail points at last node
//			- last node has zero next pointer

#include	"Slist.h"
#include	<iostream>
using namespace std;


//////// private data type: Node ////////

struct Slist::Node {

// Node constructors

    Node (void) {
        next = 0;
    }
    Node (const DataType& newItem) {
        dataItem = newItem;
        next = 0;
    }

// Node data

    DataType	dataItem;
    Node		*next;
};


//////// public member functions ////////

//// constructor, destructor
Slist::Slist (void) {
    tail = cursor = head = new Node;
}

Slist::~Slist (void) {
    clean ();
    delete head;
}

//// mutators

// insert
//		insert newItem after cursor node
void Slist::insert (DataType newItem) {
    Node *pNewNode = new Node (newItem);
    pNewNode -> next = cursor -> next;
    if ((pNewNode -> next) == 0) {
        tail = pNewNode;
    }
    cursor -> next = pNewNode;
}

// remove
//		delete node following cursor node
bool Slist::remove (void) {
    Node *temp = cursor -> next;
    if (temp) {
        if (temp == tail) {
            tail = cursor;
        }
        cursor -> next = cursor -> next -> next;
        delete temp;
        return true;
    }
    return false;
}

// clean
//		delete all nodes
void Slist::clean (void) {
    reset ();
    while (remove ()) {
    }
}

// move
//		move cursor to next node
bool Slist::move (void) {
    if (cursor -> next) {
        cursor = cursor -> next;
        return true;
    }
    return false;
}

// moveToEnd
//		set cursor to point to tail node
void Slist::moveToEnd (void) {
    cursor = tail;
}

// reset
//		set cursor to point to empty head node
void Slist::reset (void) {
    cursor = head;
}



//// accessors

// empty
//		return true if list is empty; false otherwise
bool Slist::empty (void) const {
    return (head == tail);
}

// get
//		retrieve data item in node after cursor node
bool Slist::get (DataType& item) const {
    if (cursor -> next) {
        item = cursor -> next -> dataItem;
        return true;
    }
    return false;
}

// printDEBUG	[public wrapper]
//		print all items of the list
//		[for debugging ONLY --- application would normally control all output!]
void Slist::printDEBUG (void) const {
    printDEBUG (head -> next);
}



//// checkpoint

// append
//        append a copy of another list to the end of this list; cannot append itself
bool Slist::append(const Slist& other) {
    // checks if same list
    if (this == &other) {
        return false;
    }
    // empty
    if (other.empty()) {
        return false;
    }
    // append
    Node *temp = other.head->next;
    while (temp != nullptr) {
        moveToEnd();
        insert(temp->dataItem);
        temp = temp->next;
    }
    reset();
    return true;
}

// prepend
//          adds list to the beginning of this list; cannot prepend itself
bool Slist::prepend(const Slist& other) {
    // checks if same list
    if (this == &other) {
        return false;
    }
    // empty
    if (other.empty()) {
        return false;
    }
    // prepend
    Node *temp = other.head->next;
    reset();
    while (temp != nullptr) {
        insert(temp->dataItem);
        move();
        temp = temp->next;
    }
    reset();
    return true;
}


//// rest of project

//rotateLeft
//             rotates nodes in list from back n positions
bool Slist::rotateLeft(unsigned n) {
    // checks if n = 0, if length and n are the same, if list is empty
    if (n == 0 || n == this->length() || this->head->next == nullptr) {
        return false;
    }

    Node *temp = this->head->next;
    for (int i = 0; i < n; i++) {
        moveToEnd();
        insert(temp->dataItem);
        temp = temp->next;
        head = this->head->next;
    }
    return true;
}


// rotateRight
//              rotates nodes in list from back to front n positions
bool Slist::rotateRight(unsigned n) {
    n %= length();
    return rotateLeft(length() - n);
}

// length
//              returns the number of (real) nodes in this list
int Slist::length() const {
    int ctr = 0;
    Node *temp = this->head->next;
    while (temp != nullptr) {
        temp = temp->next;
        ctr++;
    }
    return ctr;
}

// truncate
//              deletes list including and beyond the first occurrence of item
bool Slist::truncate(DataType item) {
    DataType compare;
    bool found;
    Node *index;
    for (int i = 0; i < length(); i++) {
        get(compare);
        if (compare == item) {
            found = true;
            index = cursor;
        }
        move();
    }
    if (!found) {
        return false;
    }

    // delete
    cursor = index;
    while(remove()) {
    }
    return true;
}

// reverse
//              reverses the order of node in the list
void Slist::reverse(void) {
    Node *prev;
    Node *curr;
    Node *temp;

    if (length() <= 1) {
        return;
    }

    curr = head->next;
    temp = curr;
    head->next = tail;
    head = cursor;
    tail = temp;
    while (curr != nullptr) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    tail->next = nullptr;
    reset();
}



//////// private member function ////////

// printDEBUG	[private accessor]
//		print data item stored in thisNode and beyond
void Slist::printDEBUG (const Node *thisNode) const {
    if (thisNode) {
        cout << thisNode -> dataItem << ' ';
        printDEBUG (thisNode -> next);
    }
}

