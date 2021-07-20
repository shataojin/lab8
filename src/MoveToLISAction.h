#pragma once
#ifndef __MOVE_TO_LOS_ACTION__
#define __MOVE_TO_LOS_ACTION__
#include "ActionNode.h"

class MoveToLISAction : public ActionNode
{
public:
	MoveToLISAction();
	virtual ~MoveToLISAction();

	virtual void Action() override;
private:

};

#endif /
