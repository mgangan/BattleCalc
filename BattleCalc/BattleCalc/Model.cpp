#include "stdafx.h"

#include "Model.h"
#include <algorithm>

Model::Model( const std::vector<Profile>& profiles )
	: m_profiles( profiles )
{
	init();
}

void Model::init()
{
	std::sort( m_profiles.begin(), m_profiles.end(),
		[]( const Profile& p1, const Profile& p2 )
		{
			return p1.GetHealth() > p2.GetHealth();
		}
	);
}

Profile Model::GetCurrentProfile()
{
	// DEVEL NOTES: works with sorted profiles only
	for ( auto&& profile : m_profiles )
	{
		if  ( profile.GetHealth() <= m_healthLeft )
			return profile;
	}

	return Profile();
}

unsigned int Model::GetCurrentHealth()
{
	return m_healthLeft;
}

int Model::RollToHit() const
{
	// todo: implement (after weapons are added)
	return 0;
}

std::vector<Wound> Model::RollToWound( unsigned int toughness ) const
{
	// todo: implement
	std::vector<Wound> wounds;
	return wounds;
}

//=================================================

std::string Model::toString( bool skipNotCurrentProfiles ) const
{
	std::string resStr = "";

	resStr += "\nCurrent health: ";
	resStr += std::to_string( m_healthLeft );

	if ( ! skipNotCurrentProfiles )
	{
		resStr += "\nProfiles info:";
		int num = 0;
		for ( auto&& profile : m_profiles )
		{
			resStr += "\nProfile ";
			resStr += std::to_string( num++ );
			resStr += " health = ";
			resStr += std::to_string( profile.GetHealth() );
		}
	}

	return resStr;
}

void Model::dump( bool full ) const
{
	printf( "\n Model: %s", toString( ! full ).c_str() );
}

