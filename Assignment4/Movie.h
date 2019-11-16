//Movie, MovieFactory, Classic, Drama, Comedy
#include <iostream>
#include <map>
#include <string>
#include "Media.h"

using namespace std;

class Movie: public Media {
public:
	char MovieType;
	string Director;

	Movie();
	virtual ~Movie();
	virtual string toString();
	virtual ostream& operator<<(ostream& Os, const Media& M);
};

class MovieFactory {
private:
	map<char, Movie*> MovieTypes;
public:
	MovieFactory();
	~MovieFactory();
	Movie* makeMovie(char);
};

class Comedy: public Movie{
public:
	int ReleaseYear;

	Comedy();
	~Comedy();
    ostream& operator<<(ostream& Os, const Comedy& M) override;
};

class Drama: public Movie{
public:
	int ReleaseYear;

	Drama();
	~Drama();
    ostream& operator<<(ostream& Os, const Comedy& M) override;
};

class Classic : public Movie {
public:
	int ReleaseYear, ReleaseMonth;
    string ActorFirstName, ActorLastName;

    Classic();
	~Classic();
    ostream& operator<<(ostream& Os, const Movie& M) override;
};