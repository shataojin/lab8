#include "MoveToPlayerAction.h"
#include <iostream>

MoveToPlayerAction::MoveToPlayerAction()
{
	name = "MoveToPlayerAction Action";
}

MoveToPlayerAction::~MoveToPlayerAction()
= default;

void MoveToPlayerAction::Action()
{
	std::cout << "Performing MoveToPlayerAction Action" << std::endl;
}
