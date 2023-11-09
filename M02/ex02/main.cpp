#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    //my tests
    std::cout << std::endl;
    Fixed const d(Fixed(5.05f) + Fixed(2));
    Fixed const e(Fixed(5.05f) - Fixed(2));
    Fixed const f(Fixed(5.05f) / Fixed(2));

    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    Fixed c (42.42f);
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << Fixed::min(a , b) << std::endl;
    std::cout << Fixed::max(a, c) << std::endl;
    std::cout << Fixed::min(a, c) << std::endl;

    return 0;
}