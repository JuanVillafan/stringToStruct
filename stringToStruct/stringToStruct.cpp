#include <iostream>
#include <sstream>
#include <string>
#include "Movie.h"
using namespace std;

int main()
{
	Movie movieIn;
	string movieStr = "24 s2,2014";
	stringstream stream;
	stream.str(movieStr);
	stream >> movieIn.movie;
	stream >> movieIn.seasonRelease;
	cout << "_______Manual struct cout_______" << endl;
	cout << "Movie : " << movieIn.movie << endl;
	cout << "SeasonRelease : " << movieIn.seasonRelease << endl;
	//or we can use a quicker print function with ostream
	cout << "_______Quick struct Cout_______" << endl;
	cout << movieIn;
}
