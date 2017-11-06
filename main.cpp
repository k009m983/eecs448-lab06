/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.cpp"

int main(int argc, char** argv)
{
	LinkedListOfInts testableList;
	TestSuite TS(testableList);

	TS.RunTest();

	//std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
