#include "doctest.h"
#include <iostream>
#include "NumberWithUnits.hpp"
using namespace ariel;
using namespace std;

TEST_CASE("good case: + working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    NumberWithUnits ans = a.get_numeric_value() + b.get_numeric_value();
    CHECK(ans.get_numeric_value() == 5);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    NumberWithUnits ans1 = c.get_numeric_value() + d.get_numeric_value();
    CHECK(ans1.get_numeric_value() == 9);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(5, "kg");
    NumberWithUnits ans2 = e.get_numeric_value() + f.get_numeric_value();
    CHECK(ans2.get_numeric_value() == 10);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    NumberWithUnits ans3 = g.get_numeric_value() + h.get_numeric_value();
    CHECK(ans3.get_numeric_value() == 10);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    NumberWithUnits ans4 = i.get_numeric_value() + j.get_numeric_value();
    CHECK(ans4.get_numeric_value() == 10);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    NumberWithUnits ans5 = k.get_numeric_value() + l.get_numeric_value();
    CHECK(ans5.get_numeric_value() == 10);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(5, "min");
    NumberWithUnits ans6 = m.get_numeric_value() + n.get_numeric_value();
    CHECK(ans6.get_numeric_value() == 10);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(5, "USD");
    NumberWithUnits ans7 = o.get_numeric_value() + p.get_numeric_value();
    CHECK(ans6.get_numeric_value() == 10);
}

TEST_CASE("good case: - working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    NumberWithUnits ans = a.get_numeric_value() - b.get_numeric_value();
    CHECK(ans.get_numeric_value() == 1);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    NumberWithUnits ans1 = c.get_numeric_value() - d.get_numeric_value();
    CHECK(ans1.get_numeric_value() == 1);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    NumberWithUnits ans2 = e.get_numeric_value() - f.get_numeric_value();
    CHECK(ans2.get_numeric_value() == 1);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    NumberWithUnits ans3 = g.get_numeric_value() - h.get_numeric_value();
    CHECK(ans3.get_numeric_value() == 0);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    NumberWithUnits ans4 = i.get_numeric_value() - j.get_numeric_value();
    CHECK(ans4.get_numeric_value() == 0);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    NumberWithUnits ans5 = k.get_numeric_value() - l.get_numeric_value();
    CHECK(ans5.get_numeric_value() == 0);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    NumberWithUnits ans6 = m.get_numeric_value() - n.get_numeric_value();
    CHECK(ans6.get_numeric_value() == 3);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    NumberWithUnits ans7 = o.get_numeric_value() - p.get_numeric_value();
    CHECK(ans6.get_numeric_value() == 3);
}

TEST_CASE("good case: * working as intended with similar measure types")
{
    // testing double * NumberWithUnit
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    NumberWithUnits ans = a.get_numeric_value() * b;
    CHECK(ans.get_numeric_value() == 6);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    NumberWithUnits ans1 = c.get_numeric_value() * d;
    CHECK(ans1.get_numeric_value() == 20);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    NumberWithUnits ans2 = e.get_numeric_value() * f;
    CHECK(ans2.get_numeric_value() == 20);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    NumberWithUnits ans3 = g.get_numeric_value() * h;
    CHECK(ans3.get_numeric_value() == 25);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    NumberWithUnits ans4 = i.get_numeric_value() * j;
    CHECK(ans4.get_numeric_value() == 25);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    NumberWithUnits ans5 = k.get_numeric_value() * l;
    CHECK(ans5.get_numeric_value() == 25);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    NumberWithUnits ans6 = m.get_numeric_value() * n;
    CHECK(ans6.get_numeric_value() == 10);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    NumberWithUnits ans7 = o.get_numeric_value() * p;
    CHECK(ans6.get_numeric_value() == 10);

    // testing NumberWithUnit * double
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    NumberWithUnits ans = a * b.get_numeric_value();
    CHECK(ans.get_numeric_value() == 6);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    NumberWithUnits ans1 = c * d.get_numeric_value();
    CHECK(ans1.get_numeric_value() == 20);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    NumberWithUnits ans2 = e * f.get_numeric_value();
    CHECK(ans2.get_numeric_value() == 20);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    NumberWithUnits ans3 = g * h.get_numeric_value();
    CHECK(ans3.get_numeric_value() == 25);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    NumberWithUnits ans4 = i * j.get_numeric_value();
    CHECK(ans4.get_numeric_value() == 25);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    NumberWithUnits ans5 = k * l.get_numeric_value();
    CHECK(ans5.get_numeric_value() == 25);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    NumberWithUnits ans6 = m * n.get_numeric_value();
    CHECK(ans6.get_numeric_value() == 10);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    NumberWithUnits ans7 = o * p.get_numeric_value();
    CHECK(ans6.get_numeric_value() == 10);
}

