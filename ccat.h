// =================================================================================
// File: ccat.h
// =================================================================================
// Programmer: Jennifer King
// Date: 4/3/2018
// Project: CPet
// Professor: Scott Edwards
// Class: CSCI 123F | TR 9:30am
// Description:
//      A header for CCat.
// =================================================================================
#include "cpet.h"
#ifndef CCAT_H
#define CCAT_H
#include <iostream>

using namespace std;

class CCat:public CPet
{
    public:
        CCat(const char *name):CPet(name){}
        virtual void Eat(){cout << "I'm eating cat food!\n"; ++m_numMeals;}
        virtual void Sleep(){cout << "Time for a long cat nap...\n"; ++m_numNaps;}
}
#endif

