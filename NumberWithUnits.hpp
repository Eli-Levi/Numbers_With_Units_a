#pragma once
#include <iostream>
#include <string>
namespace ariel
{
    class NumberWithUnits
    {
        double numeric_value;
        std::string measure_type;

    public:
        NumberWithUnits(double number = 0, std::string measure = "yikes") : numeric_value(number), measure_type(measure){};
        static void read_units(std::ifstream& instructions);

        NumberWithUnits operator+(const NumberWithUnits a);
        NumberWithUnits operator-(const NumberWithUnits a);
        friend NumberWithUnits operator*(double a, NumberWithUnits b);
        friend NumberWithUnits operator*(NumberWithUnits a, double b);
        NumberWithUnits &operator+=(const NumberWithUnits other);
        NumberWithUnits &operator-=(const NumberWithUnits other);
        NumberWithUnits &operator*=(const NumberWithUnits other);
        NumberWithUnits &operator+(); // unary +
        NumberWithUnits &operator-(); // unary -

        bool operator<(const NumberWithUnits other) const;
        bool operator<=(const NumberWithUnits other) const;
        bool operator>(const NumberWithUnits other) const;
        bool operator>=(const NumberWithUnits other) const;
        bool operator==(const NumberWithUnits other) const;
        bool operator!=(const NumberWithUnits other) const;

        NumberWithUnits &operator++();    // i.e ++i
        NumberWithUnits &operator--();    // i.e --i
        NumberWithUnits &operator++(int); // i.e i++
        NumberWithUnits &operator--(int); // i.e i--

        friend std::ostream &operator<<(std::ostream &output, const NumberWithUnits a);
        friend std::istream &operator>>(std::istream &input, NumberWithUnits a);

        double get_numeric_value() { return this->numeric_value; }
        std::string get_measure_type() { return this->measure_type; }
    };
};