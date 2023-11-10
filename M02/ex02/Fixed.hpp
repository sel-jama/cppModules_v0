
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

        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        Fixed operator*(const Fixed& operand) const;
        Fixed operator/(const Fixed& operand) const;
        Fixed operator+(const Fixed& operand) const;
        Fixed operator-(const Fixed& operand) const;

        Fixed& operator++();  //pre-increment 
        Fixed operator++(int);  //post-increment
        Fixed& operator--();  //pre-decrement
        Fixed operator--(int); //post-decrement

        static Fixed& max(Fixed & a, Fixed & b);
        static const Fixed& max(const Fixed& a, const Fixed& b);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream& stream,const Fixed& obj);

#endif