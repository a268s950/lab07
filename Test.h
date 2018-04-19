/**
*	@file Test.h
*	@author Anna Seib
*	@date 4/12/2018
*	@brief A header file for Linked List class
*/

#ifndef Test_H
#define Test_H

#include <iostream>
#include <vector>
#include "Test.h"

class Test
{
	public:

	/** @pre None.
	*   @post An empty list is created.
	*/
	//bool TestConstructor();

	/** @pre None.
	*   @post Deletes all nodes in the list.
	*/
        //bool TestDestructor();

	/** @pre None.
	*   @post None.
	*   @return true if the list is empty, false otherwise.
	*/
	bool TestisEmpty();

	/** @pre None.
	*   @post None.
	*   @return the number of elements in the list.
	*/
	bool Testsize();

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if the value is in the list, false otherwise.
	*/
	bool Testsearch();

	/** @pre None
	*   @post None
	*   @return A standard vector with the contents of the list
	*   NOTE: This method is guaranteed to work. It's only one guaranteed though
	*/
	//std::vector<int> toVector() const;

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return none.
	*/
	bool TestaddBack();

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return none.
	*/
	bool TestaddFront();

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if the back element was removed, false if the list is empty.
	*/
	bool TestremoveBack();

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if the front element was removed, false if the list is empty.
	*/
	bool TestremoveFront();

};

#endif

//add back doesn't work so maybe it ads front
