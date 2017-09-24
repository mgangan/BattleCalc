#pragma once
#include "Unit.h"

class FightSimulator
{
public:
	static void Shooting( Unit& attacker, Unit& target, bool checkOnly = false, bool dump = true );
};
