#include "stdafx.h"

#include "Wound.h"
#include <string>


void Wound::dump()
{
	std::string str = "\nAP = ";
	str += std::to_string( m_ap );
	str += "\nDamage: ";
	str += std::to_string( m_damage );

	printf("\nWound: %s", str.c_str() );
}

