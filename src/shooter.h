//
#include "roll.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Shooter
{
    public:
        Roll* throw_die;
        friend ostream& operator <<(ostream& os, const Shooter& shooter);
    private:
        vector<Roll*> rolls;
};