#ifndef HEADER_CONST
#define HEADER_CONST

/* remove extern keyword and you will get error, with extern you are sayin to compiler don't worry there is definition  of these constants  somewhere else, but this won't work with constexp , you will have to initialise it during declaration*/

namespace Constants{
    extern const double gravity;
    extern const double coeff;
}

#endif

/*Since you are using C++17, you have a third, superior option called Inline Variables.

You can define the variable in the header, give it a value, and tell the compiler: "If you see this variable multiple times, just merge them all into one."*/

//inline const double gravity = 9.8;