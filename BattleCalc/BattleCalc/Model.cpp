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

//=================================================

std::string Model::toString() const
{
	std::string resStr = "";

	resStr += "\nCurrent health: ";
	resStr += std::to_string( m_healthLeft );

	resStr += "\nProfiles info:";
	int num = 0;
	for ( auto&& profile : m_profiles )
	{
		resStr += "\nProfile ";
		resStr += std::to_string( num++ );
		resStr += " health = ";
		resStr += std::to_string( profile.GetHealth() );
	}

	return resStr;
}

