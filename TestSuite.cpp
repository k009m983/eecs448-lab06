#include "TestSuite.h"

TestSuite::TestSuite(LinkedListOfInts testList)
{
  m_list = testList;
}

void TestSuite::RunTest()
{
  std::string a = "+";
  std::string b = "FAILED";
  std::cout << "Test1:  Does size() return zero on empty list                         " << (Test9(m_list) ? a : b) << std::endl;
  std::cout << "Test2:  Is size correct after addBack on empty list                   " << (Test1(m_list) ? a : b) << std::endl;
  std::cout << "Test3:  Is size correct after addFront on empty list                  " << (Test2(m_list) ? a : b) << std::endl;
  std::cout << "Test4:  Is size correct after multiple addFront on non empty list     " << (Test3(m_list) ? a : b) << std::endl;
  std::cout << "Test5:  Is size correct after multiple addBack on non empty list      " << (Test4(m_list) ? a : b) << std::endl;
  std::cout << "Test6:  Is size correct after addBack followed by addFront            " << (Test5(m_list) ? a : b) << std::endl;
  std::cout << "Test7:  Is size correct after addFront followed by addBack            " << (Test6(m_list) ? a : b) << std::endl;
  std::cout << "Test8:  Is order correct after 2 addFronts                            " << (Test7(m_list) ? a : b) << std::endl;
  std::cout << "Test9:  Is order correct after 2 addBacks                             " << (Test8(m_list) ? a : b) << std::endl;
  std::cout << "Test10: Does isEmpty() return true on empty list                      " << (Test10(m_list) ? a : b) << std::endl;
  std::cout << "Test11: Does isEmpty() return false after addFront on empty list      " << (Test11(m_list) ? a : b) << std::endl;
  std::cout << "Test12: Does isEmpty() return false after addBack on empty list       " << (Test27(m_list) ? a : b) << std::endl;
  std::cout << "Test13: Does search() return false on empty list                      " << (Test12(m_list) ? a : b) << std::endl;
  std::cout << "Test14: Does search() return true on list with only the value         " << (Test13(m_list) ? a : b) << std::endl;
  std::cout << "Test15: Does search() return true on valid list of many               " << (Test14(m_list) ? a : b) << std::endl;
  std::cout << "Test16: Does search() return false on list of one that isnt the value " << (Test28(m_list) ? a : b) << std::endl;
  std::cout << "Test17: Does search() return false on list of many without the value  " << (Test15(m_list) ? a : b) << std::endl;
  std::cout << "Test18: Does search() find negative numbers                           " << (Test16(m_list) ? a : b) << std::endl;
  std::cout << "Test19: Does removeBack() return false on empty list                  " << (Test23(m_list) ? a : b) << std::endl;
  std::cout << "Test20: Does removeFront() return false on empty list                 " << (Test24(m_list) ? a : b) << std::endl;
  std::cout << "Test21: Does removeBack() return true on non empty list               " << (Test25(m_list) ? a : b) << std::endl;
  std::cout << "Test22: Does removeFront() return true on non empty list              " << (Test26(m_list) ? a : b) << std::endl;
  std::cout << "Test23: Does removeBack() actually remove the back value              " << (Test17(m_list) ? a : b) << std::endl;
  std::cout << "Test24: Does removeFront() actually remove the front value            " << (Test18(m_list) ? a : b) << std::endl;
  std::cout << "Test25: Does removeBack() decrement m_size                            " << (Test19(m_list) ? a : b) << std::endl;
  std::cout << "Test26: Does removeFront() decrement m_size                           " << (Test20(m_list) ? a : b) << std::endl;
  std::cout << "Test27: Can values be added after using removeBack() to clear list    " << (Test21(m_list) ? a : b) << std::endl;
  std::cout << "Test28: Can values be added after using removeFront() to clear list   " << (Test22(m_list) ? a : b) << std::endl;
  

}


