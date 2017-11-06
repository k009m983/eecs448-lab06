/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{
	LinkedListOfInts testableList;
	TestSuite TS = new TestSuite(testableList);

	TS.RunTest();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
