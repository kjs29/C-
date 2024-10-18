#include <iostream>
using namespace std;

class Movie {
	
	public:
		string title;
		string director;
		int rating;
		Movie(string aTitle, string aDirector, int aRating) {
			title = aTitle;
			director = aDirector;
			rating = aRating;
		}
};

int main () {
	
	
	Movie first("Shawshank redemption","idk",5);
	cout<<first.director;
	return 0;
}

---
#include <iostream>
using namespace std;

class Movie {
	//
	private:
		string rating;
	
	//any other people can access this information since it is 'public'
	public:
		string title;
		string director;
		Movie(string aTitle, string aDirector, string aRating) {
			title = aTitle;
			director = aDirector;
			setRating (aRating);
		}
		
		void setRating (string aRating) {
			if(aRating == "G"||aRating =="PG"||aRating =="PG-13"||aRating =="R"||aRating =="NR"){
				rating = aRating;
			} else {
				rating = "NR";
			}
		}
		string getRating() {
			return rating;
		}
};

int main () {
	
	
	Movie first("Shawshank redemption","idk","PG-13");
	
	first.setRating("Dog");
	cout<<first.getRating();
	return 0;
}
