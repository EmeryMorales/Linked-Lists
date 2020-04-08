#include    "Datatype.h"
#include	"Slist.h"
#include	<iostream>
using namespace std;


////
/// main program
//



int main (void)
{
    Slist		list0, list1, list2, list3, list4, list5, list6, list7,list8, list9, list10, list11,list12,list13, list14, list15, list16, list17, list18,list19;
    DataType	num, tempNum;
    bool complete = false; //Success boolean

    // create three lists

    list0.insert (2);	// first list: at front
    list0.move();
    list0.insert(3);
    list0.move();
    list0.insert(4);
    list0.move();
    list0.insert(5);
    list0.move();

    list1.insert (1);	// first list: at front
    list1.move();
    list1.insert(2);
    list1.move();
    list1.insert(3);
    list1.move();

    list3.insert (1);	// first list: at front
    list3.move();
    list3.insert(2);
    list3.move();
    list3.insert(3);
    list3.move();

    list2.insert(8);
    list2.insert(9);
    list2.insert(7);
    list2.insert(6);
    list2.insert(5);


    list4.insert (2);	// first list: at front
    list4.move();
    list4.insert(3);
    list4.move();
    list4.insert(4);
    list4.move();
    list4.insert(5);
    list4.move();

    list5.insert (1);	// first list: at front
    list5.move();
    list5.insert(2);
    list5.move();
    list5.insert(3);
    list5.move();



    list7.insert(8);
    list7.insert(9);
    list7.insert(7);
    list7.insert(6);
    list7.insert(5);


    list8.insert(8);
    list8.insert(9);
    list8.insert(7);
    list8.insert(6);
    list8.insert(5);


    list9.insert(8);
    list9.insert(9);
    list9.insert(7);
    list9.insert(6);
    list9.insert(5);

    list10.insert(8);
    list10.insert(9);
    list10.insert(7);
    list10.insert(6);
    list10.insert(5);

    list11.insert(8);
    list11.insert(9);
    list11.insert(7);
    list11.insert(6);
    list11.insert(5);


    list12.insert(1);

    list13.insert(1);


    list14.insert(8);
    list14.insert(9);
    list14.insert(7);
    list14.insert(6);
    list14.insert(5);


    // print the lists
    cout<<"I created a bunch of lists in case one of the methods didn't work";
    cout << endl << "list 0: ";
    list0.printDEBUG ();

    cout << endl << "list 1: ";
    list1.printDEBUG ();


    cout << endl << "list 2: ";
    list2.printDEBUG ();

    cout << endl << "list 3: ";
    list3.printDEBUG ();


    cout << endl << "list 4: ";
    list4.printDEBUG ();

    cout << endl << "list 5: ";
    list5.printDEBUG ();

    cout << endl << "list 6: ";
    list6.printDEBUG ();

    cout << endl << "list 7: ";
    list7.printDEBUG ();

    cout << endl << "list 8: ";
    list8.printDEBUG ();

    cout << endl << "list 9: ";
    list9.printDEBUG ();


    cout << endl << "list 10: ";
    list10.printDEBUG ();

    cout << endl << "list 11: ";
    list11.printDEBUG ();

    cout << endl << "list 12: ";
    list12.printDEBUG ();


    cout << endl << "list 13: ";
    list13.printDEBUG ();

    cout << endl << "list 14: ";
    list14.printDEBUG ();

///////////////////////////////////////////////////////////////////////////////////
    //// **New function Portion** ////
    cout << endl<<endl<<"TESTING NEW FUNCTIONS" << endl << endl;

    //// **Slist.append(const Slist& other)** ////
    cout << "TESTING Slist.append(const Slist& other):" << endl;
    cout << "(1) Adding list 1 to list0: " << endl;
    cout << "List0 contents before: ";
    list0.printDEBUG();
    cout << endl << "Input list: ";
    list1.printDEBUG();
    cout << endl;
    complete = list0.append(list1);
    if(complete)
    {
        cout << "list0 should be updated to 2 3 4 5 1 2 3, "<<endl<<">>>>>>>>Your answer:";
        list0.printDEBUG();
        cout << endl;
        cout<<endl;
        cout <<"Checking tail in list, your function should have tested updated it as necessary"<<endl;
        cout<<"Move the curor to the tail and append an 8 to the list"<<endl;
        list0.moveToEnd();
        list0.insert(8);
        cout<<">>>>>>>>>>>>>list0 contents: ";
        list0.printDEBUG();
        cout<<endl<<"Since list1 is copied to list0, adding a 2 to the front of list1 should not change list0"<<endl;
        list1.reset();
        list1.insert(2);
        cout<<">>>>>>>>>>>>list1 with 2 inserted:";
        list1.printDEBUG();
        cout<<endl<<">>>>>>>>>>list0 should be unchanged:";
        list0.printDEBUG();
    }
    else {
        cout<<">>>>>>>>ERROR: Your code should have return TRUE and been updated to "<<endl<<"Your answer:";
        list0.printDEBUG();
    }

    cout<<endl;
    cout <<endl<<"(2) Adding list1 to list1: ";
    cout << "List1 contents before: ";
    list1.printDEBUG();
    cout<<endl;
    complete=list1.append(list1);
    if (complete)
    {
        cout<<">>>>>>ERROR: Your function incorrectly return TRUE and should be updated to "<<endl;
        cout<<">>>>>>Your answer:";
        list1.printDEBUG();
    }
    else {
        cout<<">>>>>>>>>List1 was not updated, it should be unchanged:";
        list1.printDEBUG();
    }


    cout<<endl;
    cout <<endl<<"(3) Adding list13 to list12: ";
    cout << endl<<"List12 contents before: ";
    list12.printDEBUG();
    cout << endl<<"List13 contents before: ";
    list13.printDEBUG();
    cout<<endl;
    complete=list12.append(list13);
    if (complete)
    {
        cout<<"List 12 should be updated to 1 1:"<<endl;
        cout<<">>>>>>>Your answer:";
        list12.printDEBUG();
    }
    else {
        cout<<">>>>>>>>>ERROR, your code incorrectly told me not to append."<<endl;
        cout<<"Note: they are not the same lists.  However, they do have the same value"<<endl;
        list12.printDEBUG();
    }


    cout <<endl<< "(4) Adding list 6 to list0: " << endl;
    cout << "List0 contents before: ";
    list0.printDEBUG();
    cout << endl << "Input list6 (empty): ";
    list6.printDEBUG();
    cout << endl;
    complete = list0.append(list6);
    cout << "list0 should remain unchanged."<<endl<<"Your answer:";
    list0.printDEBUG();
    cout<<endl;
    cout << "Slist.append(const Slist& other): WORKING" << endl;
    cout<<endl<<endl<<endl<<endl;




////////////////////////////////////////////////////////////////////////////////////////

    //// **Slist.prepend(const Slist &other)** ////
    cout << "TESTING Slist.prepend(const Slist& other)" << endl;
    cout << "(1) Adding list4 to list3: " << endl;
    cout << "List contents before: ";
    list3.printDEBUG();
    cout << endl << "Input list: ";
    list4.printDEBUG();
    cout << endl;
    complete = list3.prepend(list4);
    if(complete)
    {
        cout << "list3 should be updated to 2 3 4 5 1 2 3"<<endl<<">>>>>>>>>>>Your answer list3:";
        list3.printDEBUG();
        cout<<endl<<"Since list4 is copied to list3, adding a 2 to the front of list4 should not change list0"<<endl;
        list4.reset();
        list4.insert(2);
        cout<<">>>>>>>>list4 with 2 inserted:";
        list4.printDEBUG();
        cout<<endl;
        cout<<">>>>>>>>>list3 should be unchanged:";
        list3.printDEBUG();
        cout << endl;
    }
    else {
        cout<<">>>>>>>ERROR: Your code should have return TRUE and been updated to "<<endl<<"Your answer:";
        list3.printDEBUG();
    }


    cout <<"(2) Adding list4 to list4: "<<endl;
    cout << "List4 contents before: ";
    list4.printDEBUG();
    cout<<endl;
    complete=list4.prepend(list4);
    if (complete)
    {
        cout<<">>>>>>>>>ERROR: Your function incorrectly return TRUE and should be updated to "<<endl;
        cout<<">>>>>>>>>>>Your answer:";
        list4.printDEBUG();
    }
    else {
        cout<<">>>>>>>>CORRECT: List4 was not updated, it should be unchanged:";
        list4.printDEBUG();
    }


    cout << endl<< "(3) Adding list6 to list3: " << endl;
    cout << "List3 contents before: ";
    list3.printDEBUG();
    cout << endl << "Input list16 (empty): ";
    list16.printDEBUG();
    cout << endl;
    complete = list3.prepend(list16);
    cout << "list3 should remain unchanged."<<endl<<"Your answer:";
    list3.printDEBUG();
    cout<<endl;
    cout << "Slist.prepend(const Slist& other): WORKING" << endl;
    cout<<endl<<endl<<endl<<endl;

   //////////////////////////////////////////////////////////////////////////////////
       //// **Slist.rotateLeft(unsigned n)** ////
       cout << "TESTING Slist.rotateLeft(unsigned n)" << endl;
       int rotateL(4);
       cout << endl << "Rotating list2 " << rotateL << " time(s)." << endl;
       cout << "Old list: ";
       list2.printDEBUG();
       cout << endl;
       list2.rotateLeft(rotateL);
       cout << ">>>>>>>>>>>Rotated list(8 5 6 7 9) : ";
       list2.printDEBUG();
       cout << endl;
       rotateL=6;
       cout << endl << "Rotating list2 " << rotateL << " time(s)." << endl;
       list2.rotateLeft(rotateL);
       cout<<"Either return False (no nothing to list) or wrap the rotate round"<<endl;
       cout << "list2: ";
       list2.printDEBUG();
       cout<<endl;
       cout<<"If wraps around make sure they did this efficiently int the code (use %)"<<endl<<endl;


       cout <<"Checking tail in list, your function should have tested updated it as necessary"<<endl;
       cout<<"Move the curor to the tail and append an 8 to the list"<<endl;
       list2.moveToEnd();
       list2.insert(8);
       cout<<"list2 contents: ";
       list2.printDEBUG();
       cout<<endl<<endl;

       cout << endl << "Rotating list19 " << rotateL << " time(s)." << endl;
       cout << "Old list(emtpy): ";
       list19.printDEBUG();
       cout << endl;
       list19.rotateLeft(rotateL);
       cout << ">>>>>>>>>>>Rotated list(empty) : ";
       list19.printDEBUG();
       cout << endl;

       cout << "Slist.rotateLeft(unsigned n): WORKING" << endl;
       cout<<endl<<endl<<endl;
























   ////////////////////////////////////////////////////////////////////////////////////
       cout << "TESTING Slist.rotateRight(unsigned n)" << endl;
       int rotateR(4);
       cout << endl << "Rotating list7 " << rotateR << " time(s)." << endl;
       cout << "Old list: ";
       list7.printDEBUG();
       cout << endl;
       list7.rotateRight(rotateR);
       cout << ">>>>>>>>Rotated list (6 7 9 8 5): ";
       list7.printDEBUG();
       cout << endl;
       rotateR=6;
       cout << endl << "Rotating list2 " << rotateR << " time(s)." << endl;
       list7.rotateRight(rotateR);
       cout<<"Either return False (no nothing to list) or wrap the rotate round"<<endl;
       cout << "list7: ";
       list7.printDEBUG();
       cout<<endl;
       cout<<"If wraps around make sure they did this efficiently int the code (use %)"<<endl<<endl;


       cout <<"Checking tail in list, your function should have tested updated it as necessary"<<endl;
       cout<<"Move the curor to the tail and append an 8 to the list"<<endl;
       list7.moveToEnd();
       list7.insert(8);
       cout<<"list2 contents: ";
       list7.printDEBUG();
       cout<<endl<<endl;
       cout << "Slist.rotateRight(unsigned n): WORKING" << endl<<endl<<endl<<endl;

       //////////////////////////////////////////////////////////////////////////////
















       //////////////////////////////////////////////////////////////////////////////



       cout << "TESTING Slist.length()" << endl;
       cout<<"List 8 contents:";
       list8.printDEBUG();
       cout<<endl;
       cout << "There are " << list8.length() << " items in list8." << endl;
       cout<<"List17 contents(EMPTY):";
       list17.printDEBUG();
       cout<<endl;
       cout << "There are " << list17.length() << " items in list6." << endl;

       cout << "Slist.length(): WORKING" << endl<<endl<<endl;
       //////////////////////////////////////////////////////////////////////////////











       //// **Slist.truncate(const DataType &item)** ////
       cout << "TESTING Slist.truncate(const DataType &item)" << endl;
       cout << "List 9: ";
       list9.printDEBUG();
       cout<<endl<<"(1) Trucate after the 7"<<endl;

       if(list9.truncate(7))
       {
           cout << "CORRECT:  The value has been found in the list." << endl;
           cout << "Now truncating the list from first occurance." << endl;
           list9.printDEBUG();
           cout<<endl;

       }
       else
       {
           cout << "ERROR: The item was not found within the list but it was there." << endl;
           cout << "Nothing has been changed." << endl;
           list9.printDEBUG();
       }


       cout <<"Checking tail in list, your function should have tested updated it as necessary"<<endl;
       cout<<"Move the curor to the tail and append an 8 to the list"<<endl;
       list9.moveToEnd();
       list9.insert(8);
       cout<<"list9 contents after insert of 8 on end: ";
       list9.printDEBUG();
       cout<<endl<<endl;

       cout << "List 10: ";
       list10.printDEBUG();
       cout<<endl<<"(2) Trucate after the 5"<<endl;

       if(list10.truncate(5))
       {
           cout << "CORRECT:  The value has been found in the list." << endl;
           cout << "The list should be empty:" << endl;
           list10.printDEBUG();
           cout<<endl;

       }
       else
       {
           cout << "ERROR: The item was not found within the list but it was there." << endl;
           cout << "Nothing has been changed." << endl;
           list10.printDEBUG();
       }


       cout <<"Checking tail in list, your function should have tested updated it as necessary"<<endl;
       cout<<"Move the curor to the tail and append an 8 to the list"<<endl;
       list10.moveToEnd();
       list10.insert(8);
       cout<<"list10 contents after insert of 8 on end(8): ";
       list10.printDEBUG();
       cout<<endl<<endl;


       cout << "List 11: ";
       list11.printDEBUG();
       cout<<endl<<"(3) Trucate after the 11 (item not in list)"<<endl;

       if(list11.truncate(11))
       {
           cout << ">>>>ERROR:  The value has been found in the list." << endl;
           cout << "The list should be empty:" << endl;
           list11.printDEBUG();
           cout<<endl;

       }
       else
       {
           cout << "CORRECT: The item was not found within the list but it was there." << endl;
           cout << "Nothing has been changed." << endl;
           list11.printDEBUG();
       }





       cout << "List 18(empty): ";
       list18.printDEBUG();
       cout<<endl<<"(3) Trucate after the 11 (item not in list)"<<endl;
       if(list18.truncate(11))
       {
           cout << ">>>>ERROR:  The value has been found in the list." << endl;
           cout << "The list should be empty:" << endl;
           list18.printDEBUG();
           cout<<endl;

       }
       else
       {
           cout << "CORRECT: The item was not found within the list but it was there." << endl;
           cout << "Nothing has been changed." << endl;
           list18.printDEBUG();
       }

       cout <<endl<< "Slist.truncate(const DataType &item): WORKING" << endl;
       cout<<endl<<endl<<endl;


       ////////////////////////////////////////////////////////////////////////////////////////////////







       //// **Slist.reverse(void)** ////
       cout << "TESTING Slist.reverse(void)" << endl;
       cout << "Old list: ";
       list14.printDEBUG();
       list14.reverse();
       cout << endl<<">>>>>>>>>>Reversed list: ";
       list14.printDEBUG();

       cout<<endl;
       cout<<"Old list (empty)";
       list15.printDEBUG();
       list15.reverse();
       cout << endl<<">>>>>>>>>>Reversed list: ";
       list15.printDEBUG();

       cout <<endl<< "Slist.reverse(void): WORKING" << endl;


    return 0;
}