#include "PatrolAction.h"
#include <iostream>

PatrolAction::PatrolAction()
{
	name = "MoveToPlayerAction Action";
}

PatrolAction::~PatrolAction()
= default;

void PatrolAction::Action()
{
	std::cout << "Performing PatrolAction Action" << std::endl;
}
