//Observer.cpp
#include "Observer.h"
#include "Subject.h"
#include <iostream>
#include <string>
using namespace std;

Observer::Observer()
{
	//_st = '\0';
}

Observer::~Observer()
{

}

ConcreteObserverA::ConcreteObserverA(ConcreteSubject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
	_sub->Detach(this);
}

Subject* ConcreteObserverA::GetSubject()
{
	return _sub;
}

void ConcreteObserverA::PrintInfo()
{
	_st = _sub->GetState();
	cout << "ConcreteObserverA observer...."
		 << _st
		 << endl;
}

void ConcreteObserverA::Update(Subject* sub)
{
	PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(ConcreteSubject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
	_sub->Detach(this);
}

Subject* ConcreteObserverB::GetSubject()
{
	return _sub;
}

void ConcreteObserverB::PrintInfo()
{
	_st = _sub->GetState();
	cout << "ConcreteObserverB observer...."
		<< _st
		<< endl;
}

void ConcreteObserverB::Update(Subject* sub)
{
	PrintInfo();
}
