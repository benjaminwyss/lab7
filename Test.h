/**
*	@file Test.h
*	@author Benjamin Wyss
*	@date 4/18/19
*	@brief A header file for Linked List Test Suite class
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "LinkedListOfInts.h"

class Test
{
  public:

  /**
  *@brief runs all test and prints output to console
  */
  void runTests();

  void test1(); //IsEmpty returns true for empty list
  void test2(); //IsEmpty returns false after 1 addBack
  void test3(); //IsEmpty returns false after 1 addFront
  void test4(); //size returns 0 for empty list
  void test5(); //size returns 1 after 1 addBack
  void test6(); //size returns 1 after 1 addFront
  void test7(); //size returns correct value after multiple addBack
  void test8(); //size returns correct value after multiple addFront
  void test9(); //size returns correct value after 1 addBack and 1 addFront
  void test10(); //size returns correct value after multiple addFront and 1 removeFront
  void test11(); //size returns correct value after multiple addBack and 1 removeBack
  void test12(); //size returns correct value after multiple addFront, AddBack, removeFront, and removeBack
  void test13(); //search returns false for empty list
  void test14(); //search returns false when value is not in last
  void test15(); //search returns true when value is in list
  void test16(); //search returns true when value is in list multiple times
  void test17(); //toVector returns empty vector from empty list
  void test18(); //toVector returns correct vector from filled list
  void test19(); //1 addBack results in the correct list
  void test20(); //multiple addBack results in the correct list
  void test21(); //1 addFront results in the correct list
  void test22(); //multiple addFront results in the correct list
  void test23(); //1 addBack and 1 addFront results in the correct list
  void test24(); //multiple addBack and multiple addFront results in the correct list
  void test25(); //removeBack returns false on an empty list
  void test26(); //removeBack returns true on a nonempty list
  void test27(); //1 removeBack results in the correct list
  void test28(); //multiple removeBack results in the correct list
  void test29(); //removeFront returns false on an empty list
  void test30(); //removeFront returns true on a nonempty list
  void test31(); //1 removeFront results in the correct list
  void test32(); //multiple removeFront results in the correct list
  void test33(); //1 removeBack and 1 removeFront results in the correct list
  void test34(); //multiple removeBack and multiple removeFront results in the correct list

  private:
    
  /**
  *@brief Prints PASSED\n or FAILED\n depending on the param result
  */
  void printResult(bool result);

  /**
  *@brief returns true if the provided list matches the expected vector
  */
  bool compare(LinkedListOfInts list, std::vector<int> expected);

};

#endif
