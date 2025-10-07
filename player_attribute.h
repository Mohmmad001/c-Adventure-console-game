#ifndef PLAYER_ATTRIBUTE_H
#define PLAYER_ATTRIBUTE_H

#include <string>

// Base class
class player_attribute {
public:
    // Constructor
    

    // Virtual RPG functions (can be overridden in subclasses)
    virtual void attack();
    virtual void defense();
    virtual void specialAttack();

    // Virtual destructor (important for inheritance!)
    virtual ~player_attribute() = default;

    // Setters
    void set_health(int health);
    void set_powerAttack(int power);
    void set_strength(int strength);
    void set_defend(int defend);

    // Getters
    int get_health();
    int get_powerAttack();
    int get_strength();
    int get_defend();

private:
    int health{10};
    int powerAttack{4};
    int strength{2};
    int defend{2};
};


#endif // PLAYER_ATTRIBUTE_H
