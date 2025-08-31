#pragma once

#include "Bar.h"

#include <vector>
#include <string>


enum SecurityType {
    EQUITY,
    CRYPTO,
    OPTION,
    FUTURE
}


struct TimeSeries {
    SecurityType securityType;
    std::string symbol;
    std::string exchange;
    std::string currency;
    std::vector<Bar> bars;
};