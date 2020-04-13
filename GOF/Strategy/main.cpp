//main.cpp
#include "Context.h"
#include "Strategy.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

	Context* pc = new Context(new ConcreteStrategyB());
	pc->DoAction();
	
	if (NULL != pc)
	{
		delete pc;
		pc = NULL;
	}

	system("pause");

	return 0;
}