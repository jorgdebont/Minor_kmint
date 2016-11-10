#include <string>
#include <iostream>

#define LOG(message) (std::cout << message << std::endl) 

#ifdef _WIN32
#define PATH_SEP "\\"
#else
#define PATH_SEP "/"
#endif

