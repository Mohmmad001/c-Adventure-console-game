#include "player_attribute.h"

// constructor


// RPG functions
void player_attribute::attack() {}
void player_attribute::defense() {}
void player_attribute::specialAttack() {}

// setters
void player_attribute::set_health(int health) { this->health = health; }
void player_attribute::set_powerAttack(int powerAttack) { this->powerAttack = powerAttack; }
void player_attribute::set_strength(int strength) { this->strength = strength; }
void player_attribute::set_defend(int defend){ this->defend = defend;}

// getters
int player_attribute::get_health()  { return health; }
int player_attribute::get_powerAttack()  { return powerAttack; }
int player_attribute::get_strength()  { return strength; }
int player_attribute::get_defend(){ return defend;}