bool TestSuite::Test1(LinkedListOfInts t)
{
  //Test 1 Size is correct after Add back on empty list
  t.addBack(1);
  if(t.size() == 1)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test2(LinkedListOfInts t)
{
  //Test 2 Size is correct after add front on empty LinkedListOfInts
  t.addFront(1);
  if(t.size() == 1)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test3(LinkedListOfInts t)
{
  //Test 3 Size is correct after add front on non empty LinkedListOfInts
  t.addFront(1);
  t.addFront(2);
  t.addFront(3);
  if(t.size() == 3)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test4(LinkedListOfInts t)
{
  //Test 4 Size is correct after add back on non empty LinkedListOfInts
  t.addBack(1);
  t.addBack(2);
  if(t.size() == 2)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test5(LinkedListOfInts t)
{
  //Test 5 Size is correct after addBack followed by addFront
  t.addBack(1);
  t.addFront(2);
  if(t.size() == 2)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test6(LinkedListOfInts t)
{
  //Test 6 Size is correct after addFront followed by addBack
  t.addFront(1);
  t.addBack(2);
  if(t.size() == 2)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test7(LinkedListOfInts t)
{
  t.addFront(1);
  t.addFront(2);
  t.addFront(3);
  std::vector<int> vec = t.toVector();
  //std::cout << std::endl << vec[0] << vec[1] << vec[2] << std::endl;
  std::vector<int> testVec{3,2,1};
  if(vec == testVec)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test8(LinkedListOfInts t)
{
  t.addBack(1);
  t.addBack(2);
  t.addBack(3);
  std::vector<int> vec = t.toVector();
  //std::cout<<std::endl<<vec[0]<<vec[1]<<vec[2]<<std::endl;
  std::vector<int> testVec{1,2,3};
  if(vec == testVec)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test9(LinkedListOfInts t)
{
  if(t.size() == 0)
  {
    return true;
  }
  return false;
}
bool TestSuite::Test10(LinkedListOfInts t)
{
	if (t.isEmpty())
	{
		return true;
	}
	return false;
}
bool TestSuite::Test11(LinkedListOfInts t)
{
	t.addFront(1);
	t.addFront(2);
	if (!t.isEmpty())
	{
		return true;
	}
	return false;
}
bool TestSuite::Test27(LinkedListOfInts t)
{
	t.addBack(1);
	if (!t.isEmpty())
	{
		return true;
	}
	return false;
}
bool TestSuite::Test12(LinkedListOfInts t)
{
	if (!t.search(1))
	{
		return true;
	}
	return false;
}
bool TestSuite::Test13(LinkedListOfInts t)
{
	t.addFront(1);
	if (t.search(1))
	{
		return true;
	}
	return false;
}
bool TestSuite::Test14(LinkedListOfInts t)
{
	t.addFront(1);
	t.addFront(2);
	t.addFront(3);
	if (t.search(2))
	{
		return true;
	}
	return false;
}
bool TestSuite::Test15(LinkedListOfInts t)
{
	t.addFront(1);
	t.addFront(2);
	t.addFront(3);
	if (!t.search(5))
	{
		return true;
	}
	return false;
}
bool TestSuite::Test28(LinkedListOfInts t)
{
	t.addFront(1);
	
	if (!t.search(5))
	{
		return true;
	}
	return false;
}
bool TestSuite::Test16(LinkedListOfInts t)
{
	LinkedListOfInts u = t;
	t.addFront(-1);
	u.addFront(1);
	u.addFront(-1);
	u.addFront(2);
	
	if (t.search(-1) && u.search(-1))
	{
		return true;
	}
	return false;
}
//remove back 
bool TestSuite::Test17(LinkedListOfInts t)
{
	std::vector<int> u{ 1 };
	t.addFront(2);
	t.addFront(1);
	t.removeBack();
	std::vector<int> testVec = t.toVector();
	/*std::cout << "should be 1\n";
	std::cout << "values after removeBack";
	for (int i = 0; i < t.size(); i++)
	{
		std::cout << testVec[i];
	}*/
	if (u == testVec)
	{
		return true;
	}
	return false;
}
//remove front
bool TestSuite::Test18(LinkedListOfInts t)
{
	std::vector<int> u{ 2 };
	t.addFront(2);
	t.addFront(1);
	t.removeFront();
	std::vector<int> testVec = t.toVector();
	/*std::cout << "should be 2\n";
	std::cout << "values after removeFront";
	for (int i = 0; i < t.size(); i++)
	{
		std::cout << testVec[i];
	}*/
	if (u == testVec)
	{
		return true;
	}
	return false;
}
//size correct after remove back
bool TestSuite::Test19(LinkedListOfInts t)
{
	t.addFront(2);
	t.addFront(1);
	t.removeBack();
	if (t.size() == 1)
	{
		return true;
	}
	return false;
}
//size correct after remove front
bool TestSuite::Test20(LinkedListOfInts t)
{
	t.addFront(2);
	t.addFront(1);
	t.removeFront();
	if (t.size() == 1)
	{
		return true;
	}
	return false;
}
//can add after removing all using removeBack
bool TestSuite::Test21(LinkedListOfInts t)
{
	t.addFront(2);
	t.addFront(1);
	t.removeBack();
	t.removeBack();
	t.addFront(1);
	t.addFront(2);
	if (t.size() == 2)
	{
		return true;
	}
	return false;
}
//can add after removing all using removeFront
bool TestSuite::Test22(LinkedListOfInts t)
{
	t.addFront(2);
	t.addFront(1);
	t.removeFront();
	t.removeFront();
	t.addFront(1);
	t.addFront(2);
	if (t.size() == 2)
	{
		return true;
	}
	return false;
}
//can remove back on empty list
bool TestSuite::Test23(LinkedListOfInts t)
{
	try
	{
		t.removeBack();
	}
	catch(...)
	{
		return false;
	}
	return true;
}
//can remove front on empty list
bool TestSuite::Test24(LinkedListOfInts t)
{
	try
	{
		if (t.removeFront() == true)
		{
			return false;
		}
	}
	catch (...)
	{
		return false;
	}
	return true;
}
//removeBack return true on non empty list
bool TestSuite::Test25(LinkedListOfInts t)
{
	t.addFront(1);
	t.addFront(2);
	if (t.removeBack())
	{
		return true;
	}
	return false;
}
//removeFront return true on non empty list
bool TestSuite::Test26(LinkedListOfInts t)
{
	t.addFront(1);
	t.addFront(2);
	if (t.removeFront())
	{
		return true;
	}
	return false;
}