TEST_CASE("good case: += working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    a += b;
    CHECK(a.get_numeric_value() == 5);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    c += d;
    CHECK(c.get_numeric_value() == 9);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    e += f;
    CHECK(e.get_numeric_value() == 9);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    g += h;
    CHECK(g.get_numeric_value() == 10);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    i += j;
    CHECK(i.get_numeric_value() == 10);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    k += l;
    CHECK(k.get_numeric_value() == 10);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    m += n;
    CHECK(m.get_numeric_value() == 7);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    o += p;
    CHECK(o.get_numeric_value() == 7);
}

TEST_CASE("good case: -= working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    a -= b;
    CHECK(a.get_numeric_value() == 1);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    c -= d;
    CHECK(c.get_numeric_value() == 1);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    e -= f;
    CHECK(e.get_numeric_value() == 1);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    g -= h;
    CHECK(g.get_numeric_value() == 0);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    i -= j;
    CHECK(i.get_numeric_value() == 0);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    k -= l;
    CHECK(k.get_numeric_value() == 0);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    m -= n;
    CHECK(m.get_numeric_value() == 3);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    o -= p;
    CHECK(o.get_numeric_value() == 3);
}

TEST_CASE("good case: *= working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    a *= b;
    CHECK(a.get_numeric_value() == 6);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    c *= d;
    CHECK(c.get_numeric_value() == 20);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    e *= f;
    CHECK(e.get_numeric_value() == 20);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    g *= h;
    CHECK(g.get_numeric_value() == 25);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(5, "hour");
    i *= j;
    CHECK(i.get_numeric_value() == 25);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(5, "hour");
    k *= l;
    CHECK(k.get_numeric_value() == 25);
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    m *= n;
    CHECK(m.get_numeric_value() == 10);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    o *= p;
    CHECK(o.get_numeric_value() == 10);
}

TEST_CASE("good case: unary + working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    +a;
    CHECK(a.get_numeric_value() == 3);
    NumberWithUnits b(5, "m");
    +b;
    CHECK(b.get_numeric_value() == 5);
    NumberWithUnits c(5, "kg");
    +c;
    CHECK(c.get_numeric_value() == 5);
    NumberWithUnits d(5, "ton");
    +d;
    CHECK(d.get_numeric_value() == 5);
    NumberWithUnits e(5, "hour");
    +e;
    CHECK(e.get_numeric_value() == 5);
    NumberWithUnits f(5, "hour");
    +f;
    CHECK(f.get_numeric_value() == 5);
    NumberWithUnits g(5, "min");
    +g;
    CHECK(g.get_numeric_value() == 5);
    NumberWithUnits h(-5, "USD");
    +h;
    CHECK(h.get_numeric_value() == -5);
    NumberWithUnits i(0, "USD");
    +i;
    CHECK(i.get_numeric_value() == 0);
}

TEST_CASE("good case: unary - working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    -a;
    CHECK(a.get_numeric_value() == -3);
    NumberWithUnits b(-5, "m");
    -b;
    CHECK(b.get_numeric_value() == 5);
    NumberWithUnits c(5, "kg");
    -c;
    CHECK(c.get_numeric_value() == -5);
    NumberWithUnits d(-50, "ton");
    -d;
    CHECK(d.get_numeric_value() == 50);
    NumberWithUnits e(50, "hour");
    -e;
    CHECK(e.get_numeric_value() == -50);
    NumberWithUnits f(0, "hour");
    -f;
    CHECK(f.get_numeric_value() == 0);
    NumberWithUnits g(10, "min");
    -g;
    CHECK(g.get_numeric_value() == -10);
    NumberWithUnits h(-15, "USD");
    -h;
    CHECK(h.get_numeric_value() == 15);
}

