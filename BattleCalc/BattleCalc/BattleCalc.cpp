#include "stdafx.h"
#include "ModelProfile.h"
#include "Model.h"

#include <vector>
#include <ctime>

void TestProfileChoice()
{
	Profile p1( 5 );
	Profile p2( 1 );
	Profile p3( 3 );
	Profile p4( 10 );

	std::vector<Profile> profiles = { p1, p2, p3, p4 };
	Model m( profiles );

	m.dump();
}

void init()
{
	std::srand( unsigned( std::time( 0 ) ) );
}

int main()
{
	init();


	TestProfileChoice();

	printf( "\n\nEnd" );
	getchar();
	return 0;
}

