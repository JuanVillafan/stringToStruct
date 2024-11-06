#include <iostream>

using namespace std;

struct Movie {
	
	string movie;
	
	string seasonRelease;

};

ostream& operator<<(ostream& stream, Movie movies) {
	stream << "Movie : " << movies.movie << endl;
	stream << "Season Release : " << movies.seasonRelease << endl;
	return stream;
}