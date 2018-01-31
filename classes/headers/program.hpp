#ifndef PROGRAM_H
#define PROGRAM_H
#include <string>

using namespace std;

class program{
    public:
        program(string name, string exec);

        bool call();
        string getName(){return m_name;}
    private:
        string m_name, m_exec;
};

#endif