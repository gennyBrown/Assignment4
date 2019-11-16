//Movie, MovieFactory, Classic, Drama, Comedy
#include <string>
#include <map>

using namespace std;

class Movie {
public:
	char MovieType;
	string Director;

	Movie();
	~Movie();
	virtual string toString();
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
	string toString() override;
};

class Drama: public Movie{
public:
	int ReleaseYear;

	Drama();
	~Drama();
	string toString() override;
};

class Classic : public Movie {
public:
	int ReleaseYear, ReleaseMonth;
	
	Classic();
	~Classic();
	string ActorFirstName, ActorLastName;
	string toString() override;
};