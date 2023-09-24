#ifndef _BACKTRACE_HPP_
#define _BACKTRACE_HPP_
#include <iostream>
#include <string>
#include <vector>


class Back{
    private:
        std::string name;
    public:
        Back(std::string name);
        static void exit(void);
        static void Print_Bt(void);
};


#endif
