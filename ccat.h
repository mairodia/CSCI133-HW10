// =================================================================================
// File: ccat.h
// =================================================================================
// Programmer: Jennifer King
// Date: 4/3/2018
// Project: CPet
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30am
// Description:
//      A header for CCat.
// =================================================================================
#ifndef CCAT_H
#define CCAT_H
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class CCat
{
    public:
        CCat(const char *name): m_numMeals(0), m_numNaps(0){strcpy(m_name, name);}
        void Eat(){cout << "I'm eating cat food!\n"; ++m_numMeals;}
        void DispState() const;
        void Sleep(){cout << "Time for a long cat nap...\n"; ++m_numNaps;}
        void SayName() const{cout << m_name << ": ";}

    private:
        int m_numMeals;
        int m_numNaps;
        char m_name[50];
};
#endif

