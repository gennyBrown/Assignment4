#include <string>
#include <vector>
#include "Movie.h"


class MovieDatabase {
private:
	 vector<> Movies;

public:
	MovieDatabase();
	~MovieDatabase();
	Movie* getMovie(string);
	bool add(Movie*);
	bool remove(Movie*);
	bool clear();
	void showInventory();
	int getHash(string);

};