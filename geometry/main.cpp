#include <iostream>
#include "circle.h"
using namespace std;
int main() {
	circle our_circle;
	our_circle.declare();
	our_circle.cases();

	int circle_distance_chord{ our_circle.get_distance_of_chord_from_circle() };
	int circle_diameter{ our_circle.get_diameter() };
	int circle_length_chord{ our_circle.get_len_chord() };
	int circle_answer{ our_circle.get_answer() };
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << "distance of chord from the centre of circle is: " << circle_distance_chord << std::endl;
	std::cout << "diameter of circle is: " << circle_diameter << std::endl;
	std::cout << "length  of the chord is: " << circle_length_chord << std::endl;
	std::cout << "by applying pythogerous theorem......" << std::endl;
	std::cout << "answer: " << circle_answer << std::endl;
	
	

	system("pause");

}