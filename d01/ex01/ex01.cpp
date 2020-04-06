#include <iostream>

/* when using "new", we use "delete" as well to avoid memory leaks */

void memoryLeak()
{
        std::string*        panthere = new std::string("String panthere");
        std::cout << *panthere << std::endl;
        delete panthere;
}

/*
// Ckeck for leaks with valgrind
int main()
{
    memoryLeak();
    return (0);
}
*/