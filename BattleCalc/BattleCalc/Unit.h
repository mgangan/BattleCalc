#pragma once

#include "Model.h"
#include <vector>

class Unit
{
public:
	Unit() {}

	void AddModel( const Model& m );

	std::vector<Model>& GetModels() { return m_models; }
	unsigned int GetToughness() { return m_toughness; }

private:
	std::vector<Model> m_models;
	unsigned int m_toughness;
};
