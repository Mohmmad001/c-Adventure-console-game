#include "player.h"

// constructor 
player::player(std::string name, char gender, int age, player_attribute* attribute)
    : name(name), gender(gender), age(age), attribute(attribute) {}

// setters
void player::set_name(std::string name) { this->name = name; }
void player::set_gender(char gender) { this->gender = gender; }
void player::set_age(int age) { this->age = age; }

// getters 
std::string player::get_name() { return name; }
char player::get_gender() { return gender; }
int player::get_age() { return age; }
