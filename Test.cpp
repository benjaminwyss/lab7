/**
*	@file Test.cpp
*	@author Benjamin Wyss
*	@date 4/18/19
*	@brief A cpp file for Linked List Test Suite class
*/

#include "Test.h"

void Test::runTests()
{
  std::cout << "Starting Tests!\n";
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
  test17();
  test18();
  test19();
  test20();
  test21();
  test22();
  test23();
  test24();
  test25();
  test26();
  test27();
  test28();
  test29();
  test30();
  test31();
  test32();
  test33();
  test34();
  std::cout << "All Tests Finished!\n";
}

void Test::printResult(bool result)
{
  if (result)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

bool Test::compare(LinkedListOfInts list, std::vector<int> expected)
{
  return (list.toVector() == expected);
}

void Test::test1()
{
  std::cout << "TEST 1: IsEmpty returns true for empty list: ";
  LinkedListOfInts list;

  printResult(list.isEmpty());
}

void Test::test2()
{
  std::cout << "TEST 2: IsEmpty returns false after 1 addBack: ";
  LinkedListOfInts list;
  list.addBack(0);

  printResult(list.isEmpty() == false);
}

void Test::test3()
{
  std::cout << "TEST 3: IsEmpty returns false after 1 addFront: ";
  LinkedListOfInts list;
  list.addFront(0);

  printResult(list.isEmpty() == false);
}

void Test::test4()
{
  std::cout << "TEST 4: size returns 0 for empty list: ";
  LinkedListOfInts list;

  printResult(list.size() == 0);
}

void Test::test5()
{
  std::cout << "TEST 5: size returns 1 after 1 addBack: ";
  LinkedListOfInts list;
  list.addBack(0);

  printResult(list.size() == 1);
}

void Test::test6()
{
  std::cout << "TEST 6: size returns 1 after 1 addFront: ";
  LinkedListOfInts list;
  list.addFront(0);

  printResult(list.size() == 1);
}

void Test::test7()
{
  std::cout << "TEST 7: size returns correct value after multiple addBack: ";
  LinkedListOfInts list;
  list.addBack(1);
  list.addBack(2);
  list.addBack(3);

  printResult(list.size() == 3);
}

void Test::test8()
{
  std::cout << "TEST 8: size returns correct value after multiple addFront: ";
  LinkedListOfInts list;
  list.addFront(3);
  list.addFront(2);
  list.addFront(1);

  printResult(list.size() == 3);
}

void Test::test9()
{
  std::cout << "TEST 9: size returns correct value after 1 addBack and 1 addFront: ";
  LinkedListOfInts list;
  list.addFront(0);
  list.addBack(1);

  printResult(list.size() == 2);
}

void Test::test10()
{
  std::cout << "TEST 10: size returns correct value after multiple addFront and 1 removeFront: ";
  LinkedListOfInts list;
  list.addFront(3);
  list.addFront(2);
  list.addFront(1);
  list.removeFront();

  printResult(list.size() == 2);
}

void Test::test11()
{
  std::cout << "TEST 11: size returns correct value after multiple addBack and 1 removeBack: ";
  LinkedListOfInts list;
  list.addBack(1);
  list.addBack(2);
  list.addBack(3);
  list.removeBack();

  printResult(list.size() == 2);
}

void Test::test12()
{
  std::cout << "TEST 12: size returns correct value after multiple addFront, addBack, removeFront, and removeBack: ";
  LinkedListOfInts list;
  list.addFront(3);
  list.addFront(2);
  list.addBack(1);
  list.addBack(0);
  list.addBack(5);
  list.addFront(4);
  list.removeFront();
  list.removeBack();
  list.removeBack();
  list.removeFront();

  printResult(list.size() == 2);
}

void Test::test13()
{
  std::cout << "TEST 13: search returns false for empty list: ";
  LinkedListOfInts list;

  printResult(list.search(0) == false);
}

void Test::test14()
{
  std::cout << "TEST 14: search returns false when value is not in list: ";
  LinkedListOfInts list;
  list.addBack(0);

  printResult(list.search(1) == false);
}

void Test::test15()
{
  std::cout << "TEST 15: search returns true when value is in list: ";
  LinkedListOfInts list;
  list.addBack(0);
  list.addBack(1);
  list.addBack(2);
  list.addBack(3);

  printResult(list.search(2));
}

void Test::test16()
{
  std::cout << "TEST 16: search returns true when value is in list multiple times: ";
  LinkedListOfInts list;
  list.addBack(0);
  list.addBack(0);
  list.addBack(0);
  list.addBack(0);

  printResult(list.search(0));
}

void Test::test17()
{
  std::cout << "TEST 17: toVector returns empty vector from empty list: ";
  LinkedListOfInts list;

  printResult(list.toVector().empty());
}

void Test::test18()
{
  std::cout << "TEST 18: toVector returns correct vector from filled list: ";
  LinkedListOfInts list;
  list.addFront(1);
  list.addFront(2);
  list.addFront(3);

  printResult(compare(list, {3, 2, 1}));
}

void Test::test19()
{
  std::cout << "TEST 19: 1 addBack results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test20()
{
  std::cout << "TEST 20: multiple addBack results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test21()
{
  std::cout << "TEST 21: 1 addFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test22()
{
  std::cout << "TEST 22: multiple addFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test23()
{
  std::cout << "TEST 23: 1 addBack and 1 addFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test24()
{
  std::cout << "TEST 24: multiple addBack and multiple addFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test25()
{
  std::cout << "TEST 25: removeBack returns false on an empty list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test26()
{
  std::cout << "TEST 26: removeBack returns true on a nonempty list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test27()
{
  std::cout << "TEST 27: 1 removeBack results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test28()
{
  std::cout << "TEST 28: multiple removeBack results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test29()
{
  std::cout << "TEST 29: removeFront returns false on an empty list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test30()
{
  std::cout << "TEST 30: removeFront returns true on a nonempty list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test31()
{
  std::cout << "TEST 31: 1 removeFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test32()
{
  std::cout << "TEST 32: multiple removeFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test33()
{
  std::cout << "TEST 33: 1 removeBack and 1 removeFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}

void Test::test34()
{
  std::cout << "TEST 34: multiple removeBack and multiple removeFront results in the correct list: ";
  LinkedListOfInts list;

  printResult(true);
}
