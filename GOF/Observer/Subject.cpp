#include "Subject.h"
#include "Observer.h"

#include <iostream>
#include <list>
using namespace std;

typedef string state;

Subject::Subject()
{ //��ģ���ʹ��֮ǰһ��Ҫnew������
	_obvs = new list<Observer*>();
}

Subject::~Subject()
{ 
	delete _obvs;
	_obvs = NULL;
}

void Subject::Attach(Observer* obv)
{
	if (obv != NULL)
		_obvs->push_front(obv);
}

void Subject::Detach(Observer* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}

void Subject::Notify()
{
	list<Observer*>::iterator it;

	for (it = _obvs->begin(); it != _obvs->end(); it++)
	{ //����ģ���iterator ���÷�
		(*it)->Update(this);
	}
}

ConcreteSubject::ConcreteSubject()
{
	_st = '\0';
}

ConcreteSubject::~ConcreteSubject()
{ 

}

State ConcreteSubject::GetState()
{
	return _st;
}

void ConcreteSubject::SetState(const State& st)
{
	_st = st;
}
