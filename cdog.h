// =================================================================================
// File: cdog.h
// =================================================================================
// Programmer: Jennifer King
// Date: 4/3/2018
// Project: CPet
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30am
// Description:
//      A header for CDog.
// =================================================================================
#include "cpet.h"
#ifndef CDOG_H
#define CDOG_H
#include <iostream>

using namespace std;

class CDog:public CPet
{
    public:
        CDog(const char *name):CPet(name){}
        virtual void Eat(){cout << "I'm eating dog food!\n"; ++m_numMeals;}
        virtual void Sleep(){cout << "Time for a doggy nap...\n"; ++m_numNaps;}

}
#endif
