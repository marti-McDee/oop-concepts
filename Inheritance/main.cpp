#include <iostream>
#include "Developer.h"
#include "Teacher.h"

int main(int argc, char** argv) {
	/*std::cout << argc << " args were passed to the program." << std::endl; 
	std::cout << "The first argument is: " << argv[0] << std::endl;*/

	Developer dev("Marti", "Initech", 26, "C++");
	/*dev.FixBug();
	dev.AskForPromotion();*/

	Teacher teach("Jack", "Cool School", 37, "History");
	teach.PrepareLesson();
	teach.AskForPromotion();

	return 0;
}