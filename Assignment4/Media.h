#include <map>
#include <string>
#include "Movie.h"

using namespace std;

class Media
{
	public:
		char MediaType;
		int Quantity;
		string Title;

		Media();
		~Media();

		void increaseQuanity();
		void decreaseQuanity();
};

class MediaFactory
{
	map<char, Media*> MediaTypes;

	public:
		MediaFactory();
		~MediaFactory();
		Media* makeMedia(char);
};