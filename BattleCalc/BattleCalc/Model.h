#pragma once

#include "ModelProfile.h"
#include "Wound.h"
#include <vector>
#include <string>

class Model
{
public:
	Model() {}
	Model( const std::vector<Profile>& profiles );

	Profile GetCurrentProfile();
	unsigned int GetCurrentHealth();

	int RollToHit() const;
	std::vector<Wound> RollToWound( unsigned int toughness ) const;

// helpers:
	std::string toString( bool skipNotCurrentProfiles = false ) const;
	void Model::dump( bool full = false ) const;

private:
	void init();

private:
	std::vector<Profile> m_profiles;
	unsigned int m_healthLeft;
	// todo: add weapons
};
