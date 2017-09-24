#pragma once

class Profile
{
public:
	Profile() {}
	Profile( unsigned int health )
		: m_health( health )
	{}

	unsigned int GetHealth() const { return m_health; }
private:
	unsigned int m_health; // low boundary
};