TEST_CASE("good case: < working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    CHECK(b < a);
    NumberWithUnits c(10, "m");
    NumberWithUnits d(4, "m");
    CHECK(d < c);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    CHECK_FALSE(e < f);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    CHECK_FALSE(g < h);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(2, "hour");
    CHECK(j < i);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(-5, "hour");
    CHECK(l < k);
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK(n < m);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0, "USD");
    CHECK_FALSE(o < p);
}

TEST_CASE("good case: <= working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    CHECK(b <= a);
    NumberWithUnits c(5, "m");
    NumberWithUnits d(4, "m");
    CHECK(d <= c);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(4, "kg");
    CHECK_FALSE(e <= f);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    CHECK(g <= h);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(2, "hour");
    CHECK(j <= i);
    NumberWithUnits k(0, "hour");
    NumberWithUnits l(0, "hour");
    CHECK(l <= k);
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK(n <= m);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0, "USD");
    CHECK_FALSE(o <= p);
}

TEST_CASE("good case: > working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    CHECK_FALSE(b > a);
    NumberWithUnits c(10, "m");
    NumberWithUnits d(4, "m");
    CHECK(c > d);
    NumberWithUnits e(5, "kg");
    NumberWithUnits f(0, "kg");
    CHECK(e > f);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    CHECK_FALSE(g > h);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(2, "hour");
    CHECK(i > j);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(-5, "hour");
    CHECK(k > l);
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK(m > n);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0, "USD");
    CHECK_FALSE(p > o);
}

TEST_CASE("good case: >= working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    CHECK_FALSE(b >= a);
    NumberWithUnits c(10, "m");
    NumberWithUnits d(4, "m");
    CHECK(c >= d);
    NumberWithUnits e(0, "kg");
    NumberWithUnits f(0, "kg");
    CHECK(e >= f);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    CHECK(g >= h);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(2, "hour");
    CHECK(i >= j);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(-5, "hour");
    CHECK(k >= l);
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK(m >= n);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0, "USD");
    CHECK_FALSE(p >= o);
}

TEST_CASE("good case: == working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    CHECK_FALSE(b == a);
    NumberWithUnits c(10, "m");
    NumberWithUnits d(4, "m");
    CHECK_FALSE(c == d);
    NumberWithUnits e(0, "kg");
    NumberWithUnits f(0, "kg");
    CHECK(e == f);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    CHECK(g == h);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(2, "hour");
    CHECK_FALSE(i == j);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(-5, "hour");
    CHECK_FALSE(k == l);
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK_FALSE(m == n);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0, "USD");
    CHECK_FALSE(p == o);
}

TEST_CASE("good case: != working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    NumberWithUnits b(2, "km");
    CHECK(b != a);
    NumberWithUnits c(10, "m");
    NumberWithUnits d(4, "m");
    CHECK(c != d);
    NumberWithUnits e(0, "kg");
    NumberWithUnits f(0, "kg");
    CHECK_FALSE(e != f);
    NumberWithUnits g(5, "ton");
    NumberWithUnits h(5, "ton");
    CHECK_FALSE(g != h);
    NumberWithUnits i(5, "hour");
    NumberWithUnits j(2, "hour");
    CHECK(i != j);
    NumberWithUnits k(5, "hour");
    NumberWithUnits l(-5, "hour");
    CHECK(k != l);
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK(m != n);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0, "USD");
    CHECK(p != o);
}

TEST_CASE("good case: prefix ++ working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    ++a;
    CHECK(a.get_numeric_value() == 4);
    NumberWithUnits b(5, "m");
    ++b;
    CHECK(b.get_numeric_value() == 6);
    NumberWithUnits c(-2, "kg");
    ++c;
    CHECK(c.get_numeric_value() == -1);
    NumberWithUnits d(15, "ton");
    ++d;
    CHECK(d.get_numeric_value() == 16);
    NumberWithUnits e(9, "hour");
    ++e;
    CHECK(e.get_numeric_value() == 10);
    NumberWithUnits f(1, "hour");
    ++f;
    CHECK(f.get_numeric_value() == 2);
    NumberWithUnits g(998, "min");
    ++g;
    CHECK(g.get_numeric_value() == 999);
    NumberWithUnits h(1.5, "USD");
    ++h;
    CHECK(h.get_numeric_value() == 2.5);
}

