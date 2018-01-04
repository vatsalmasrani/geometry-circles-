#pragma once
#include "theorems.h"
#include "formulas.h"
#include <iostream>
#include <string.h>
using namespace std;
class circle {
private:
	int distance_of_chord_from_circle{};
	int len_chord{};
	int diameter{};
	int radius{};

public:
	int answer{};
	//for using this function in other classes
	circle() : distance_of_chord_from_circle{0},len_chord{0},diameter{0}
	{ }
		circle(int initial_distance_of_chord_from_circle,int initial_len_chord,int initial_diameter,int initial_radius)
			: distance_of_chord_from_circle{ initial_distance_of_chord_from_circle }, len_chord{ initial_len_chord }, diameter{ initial_diameter },radius{initial_radius}
		{ }
	
		void declare() {
			int new_distance_of_chord_from_circle;
				int new_len_chord;
				int new_diameter;
				int new_radius;
			
			cout << "enter distance of chord from the centre of circle: ";
			cin >> new_distance_of_chord_from_circle;
			cout << "enter the length of the chord: ";
			cin >> new_len_chord;
			cout << "enter diameter of the circle: ";
			cin >> new_diameter;
			cout << "enter radius of the circle: ";
			cin >> new_radius;
			distance_of_chord_from_circle = new_distance_of_chord_from_circle;
			len_chord = new_len_chord;
			diameter = new_diameter;
			radius = new_radius;
	

	}
		
		int get_distance_of_chord_from_circle() { return distance_of_chord_from_circle; }
		int get_len_chord() { return len_chord; }
		int get_diameter() { return diameter; }
		int get_radius() { return radius; }
		int get_answer() { return answer; }
		

		void cases(){
			if (diameter == 0) {
				int length_Of_chord = len_chord / 2;
				int holder = hypotenuse(distance_of_chord_from_circle, length_Of_chord);
				
				answer = holder * 2; 											
																				
}
		if (distance_of_chord_from_circle == 0 || radius) {
			int new_place_holder2 = diameter/ 2;							
			int new_place_holder = len_chord / 2;
			answer = hypotenuse2(new_place_holder, new_place_holder2);
			
			}
		if (len_chord == 0) {
			
			int my_plac = hypotenuse2(diameter, distance_of_chord_from_circle);
			answer = my_plac * 2;
			
		}
		
		
		

	}
		

		
	 


};
