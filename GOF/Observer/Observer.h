//Observer.h
#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include "Subject.h"

#include <string>
using namespace std;

class Observer
{
public:
	virtual ~Observer();
	virtual void Update(Subject* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
private:
};

class ConcreteObserverA :public Observer
{
public:
	ConcreteObserverA(ConcreteSubject* sub);
	virtual ~ConcreteObserverA();

	virtual Subject* GetSubject();
	//����Subject ��Ϊ����������������һ�� View ���ڶ����Subject��
	void Update(Subject* sub);
	void PrintInfo();
protected:
private:
	ConcreteSubject* _sub;
	State _st;
};

class ConcreteObserverB :public Observer
{
public:
	ConcreteObserverB(ConcreteSubject* sub);
	virtual ~ConcreteObserverB();

	virtual Subject* GetSubject();
	//����Subject ��Ϊ����������������һ��View ���ڶ����Subject��
	void Update(Subject* sub);
	void PrintInfo();
protected:
private:
	ConcreteSubject* _sub;
	State _st;
};

#endif //~_OBSERVER_H_