TEST_CASE("good case: prefix -- working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    --a;
    CHECK(a.get_numeric_value() == 2);
    NumberWithUnits b(5, "m");
    --b;
    CHECK(b.get_numeric_value() == 4);
    NumberWithUnits c(2, "kg");
    --c;
    CHECK(c.get_numeric_value() == 1);
    NumberWithUnits d(15, "ton");
    --d;
    CHECK(d.get_numeric_value() == 14);
    NumberWithUnits e(9, "hour");
    --e;
    CHECK(e.get_numeric_value() == 8);
    NumberWithUnits f(1, "hour");
    --f;
    CHECK(f.get_numeric_value() == 0);
    NumberWithUnits g(59, "min");
    --g;
    CHECK(g.get_numeric_value() == 58);
    NumberWithUnits h(1.5, "USD");
    --h;
    CHECK(h.get_numeric_value() == 0.5);
}

TEST_CASE("good case: postfix ++ working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    a++;
    CHECK(a.get_numeric_value() == 4);
    NumberWithUnits b(5, "m");
    b++;
    CHECK(b.get_numeric_value() == 6);
    NumberWithUnits c(-2, "kg");
    c++;
    CHECK(c.get_numeric_value() == -1);
    NumberWithUnits d(15, "ton");
    d++;
    CHECK(d.get_numeric_value() == 16);
    NumberWithUnits e(9, "hour");
    e++;
    CHECK(e.get_numeric_value() == 10);
    NumberWithUnits f(1, "hour");
    f++;
    CHECK(f.get_numeric_value() == 2);
    NumberWithUnits g(998, "min");
    g++;
    CHECK(g.get_numeric_value() == 999);
    NumberWithUnits h(1.5, "USD");
    h++;
    CHECK(h.get_numeric_value() == 2.5);
}

TEST_CASE("good case: postfix -- working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    a--;
    CHECK(a.get_numeric_value() == 2);
    NumberWithUnits b(5, "m");
    b--;
    CHECK(b.get_numeric_value() == 4);
    NumberWithUnits c(2, "kg");
    c--;
    CHECK(c.get_numeric_value() == 1);
    NumberWithUnits d(15, "ton");
    d--;
    CHECK(d.get_numeric_value() == 14);
    NumberWithUnits e(9, "hour");
    e--;
    CHECK(e.get_numeric_value() == 8);
    NumberWithUnits f(1, "hour");
    f--;
    CHECK(f.get_numeric_value() == 0);
    NumberWithUnits g(59, "min");
    g--;
    CHECK(g.get_numeric_value() == 58);
    NumberWithUnits h(1.5, "USD");
    h--;
    CHECK(h.get_numeric_value() == 0.5);
}

TEST_CASE("good case: output << working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    a--;
    CHECK(a.get_numeric_value() == 2);
    NumberWithUnits b(5, "m");
    b--;
    CHECK(b.get_numeric_value() == 4);
    NumberWithUnits c(2, "kg");
    c--;
    CHECK(c.get_numeric_value() == 1);
    NumberWithUnits d(15, "ton");
    d--;
    CHECK(d.get_numeric_value() == 14);
    NumberWithUnits e(9, "hour");
    e--;
    CHECK(e.get_numeric_value() == 8);
    NumberWithUnits f(1, "hour");
    f--;
    CHECK(f.get_numeric_value() == 0);
    NumberWithUnits g(59, "min");
    g--;
    CHECK(g.get_numeric_value() == 58);
    NumberWithUnits h(1.5, "USD");
    h--;
    CHECK(h.get_numeric_value() == 0.5);
}

TEST_CASE("good case: input >> working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    a--;
    CHECK(a.get_numeric_value() == 2);
    NumberWithUnits b(5, "m");
    b--;
    CHECK(b.get_numeric_value() == 4);
    NumberWithUnits c(2, "kg");
    c--;
    CHECK(c.get_numeric_value() == 1);
    NumberWithUnits d(15, "ton");
    d--;
    CHECK(d.get_numeric_value() == 14);
    NumberWithUnits e(9, "hour");
    e--;
    CHECK(e.get_numeric_value() == 8);
    NumberWithUnits f(1, "hour");
    f--;
    CHECK(f.get_numeric_value() == 0);
    NumberWithUnits g(59, "min");
    g--;
    CHECK(g.get_numeric_value() == 58);
    NumberWithUnits h(1.5, "USD");
    h--;
    CHECK(h.get_numeric_value() == 0.5);
}

