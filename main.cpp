/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

void printList(LinkedListOfInts list)
{
	std::vector<int> vec = list.toVector();
	for (unsigned int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << "\n";
	}
	std::cout << "\n";
}

int main(int argc, char** argv)
{
	Test myTester;
	myTester.runTests();

	return (0);

}
