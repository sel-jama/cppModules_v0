
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int f_bits = 8;

    public:
        Fixed ();
        Fixed (const int v);
        Fixed (const float v);
        Fixed(const Fixed& old);
        Fixed& operator=(const Fixed& old);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        Fixed& operator*(const Fixed& right);
};
std::ostream& operator<<(std::ostream& stream,const Fixed& obj);

#endif