// how to i add += to the tests?
TEST_CASE("bad case: adding incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km + kg, logic_error);
    CHECK_THROWS(km + ton, logic_error);
    CHECK_THROWS(km + hour, logic_error);
    CHECK_THROWS(km + minute, logic_error);
    CHECK_THROWS(km + usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter + kg, logic_error);
    CHECK_THROWS(meter + ton, logic_error);
    CHECK_THROWS(meter + hour, logic_error);
    CHECK_THROWS(meter + minute, logic_error);
    CHECK_THROWS(meter + usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg + km, logic_error);
    CHECK_THROWS(kg + meter, logic_error);
    CHECK_THROWS(kg + hour, logic_error);
    CHECK_THROWS(kg + minute, logic_error);
    CHECK_THROWS(kg + usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton + km, logic_error);
    CHECK_THROWS(ton + meter, logic_error);
    CHECK_THROWS(ton + hour, logic_error);
    CHECK_THROWS(ton + minute, logic_error);
    CHECK_THROWS(ton + usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour + km, logic_error);
    CHECK_THROWS(hour + meter, logic_error);
    CHECK_THROWS(hour + kg, logic_error);
    CHECK_THROWS(hour + ton, logic_error);
    CHECK_THROWS(hour + usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute + km, logic_error);
    CHECK_THROWS(minute + meter, logic_error);
    CHECK_THROWS(minute + kg, logic_error);
    CHECK_THROWS(minute + ton, logic_error);
    CHECK_THROWS(minute + usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd + km, logic_error);
    CHECK_THROWS(usd + meter, logic_error);
    CHECK_THROWS(usd + kg, logic_error);
    CHECK_THROWS(usd + ton, logic_error);
    CHECK_THROWS(usd + hour, logic_error);
    CHECK_THROWS(usd + minute, logic_error);
}

// how to i add -= to the tests?
TEST_CASE("bad case: subtacting incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km - kg, logic_error);
    CHECK_THROWS(km - ton, logic_error);
    CHECK_THROWS(km - hour, logic_error);
    CHECK_THROWS(km - minute, logic_error);
    CHECK_THROWS(km - usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter - kg, logic_error);
    CHECK_THROWS(meter - ton, logic_error);
    CHECK_THROWS(meter - hour, logic_error);
    CHECK_THROWS(meter - minute, logic_error);
    CHECK_THROWS(meter - usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg - km, logic_error);
    CHECK_THROWS(kg - meter, logic_error);
    CHECK_THROWS(kg - hour, logic_error);
    CHECK_THROWS(kg - minute, logic_error);
    CHECK_THROWS(kg - usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton - km, logic_error);
    CHECK_THROWS(ton - meter, logic_error);
    CHECK_THROWS(ton - hour, logic_error);
    CHECK_THROWS(ton - minute, logic_error);
    CHECK_THROWS(ton - usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour - km, logic_error);
    CHECK_THROWS(hour - meter, logic_error);
    CHECK_THROWS(hour - kg, logic_error);
    CHECK_THROWS(hour - ton, logic_error);
    CHECK_THROWS(hour - usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute - km, logic_error);
    CHECK_THROWS(minute - meter, logic_error);
    CHECK_THROWS(minute - kg, logic_error);
    CHECK_THROWS(minute - ton, logic_error);
    CHECK_THROWS(minute - usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd - km, logic_error);
    CHECK_THROWS(usd - meter, logic_error);
    CHECK_THROWS(usd - kg, logic_error);
    CHECK_THROWS(usd - ton, logic_error);
    CHECK_THROWS(usd - hour, logic_error);
    CHECK_THROWS(usd - minute, logic_error);
}

