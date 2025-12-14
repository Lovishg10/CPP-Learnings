#ifndef HEADER_CONST
#define HEADER_CONST

/* remove extern keyword and you will get error, with extern you are sayin to compiler don't worry there is definition  of these constants  somewhere else, but this won't work with constexp , you will have to initialise it during declaration*/
/*another important thing, if I donot use extern and initialise the constants, then each file that I include this header will get its own copy of these variables, 
which in large porjects may not be good, hence then also extern keyword is viable option*/
namespace Constants{
    extern const double gravity;
    extern const double coeff;
}

#endif

/*Since you are using C++17, you have a third, superior option called Inline Variables.

You can define the variable in the header, give it a value, and tell the compiler: "If you see this variable multiple times, just merge them all into one."*/

//inline const double gravity = 9.8;
