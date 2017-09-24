#include "stdafx.h"

#include "FightSimulator.h"


void FightSimulator::Shooting( Unit& attacker, Unit& target, bool checkOnly, bool dump )
{
	if ( dump )
	{
		printf( "\n===== Shooting =====" );
		printf( "\nAttacking unit: " );
		for ( auto&& model : attacker.GetModels() )
			model.dump();
		printf( "\nTarget unit: " );
		for ( auto&& model : target.GetModels() )
			model.dump();
	}

	std::vector<Wound> wounds;

	int allHitsCount = 0;
	for ( auto&& model : attacker.GetModels() )
	{
		int hits = model.RollToHit();
		allHitsCount += hits;

		for ( int i = 0; i < hits; ++i )
		{
			std::vector<Wound> newWounds = model.RollToWound( target.GetToughness() );
			wounds.reserve( wounds.size() + newWounds.size() );
			wounds.insert( wounds.end(), newWounds.begin(), newWounds.end() );
		}
	}

	if ( dump )
		printf( "\nHits: %d", allHitsCount );

	Unit saveTarget = target;

	for ( auto&& wound : wounds )
	{
		if ( dump )
			wound.dump();

		// todo: save roll
	}

	if ( checkOnly )
		target = saveTarget;
}
