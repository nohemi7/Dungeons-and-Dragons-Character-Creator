#include "CharCreator.h"
#include <iostream>

using namespace std;

character::character() : r(Dwarf), c(Barbarian), b(Acolyte) {
    //equiptment vector is already empty
}

character::character(const character &other) {
    //needs implementation
}

character& character::operator=(const character &other)
{

}

// We can have a system where if we say if(race==dwarf, and give base stuff)
int main() {
    int num1, num2, num3, num4;
    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;
    num3 = rand() % 6 + 1;
    num4 = rand() % 6 + 1;
    cout << num1 << " " << num2 << " " << num3 << " "<< num4 << endl;
    return 0;
}