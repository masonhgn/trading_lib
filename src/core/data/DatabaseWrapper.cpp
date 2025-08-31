#include "modules/DatabaseWrapper.h"
#include <iostream>


DatabaseWrapper::DatabaseWrapper() {
    connected = false;
}


void DatabaseWrapper::connect() {
    connected = true;
    std::cout << "database connected!" << std::endl;
}




