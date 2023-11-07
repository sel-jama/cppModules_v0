

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::Fixed(const float val)
{
	this->value = (int)roundf(val * (1 << f_bits));
}

Fixed::Fixed(const int val)
{
	this->value = (val << f_bits);
}

Fixed::~Fixed() {}

Fixed&	Fixed::operator=(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed& other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed	result;

	result.setRawBits((this->getRawBits() * other.getRawBits()) >> f_bits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	if (other.getRawBits() == 0)
		throw std::logic_error("Division bb zero!");
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	curr(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (curr);
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	curr(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (curr);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int		Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

int 	Fixed::toInt() const
{
	return (this->value >> f_bits);
}

float	Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << f_bits));
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a< b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a> b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a< b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a> b)
		return (a);
	return (b);
}

