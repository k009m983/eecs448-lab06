#include "TestSuite.h"

TestSuite::TestSuite(LinkedListOfInts testList)
{
  m_list = testList;
}

void TestSuite::RunTest()
{
  std::cout<<"Test\n";  
}
