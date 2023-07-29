//die.h
#include <iostream>

class DieList
{
public:
void roll();
int rolled_value() const;

private:
int roll_value;
int sides{6};

};
