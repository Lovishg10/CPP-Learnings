#include <cmath>
#include <constants.h>
#include <physics.h>

double calculateFallTime(double height){
    // time taken is root(2H/g)
    return static_cast<double>(std::sqrt(2*height/Const::gravity));
} 