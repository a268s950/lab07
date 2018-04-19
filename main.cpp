/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	//LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
	Test LLTestObject; //object has the functions of the class inside of it and variables
	if(LLTestObject.TestisEmpty())
	std::cout << "Test 1: TestisEmpty: PASSED"<< std::endl;
	else
	std::cout << "Test 1: TestisEmpty: FAILED"<< std::endl;

	if (LLTestObject.Testsize())
		std::cout << "Test 2: Testsize: PASSED" << std::endl;
	else
	std::cout << "Test 2: Testsize: FAILED" << std::endl;

	if(LLTestObject.Testsearch())
	std::cout << "Test 3: Testsearch: PASSED" << std::endl;
	else
	std::cout << "Test 3: Testsearch: FAILED" << std::endl;

	if(LLTestObject.TestaddBack())
	std::cout << "Test 4: TestaddBack: PASSED" << std::endl;
	else
	std::cout << "Test 4: TestaddBack: FAILED" << std::endl;

	if(LLTestObject.TestaddFront())
	std::cout << "Test 5: TestaddFront: PASSED" << std::endl;
	else
	std::cout << "Test 5: TestaddFront: FAILED" << std::endl;

	if(LLTestObject.TestremoveBack())
	std::cout << "Test 6: TestremoveBack: PASSED" << std::endl;
	else
	std::cout << "Test 6: TestremoveBack: FAILED" << std::endl;

	if(LLTestObject.TestremoveFront())
	std::cout << "Test 7: TestremoveFront: PASSED" << std::endl;
	else
	std::cout << "Test 7: TestremoveFront: FAILED" << std::endl;

	std::cout << "Running...\nAnd it's done.\nGoodbye.\n";

	return (0);

}
