#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    class NumberWithUnits
    {
        double numeric_value;
        string measure_type;

    public:
        NumberWithUnits(double number = 0, string measure = "yikes") : numeric_value(number), measure_type(measure){};
        // do i need a deconstructor?
        static void read_units(ifstream &instructions);

        NumberWithUnits &operator+(const NumberWithUnits a);
        NumberWithUnits &operator-(const NumberWithUnits a);
        friend NumberWithUnits operator*(double a, NumberWithUnits b);
        friend NumberWithUnits operator*(NumberWithUnits a, double b);
        NumberWithUnits &operator+=(const NumberWithUnits other);
        NumberWithUnits &operator-=(const NumberWithUnits other);
        NumberWithUnits &operator*=(const NumberWithUnits other);
        NumberWithUnits &operator+(); // unary +
        NumberWithUnits &operator-(); // unary -

        // should these 6 be const functions?
        friend bool operator<(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator<=(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator>(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator>=(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator==(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator!=(const NumberWithUnits a, const NumberWithUnits b);

        NumberWithUnits &operator++();    // i.e ++i
        NumberWithUnits &operator--();    // i.e --i
        NumberWithUnits &operator++(int); // i.e i++
        NumberWithUnits &operator--(int); // i.e i--

        friend ostream &operator<<(ostream &output, const NumberWithUnits a);
        friend istream &operator>>(istream &input, NumberWithUnits a);

        double get_numeric_value() { return this->numeric_value; }
        string get_measure_type() { return this->measure_type; }
    };
};