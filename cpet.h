// =================================================================================
// File: cpet.h
// =================================================================================
// Programmer: Jennifer King
// Date: 4/3/2018
// Project: CPet
// Professor: Scott Edwards
// Class: CSCI 123F | TR 9:30am
// Description:
//      A header for CPet.
// =================================================================================
const int LEN = 50;

class CPet
{
    public:
        CPet(const char *name): m_numMeals(0), m_numNaps(0) {strcpy(m_name, name);}
        virtual void Eat(){cout << "I'm eating generic pet food!\n"; ++m_numMeals;}
        virtual void DispState() const;
        virtual void Sleep(){cout << "CPet sleeping generically...\n"; ++m_numNaps;}
        void SayName() const {cout << m_name << ": ";}

    private:
        int m_numMeals;
        int m_numNaps;
        char m_name[LEN];
}
