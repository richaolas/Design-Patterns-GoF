// Visitor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "Visitor.h"

//Visitor.cpp
#include "Visitor.h"
#include "Element.h"
#include <iostream>
using namespace std;
Visitor::Visitor()
{
}
Visitor::~Visitor()
{
}
ConcreteVisitorA::ConcreteVisitorA()
{
}
ConcreteVisitorA::~ConcreteVisitorA()
{
}
void
ConcreteVisitorA::VisitConcreteElementA(Ele
	ment* elm)
{
	cout << "i will visit
		ConcreteElementA..."<<endl;
}
void
ConcreteVisitorA::VisitConcreteElementB(Ele
	ment* elm)
{
	cout << "i will visit
		ConcreteElementB..."<<endl;
}
ConcreteVisitorB::ConcreteVisitorB()
{
}
ConcreteVisitorB::~ConcreteVisitorB()
{
}
void
ConcreteVisitorB::VisitConcreteElementA(Ele
	ment* elm)
{
	cout << "i will visit
		ConcreteElementA..."<<endl;
}

void
ConcreteVisitorB::VisitConcreteElementB(El
	ement* elm)
{
	cout << "i will visit
		ConcreteElementB..."<<endl;
}