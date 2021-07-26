#ifndef CHARCREATOR_H
#define CHARCREATOR_H

#include <cstdlib>
#include <string>
#include <vector>

// used for random number generator
enum race{
    Dwarf,
    Elf,
    Halfling,
    Human,
    Dragonborn,
    Gnome,
    HalfElf,
    HalfOrc,
    Tiefling
};
enum charClass{
    Barbarian,
    Bard,
    Cleric,
    Druid,
    Fighter,
    Monk,
    Paladin,
    Ranger,
    Rogue,
    Sorcerer,
    Warlock,
    Wizard,
}; 
enum Background{
    Acolyte,
    Charlatan,
    Criminal,
    Entertainer,
    GuildArtisan,
    Hermit,
    Noble,
    Outlander,
    Sage,
    Sailor,
    Soldier,
    Urchin,
};
class character{
    public:
        character(); // constructor;
        character(const character &other); // copy constructor
        character &operator=(const character &other); // copy assignment
    private:
        race r;
        charClass c;
        Background b;
        std::vector<std::string> equiptment;

};
#endif