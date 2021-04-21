#include "NumberWithUnits.hpp"
#include <fstream>
#include <stdexcept>
using namespace std;
using namespace ariel;

namespace ariel
{
    void NumberWithUnits::read_units(ifstream& instructions)
    {
    }

    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits a)
    {
        NumberWithUnits blank(5, "km");
        return blank;
    }

    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits a)
    {
        NumberWithUnits blank(5, "km");
        return blank;
    }

    NumberWithUnits operator*(double a, NumberWithUnits b)
    {
        NumberWithUnits blank(5, "km");
        return blank;
    }
    
    NumberWithUnits operator*(NumberWithUnits a, double b)
    {
        NumberWithUnits blank(5, "km");
        return blank;
    }

    NumberWithUnits &NumberWithUnits::operator+=(const NumberWithUnits other)
    {
        return *this;
    }

    NumberWithUnits &NumberWithUnits::operator-=(const NumberWithUnits other)
    {
        return *this;
    }

    NumberWithUnits &NumberWithUnits::operator*=(const NumberWithUnits other)
    {
        return *this;
    }

    NumberWithUnits &NumberWithUnits::operator+()
    {
        return *this;
    }

    NumberWithUnits &NumberWithUnits::operator-()
    {
        return *this;
    }

    bool NumberWithUnits::operator<(const NumberWithUnits other) const
    {
        return false;
    }

    bool NumberWithUnits::operator<=(const NumberWithUnits other) const
    {
        return false;
    }
    bool NumberWithUnits::operator>(const NumberWithUnits other) const
    {
        return false;
    }
    bool NumberWithUnits::operator>=(const NumberWithUnits other) const
    {
        return false;
    }
    bool NumberWithUnits::operator==(const NumberWithUnits other) const
    {
        return false;
    }
    bool NumberWithUnits::operator!=(const NumberWithUnits other) const
    {
        return false;
    }

    NumberWithUnits &NumberWithUnits::operator++()
    {
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator--()
    {
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator++(int)
    {
        return *this;
    }
    NumberWithUnits &NumberWithUnits::operator--(int)
    {
        return *this;
    }

    ostream &operator<<(ostream &output, NumberWithUnits a)
    {
        return output;
    }
    istream &operator>>(istream &input, NumberWithUnits a)
    {
        return input;
    }

};