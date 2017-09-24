#pragma once

#include "ModelProfile.h"
#include <vector>
#include <string>

class Model
{
public:
	Model() {}
	Model( const std::vector<Profile>& profiles );

	Profile GetCurrentProfile();
	unsigned int GetCurrentHealth();

// helpers:
	std::string toString() const;

private:
	void init();

private:
	std::vector<Profile> m_profiles;
	unsigned int m_healthLeft;
};
