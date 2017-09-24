#pragma once
#include <random>

class Dice
{
public:
	Dice( unsigned int edgesCount = 6 )
		: m_edgesCount( edgesCount )
	{}

	unsigned int Roll()
	{
		return std::rand() % m_edgesCount + 1;
	}

private:
	unsigned int m_edgesCount;
};
