#pragma once

struct Wound
{
	Wound( int ap, unsigned int damage )
		: m_ap( ap )
		, m_damage( damage )
	{}

	void dump();

	int m_ap;
	unsigned int m_damage;
};
