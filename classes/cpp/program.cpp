#include <program.hpp>
#include <stdlib.h>

using namespace std;


program::program(string name, string exec)
:m_name(name), m_exec(exec){}

bool program::call(){
    system(m_exec.c_str());
}