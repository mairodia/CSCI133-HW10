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
#ifndef CDOG_H
#define CDOG_H
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class CDog
{
    public:
        CDog(const char *name): m_numMeals(0), m_numNaps(0){strcpy(m_name, name);}
        void Eat(){cout << "I'm eating dog food!\n"; ++m_numMeals;}
        void DispState() const;
        void Sleep(){cout << "Time for a doggy nap...\n"; ++m_numNaps;}
        void SayName() const{cout << m_name << ": ";}

    private:
        int m_numMeals;
        int m_numNaps;
        char m_name[50];

};
#endif
