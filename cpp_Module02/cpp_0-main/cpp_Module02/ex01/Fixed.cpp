#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor is called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int i){
    //It converts i to the corresponding fixed-point value
    std::cout << "Int constructor is called" << std::endl;
    this->value = i << f_bits;
    std::cout << "as fixed is " << value << std::endl;
}

Fixed::Fixed(const float f){
    std::cout << "Float constructor is called" << std::endl;
    // value = roundf(f) / 256;
    this->value = (int)roundf(val * (1 << f_bits));
}

Fixed::Fixed(const Fixed& oldObj){
    std::cout << "Copb constructor called" << std::endl;
    // value = oldObj.value;
    *this = oldObj;
}

Fixed& Fixed::operator=(const Fixed &oldObj){
    std::cout << "Copb assignement operator called" << std::endl; 
    if (this == &oldObj)
        return *this;
    
    value = oldObj.value;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw){
    value = raw;
}

float Fixed::toFloat( void ) const{
    //converts the fixed-point value to a floating-point value
    return (float)value / (float)(1 << f_bits);
}

int Fixed::toInt( void ) const{
    //converts the fixed-point value to an integer value    
    return (value >> f_bits);
}

void print(const std::ostream& os) const{
    os << this->toFloat();
}

std::ostream& operator<<(const std::ostream& os, Fixed& obj){
    obj.print(os);
    return os;
}

// std::ofstream &operator<<(std::ofstream &os, Fixed f)
// {
//     os << f.toFloat();
//     return os;
// }
