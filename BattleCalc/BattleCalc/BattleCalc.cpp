#include "stdafx.h"
#include "ModelProfile.h"
#include "Model.h"

#include <vector>

void dump( const Model& m )
{
	printf( "\n Model: %s", m.toString().c_str() );
}

void TestProfileChoice()
{
	Profile p1( 5 );
	Profile p2( 1 );
	Profile p3( 3 );
	Profile p4( 10 );

	std::vector<Profile> profiles = { p1, p2, p3, p4 };
	Model m( profiles );

	dump( m );
}


int main()
{
	TestProfileChoice();

	printf( "\n\nEnd" );
	getchar();
	return 0;
}

