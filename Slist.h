// FILE: Slist.h
// B Sanders, Rhodes College
// updated: 1.31.2020 CLION FIX
//
//		Interface: singly linked list
//

#ifndef	SLIST_H
#define	SLIST_H

#include "Datatype.h"

class Slist {
public:
//// public member functions:

    Slist (void);					//// constructor, destructor
    ~Slist (void);

    //// mutators

    void insert (DataType newItem);	// insert new item after cursor
    bool remove (void);						// remove item
    void clean (void);						// remove all items

    bool move (void);						// move to next item
    void moveToEnd (void);					// move to end of list
    void reset (void);						// return to beginning of list

    //// accessors

    bool empty (void) const;				// is list empty?
    bool get (DataType& item) const;		// get current item
    void printDEBUG (void) const;			// print all items [DEBUG]

    //// checkpoint
    bool append(const Slist& other);        // adds list to the end of this list
    bool prepend(const Slist& other);       // adds list to the beginning of this list

    //// rest of project
    bool rotateLeft(unsigned n);             // rotates nodes in list from back n positions
    bool rotateRight(unsigned n);           // rotates nodes in list from back to front n positions
    int length() const;                     // returns the number of (real) nodes in this list
    bool truncate(DataType item);           // deletes list including and beyond the first occurrence of item
    void reverse(void);                     // reverses the order of node in the list

private:
//// private data

    struct Node;		// (pure declaration --- not a definition)
    Node *head, *tail, *cursor;

//// private member function:

    void printDEBUG (const Node *thisNode) const;
};

#endif