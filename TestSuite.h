/**
*	@file TestSuite.h
*	@author Kaiser Mittenburg
*	@date 11/5/2017
*	@brief Test suite to test linked list
*/

#ifndef TESTSUITE_H
#define TESTSUITE_H
#include "LinkedListOfInts.h"
class TestSuite
{
	public:
    TestSuite(LinkedListOfInts testList);
    void RunTest();

  private:
    LinkedListOfInts m_list;
};

#endif
