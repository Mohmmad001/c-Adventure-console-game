#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "player_attribute.h" // include player_attribute

class player {
public:
    // Constructor
    player(std::string name, char gender, int age, player_attribute* attribute);

    // Setters
    void set_name(const std::string name);
    void set_gender(char gender);
    void set_age(int age);

    // Getters
    std::string get_name();
    char get_gender();
    int get_age();

private:
    std::string name;
    char gender{'M'};
    int age{0};
    player_attribute* attribute; // pointer to attribute
};

#endif // PLAYER_H
