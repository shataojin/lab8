#include "MoveToLISAction.h"
#include <iostream>

MoveToLISAction::MoveToLISAction()
{
	name = "MoveToLISAction Action";
}

MoveToLISAction::~MoveToLISAction()
= default;

void MoveToLISAction::Action()
{
	std::cout << "Performing MoveToLISAction Action" << std::endl;
}
