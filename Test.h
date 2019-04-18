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

  /**
  *@brief Prints PASSED\n or FAILED\n depending on the param result
  */
  void printResult(bool result);

  void test1(); //IsEmpty returns true for empty list
  void test2(); //size returns 0 for empty list
  void test3(); //

};

#endif