// how to i add *= to the tests?
TEST_CASE("bad case: multiplying incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km * kg, logic_error);
    CHECK_THROWS(km * ton, logic_error);
    CHECK_THROWS(km * hour, logic_error);
    CHECK_THROWS(km * minute, logic_error);
    CHECK_THROWS(km * usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter * kg, logic_error);
    CHECK_THROWS(meter * ton, logic_error);
    CHECK_THROWS(meter * hour, logic_error);
    CHECK_THROWS(meter * minute, logic_error);
    CHECK_THROWS(meter * usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg * km, logic_error);
    CHECK_THROWS(kg * meter, logic_error);
    CHECK_THROWS(kg * hour, logic_error);
    CHECK_THROWS(kg * minute, logic_error);
    CHECK_THROWS(kg * usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton * km, logic_error);
    CHECK_THROWS(ton * meter, logic_error);
    CHECK_THROWS(ton * hour, logic_error);
    CHECK_THROWS(ton * minute, logic_error);
    CHECK_THROWS(ton * usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour * km, logic_error);
    CHECK_THROWS(hour * meter, logic_error);
    CHECK_THROWS(hour * kg, logic_error);
    CHECK_THROWS(hour * ton, logic_error);
    CHECK_THROWS(hour * usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute * km, logic_error);
    CHECK_THROWS(minute * meter, logic_error);
    CHECK_THROWS(minute * kg, logic_error);
    CHECK_THROWS(minute * ton, logic_error);
    CHECK_THROWS(minute * usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd * km, logic_error);
    CHECK_THROWS(usd * meter, logic_error);
    CHECK_THROWS(usd * kg, logic_error);
    CHECK_THROWS(usd * ton, logic_error);
    CHECK_THROWS(usd * hour, logic_error);
    CHECK_THROWS(usd * minute, logic_error);
}

TEST_CASE("bad case: invalid numeric values for given units")
{
    NumberWithUnits km(-1, "km");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits meter(-2, "m");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits kg(-10, "kg");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits ton(5, "ton");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits negtive_hour(-25, "hour");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits non_existing_hour(25, "hour");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits negtive_minute(-50, "min");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits non_existing_minute(70, "min");
    CHECK_THROWS(invalid_argument);
    NumberWithUnits usd(-20, "USD");
    CHECK_THROWS(invalid_argument);
}

TEST_CASE("bad case: < incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km < kg, logic_error);
    CHECK_THROWS(km < ton, logic_error);
    CHECK_THROWS(km < hour, logic_error);
    CHECK_THROWS(km < minute, logic_error);
    CHECK_THROWS(km < usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter < kg, logic_error);
    CHECK_THROWS(meter < ton, logic_error);
    CHECK_THROWS(meter < hour, logic_error);
    CHECK_THROWS(meter < minute, logic_error);
    CHECK_THROWS(meter < usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg < km, logic_error);
    CHECK_THROWS(kg < meter, logic_error);
    CHECK_THROWS(kg < hour, logic_error);
    CHECK_THROWS(kg < minute, logic_error);
    CHECK_THROWS(kg < usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton < km, logic_error);
    CHECK_THROWS(ton < meter, logic_error);
    CHECK_THROWS(ton < hour, logic_error);
    CHECK_THROWS(ton < minute, logic_error);
    CHECK_THROWS(ton < usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour < km, logic_error);
    CHECK_THROWS(hour < meter, logic_error);
    CHECK_THROWS(hour < kg, logic_error);
    CHECK_THROWS(hour < ton, logic_error);
    CHECK_THROWS(hour < usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute < km, logic_error);
    CHECK_THROWS(minute < meter, logic_error);
    CHECK_THROWS(minute < kg, logic_error);
    CHECK_THROWS(minute < ton, logic_error);
    CHECK_THROWS(minute < usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd < km, logic_error);
    CHECK_THROWS(usd < meter, logic_error);
    CHECK_THROWS(usd < kg, logic_error);
    CHECK_THROWS(usd < ton, logic_error);
    CHECK_THROWS(usd < hour, logic_error);
    CHECK_THROWS(usd < minute, logic_error);
}

TEST_CASE("bad case: <= incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km <= kg, logic_error);
    CHECK_THROWS(km <= ton, logic_error);
    CHECK_THROWS(km <= hour, logic_error);
    CHECK_THROWS(km <= minute, logic_error);
    CHECK_THROWS(km <= usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter <= kg, logic_error);
    CHECK_THROWS(meter <= ton, logic_error);
    CHECK_THROWS(meter <= hour, logic_error);
    CHECK_THROWS(meter <= minute, logic_error);
    CHECK_THROWS(meter <= usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg <= km, logic_error);
    CHECK_THROWS(kg <= meter, logic_error);
    CHECK_THROWS(kg <= hour, logic_error);
    CHECK_THROWS(kg <= minute, logic_error);
    CHECK_THROWS(kg <= usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton <= km, logic_error);
    CHECK_THROWS(ton <= meter, logic_error);
    CHECK_THROWS(ton <= hour, logic_error);
    CHECK_THROWS(ton <= minute, logic_error);
    CHECK_THROWS(ton <= usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour <= km, logic_error);
    CHECK_THROWS(hour <= meter, logic_error);
    CHECK_THROWS(hour <= kg, logic_error);
    CHECK_THROWS(hour <= ton, logic_error);
    CHECK_THROWS(hour <= usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute <= km, logic_error);
    CHECK_THROWS(minute <= meter, logic_error);
    CHECK_THROWS(minute <= kg, logic_error);
    CHECK_THROWS(minute <= ton, logic_error);
    CHECK_THROWS(minute <= usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd <= km, logic_error);
    CHECK_THROWS(usd <= meter, logic_error);
    CHECK_THROWS(usd <= kg, logic_error);
    CHECK_THROWS(usd <= ton, logic_error);
    CHECK_THROWS(usd <= hour, logic_error);
    CHECK_THROWS(usd <= minute, logic_error);
}

