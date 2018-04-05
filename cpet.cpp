// =================================================================================
// File: cpet.cpp
// =================================================================================
// Programmer: Jennifer King
// Date: 4/3/2018
// Project: CPet
// Professor: Scott Edwards
// Class: CSCI 123F | TR 9:30am
// Description:
//  The class file for CPet.
// =================================================================================
#include "cpet.h"
#include "cdog.h"
#include "ccat.h"

void CPet::DispState() const
{
    cout << "So far, I have had " << m_numMeals << ((1 == m_numMeals)? " meal":" meals");
    cout << "and " << m_numNaps << ((1 == m_numNaps)? " nap.":" naps." << endl;
}

void CCat::DispState() const
{
    cout << "So far, I have had " << m_numMeals << ((1 == m_numMeals)? " meal":" meals");
    cout << "and " << m_numNaps << ((1 == m_numNaps)? " nap.":" naps." << endl;
}

void CDog::DispState() const
{
    cout << "So far, I have had " << m_numMeals << ((1 == m_numMeals)? " meal":" meals");
    cout << "and " << m_numNaps << ((1 == m_numNaps)? " nap.":" naps." << endl;
}

