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

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if the value is in the list, false otherwise.
	*/
	bool Test::Testsearch()//PASSES
	{
		LinkedListOfInts LLObject;
		LLObject.addFront(1);
		if(LLObject.search(1))
		{
			if(!LLObject.search(2))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

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

	// bool Test::testfunction() {
	// 	std::cout << "PRE" << std::endl;
	// 	LinkedListOfInts LLo;
	// 	int initialSize = LLo.toVector().size();
	// 	std::vector<int> LLv;
	// 	LLv = LLo.toVector();
	// 	std::cout << "POST" << std::endl;
	// 	LLv[0];
	// 	return true;
	// }

	bool Test::TestaddBack()//FAILS
	//add back adds to the front

	{
		LinkedListOfInts LLObject;
		LLObject.addBack(1);
		LLObject.addBack(2);
		//assuming initial size is zero
		//if(LLObject.toVector().size()==0)
		//below line was creating seg faults so made our own vector
		int vectorSize = LLObject.toVector().size();
		std::vector<int> LLVector;
		LLVector = LLObject.toVector();
		if(LLObject.toVector().size()!=0)
		{
			if(LLVector[vectorSize-1] == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}

	}

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return none.
	*/
	bool Test::TestaddFront()//PASSES
	{


			LinkedListOfInts LLObject;
			LLObject.addFront(2);
			LLObject.addFront(1);
			//assuming initial size is zero
			//if(LLObject.toVector().size()==0)
			//below line was creating seg faults so made our own vector
			int vectorSize = LLObject.toVector().size();
			std::vector<int> LLVector;
			LLVector = LLObject.toVector();
			if(LLObject.toVector().size()!=0)
			{
				if(LLVector[0] == 1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}


	}
