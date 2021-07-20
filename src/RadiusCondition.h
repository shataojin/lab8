#pragma once
#ifndef __RADIUS_CONDITION__
#define __RADIUS_CONDITION__
#include "ConditionNode.h"

class RadiusCondition : public ConditionNode
{
public:
	RadiusCondition(bool within_combat_range = false);
	virtual ~RadiusCondition();

	// Getters and Setters
	void setIsWithinCombatRange(bool state);

	virtual bool Condition() override;
private:
	bool m_isWithinCombatRange;
};

#endif /* defined (__CLOSE_COMBAT_CONDITION__) */