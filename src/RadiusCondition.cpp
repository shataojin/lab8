#include "RadiusCondition.h"

RadiusCondition::RadiusCondition(const bool within_combat_range)
{
	setIsWithinCombatRange(within_combat_range);
	name = "radius Condition";
}

RadiusCondition::~RadiusCondition()
= default;

void RadiusCondition::setIsWithinCombatRange(const bool state)
{
	m_isWithinCombatRange = state;
	data = state;
}

bool RadiusCondition::Condition()
{
	return m_isWithinCombatRange;
}