TEST_CASE("bad case: > incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km > kg, logic_error);
    CHECK_THROWS(km > ton, logic_error);
    CHECK_THROWS(km > hour, logic_error);
    CHECK_THROWS(km > minute, logic_error);
    CHECK_THROWS(km > usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter > kg, logic_error);
    CHECK_THROWS(meter > ton, logic_error);
    CHECK_THROWS(meter > hour, logic_error);
    CHECK_THROWS(meter > minute, logic_error);
    CHECK_THROWS(meter > usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg > km, logic_error);
    CHECK_THROWS(kg > meter, logic_error);
    CHECK_THROWS(kg > hour, logic_error);
    CHECK_THROWS(kg > minute, logic_error);
    CHECK_THROWS(kg > usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton > km, logic_error);
    CHECK_THROWS(ton > meter, logic_error);
    CHECK_THROWS(ton > hour, logic_error);
    CHECK_THROWS(ton > minute, logic_error);
    CHECK_THROWS(ton > usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour > km, logic_error);
    CHECK_THROWS(hour > meter, logic_error);
    CHECK_THROWS(hour > kg, logic_error);
    CHECK_THROWS(hour > ton, logic_error);
    CHECK_THROWS(hour > usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute > km, logic_error);
    CHECK_THROWS(minute > meter, logic_error);
    CHECK_THROWS(minute > kg, logic_error);
    CHECK_THROWS(minute > ton, logic_error);
    CHECK_THROWS(minute > usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd > km, logic_error);
    CHECK_THROWS(usd > meter, logic_error);
    CHECK_THROWS(usd > kg, logic_error);
    CHECK_THROWS(usd > ton, logic_error);
    CHECK_THROWS(usd > hour, logic_error);
    CHECK_THROWS(usd > minute, logic_error);
}

TEST_CASE("bad case: >= incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km >= kg, logic_error);
    CHECK_THROWS(km >= ton, logic_error);
    CHECK_THROWS(km >= hour, logic_error);
    CHECK_THROWS(km >= minute, logic_error);
    CHECK_THROWS(km >= usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter >= kg, logic_error);
    CHECK_THROWS(meter >= ton, logic_error);
    CHECK_THROWS(meter >= hour, logic_error);
    CHECK_THROWS(meter >= minute, logic_error);
    CHECK_THROWS(meter >= usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg >= km, logic_error);
    CHECK_THROWS(kg >= meter, logic_error);
    CHECK_THROWS(kg >= hour, logic_error);
    CHECK_THROWS(kg >= minute, logic_error);
    CHECK_THROWS(kg >= usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton >= km, logic_error);
    CHECK_THROWS(ton >= meter, logic_error);
    CHECK_THROWS(ton >= hour, logic_error);
    CHECK_THROWS(ton >= minute, logic_error);
    CHECK_THROWS(ton >= usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour >= km, logic_error);
    CHECK_THROWS(hour >= meter, logic_error);
    CHECK_THROWS(hour >= kg, logic_error);
    CHECK_THROWS(hour >= ton, logic_error);
    CHECK_THROWS(hour >= usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute >= km, logic_error);
    CHECK_THROWS(minute >= meter, logic_error);
    CHECK_THROWS(minute >= kg, logic_error);
    CHECK_THROWS(minute >= ton, logic_error);
    CHECK_THROWS(minute >= usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd >= km, logic_error);
    CHECK_THROWS(usd >= meter, logic_error);
    CHECK_THROWS(usd >= kg, logic_error);
    CHECK_THROWS(usd >= ton, logic_error);
    CHECK_THROWS(usd >= hour, logic_error);
    CHECK_THROWS(usd >= minute, logic_error);
}

