/**
*	@file Test.cpp
*	@author Anna Seib
*	@date 4/12/2018
*	@brief A header file for Linked List class
*/

#include "Test.h"
#include "LinkedListOfInts.h"

#include <algorithm>


	bool Test::TestisEmpty()//FAILS
  {

				LinkedListOfInts LLObject; //creates an object from the linkedlistofints.h class
				if(LLObject.toVector().size()==0)
				{
				return false;
				}
				else
				{
				return false;
				}
  }
	/** @pre None.
	*   @post None.
	*   @return the number of elements in the list.
	*/
	bool Test::Testsize() //PASSES
	{
		LinkedListOfInts LLObject; //creates an object from the linkedlistofints.h class
		if(LLObject.toVector().size()==LLObject.size())
			return true;
		else
			return false;
  }