TEST_CASE("bad case: == incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km == kg, logic_error);
    CHECK_THROWS(km == ton, logic_error);
    CHECK_THROWS(km == hour, logic_error);
    CHECK_THROWS(km == minute, logic_error);
    CHECK_THROWS(km == usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter == kg, logic_error);
    CHECK_THROWS(meter == ton, logic_error);
    CHECK_THROWS(meter == hour, logic_error);
    CHECK_THROWS(meter == minute, logic_error);
    CHECK_THROWS(meter == usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg == km, logic_error);
    CHECK_THROWS(kg == meter, logic_error);
    CHECK_THROWS(kg == hour, logic_error);
    CHECK_THROWS(kg == minute, logic_error);
    CHECK_THROWS(kg == usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton == km, logic_error);
    CHECK_THROWS(ton == meter, logic_error);
    CHECK_THROWS(ton == hour, logic_error);
    CHECK_THROWS(ton == minute, logic_error);
    CHECK_THROWS(ton == usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour == km, logic_error);
    CHECK_THROWS(hour == meter, logic_error);
    CHECK_THROWS(hour == kg, logic_error);
    CHECK_THROWS(hour == ton, logic_error);
    CHECK_THROWS(hour == usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute == km, logic_error);
    CHECK_THROWS(minute == meter, logic_error);
    CHECK_THROWS(minute == kg, logic_error);
    CHECK_THROWS(minute == ton, logic_error);
    CHECK_THROWS(minute == usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd == km, logic_error);
    CHECK_THROWS(usd == meter, logic_error);
    CHECK_THROWS(usd == kg, logic_error);
    CHECK_THROWS(usd == ton, logic_error);
    CHECK_THROWS(usd == hour, logic_error);
    CHECK_THROWS(usd == minute, logic_error);
}

TEST_CASE("bad case: != incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km != kg, logic_error);
    CHECK_THROWS(km != ton, logic_error);
    CHECK_THROWS(km != hour, logic_error);
    CHECK_THROWS(km != minute, logic_error);
    CHECK_THROWS(km != usd, logic_error);

    // meter and everything else
    CHECK_THROWS(meter != kg, logic_error);
    CHECK_THROWS(meter != ton, logic_error);
    CHECK_THROWS(meter != hour, logic_error);
    CHECK_THROWS(meter != minute, logic_error);
    CHECK_THROWS(meter != usd, logic_error);

    // kg and everything else
    CHECK_THROWS(kg != km, logic_error);
    CHECK_THROWS(kg != meter, logic_error);
    CHECK_THROWS(kg != hour, logic_error);
    CHECK_THROWS(kg != minute, logic_error);
    CHECK_THROWS(kg != usd, logic_error);

    // ton and everything else
    CHECK_THROWS(ton != km, logic_error);
    CHECK_THROWS(ton != meter, logic_error);
    CHECK_THROWS(ton != hour, logic_error);
    CHECK_THROWS(ton != minute, logic_error);
    CHECK_THROWS(ton != usd, logic_error);

    // hour and everything else
    CHECK_THROWS(hour != km, logic_error);
    CHECK_THROWS(hour != meter, logic_error);
    CHECK_THROWS(hour != kg, logic_error);
    CHECK_THROWS(hour != ton, logic_error);
    CHECK_THROWS(hour != usd, logic_error);

    // minute and everything else
    CHECK_THROWS(minute != km, logic_error);
    CHECK_THROWS(minute != meter, logic_error);
    CHECK_THROWS(minute != kg, logic_error);
    CHECK_THROWS(minute != ton, logic_error);
    CHECK_THROWS(minute != usd, logic_error);

    // usd and everything else
    CHECK_THROWS(usd != km, logic_error);
    CHECK_THROWS(usd != meter, logic_error);
    CHECK_THROWS(usd != kg, logic_error);
    CHECK_THROWS(usd != ton, logic_error);
    CHECK_THROWS(usd != hour, logic_error);
    CHECK_THROWS(usd != minute, logic_error);
}

// incrumenter (++) what do i do if hour reachs 24/ meter reachs 1000/ gram reachs 1000 etc... 
// decrementor (--) what do i do when things hit 0?

