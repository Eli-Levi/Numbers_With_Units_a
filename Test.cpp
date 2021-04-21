#include "doctest.h"
#include <iostream>
#include <sstream>
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
    NumberWithUnits m(5, "min");
    NumberWithUnits n(5, "min");
    NumberWithUnits ans5 = m.get_numeric_value() + n.get_numeric_value();
    CHECK(ans5.get_numeric_value() == 10);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(5, "USD");
    NumberWithUnits ans7 = o.get_numeric_value() + p.get_numeric_value();
    CHECK(ans7.get_numeric_value() == 10);
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
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    NumberWithUnits ans5 = m.get_numeric_value() - n.get_numeric_value();
    CHECK(ans5.get_numeric_value() == 3);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    NumberWithUnits ans7 = o.get_numeric_value() - p.get_numeric_value();
    CHECK(ans7.get_numeric_value() == 3);
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
    NumberWithUnits m(5, "min");
    NumberWithUnits n(2, "min");
    NumberWithUnits ans5 = m.get_numeric_value() * n;
    CHECK(ans5.get_numeric_value() == 10);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2, "USD");
    NumberWithUnits ans6 = o.get_numeric_value() * p;
    CHECK(ans6.get_numeric_value() == 10);

    // testing NumberWithUnit * double
    NumberWithUnits ans8 = a * b.get_numeric_value();
    CHECK(ans8.get_numeric_value() == 6);

    NumberWithUnits ans9 = c * d.get_numeric_value();
    CHECK(ans9.get_numeric_value() == 20);

    NumberWithUnits ans10 = e * f.get_numeric_value();
    CHECK(ans10.get_numeric_value() == 20);

    NumberWithUnits ans11 = g * h.get_numeric_value();
    CHECK(ans11.get_numeric_value() == 25);

    NumberWithUnits ans12 = i * j.get_numeric_value();
    CHECK(ans12.get_numeric_value() == 25);

    NumberWithUnits ans14 = m * n.get_numeric_value();
    CHECK(ans14.get_numeric_value() == 10);

    NumberWithUnits ans15 = o * p.get_numeric_value();
    CHECK(ans15.get_numeric_value() == 10);
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
    NumberWithUnits p(0, "USD");
    o *= p;
    CHECK(o.get_numeric_value() == 0);
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
    NumberWithUnits l(0, "hour");
    CHECK(l < k);
    NumberWithUnits m(9, "min");
    NumberWithUnits n(7, "min");
    CHECK(n < m);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(2.5, "USD");
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
    NumberWithUnits m(57, "min");
    NumberWithUnits n(40, "min");
    CHECK(n <= m);
    NumberWithUnits o(5.5, "USD");
    NumberWithUnits p(5, "USD");
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
    NumberWithUnits i(23, "hour");
    NumberWithUnits j(3, "hour");
    CHECK(i > j);

    NumberWithUnits m(59, "min");
    NumberWithUnits n(30, "min");
    CHECK(m > n);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0.5, "USD");
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
    NumberWithUnits c(1, "km");
    NumberWithUnits d(1000, "m");
    CHECK_EQ(c, d);
    NumberWithUnits e(10, "m");
    NumberWithUnits f(4, "m");
    CHECK_FALSE(e == f);
    NumberWithUnits g(1, "m");
    NumberWithUnits h(100, "cm");
    CHECK_EQ(g, h);
    NumberWithUnits i(0, "kg");
    NumberWithUnits j(0, "kg");
    CHECK(i == j);
    NumberWithUnits k(5, "ton");
    NumberWithUnits l(5, "ton");
    CHECK(k == l);
    NumberWithUnits m(5, "hour");
    NumberWithUnits n(2, "hour");
    CHECK_FALSE(m == n);
    NumberWithUnits o(5, "hour");
    NumberWithUnits p(-5, "hour");
    CHECK_FALSE(o == p);
    NumberWithUnits q(20, "min");
    NumberWithUnits r(2, "min");
    CHECK_FALSE(q == r);
    NumberWithUnits s(5, "USD");
    NumberWithUnits t(10.99, "USD");
    CHECK_FALSE(s == t);
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
    NumberWithUnits m(0, "min");
    NumberWithUnits n(-2, "min");
    CHECK(m != n);
    NumberWithUnits o(5, "USD");
    NumberWithUnits p(0.75, "USD");
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
    ostringstream oss;
    oss << a;
    CHECK(oss.str() == "3[km]");

    NumberWithUnits b(5, "m");
    ostringstream oss1;
    oss1 << b;
    CHECK(oss1.str() == "5[m]");

    NumberWithUnits c(2, "kg");
    ostringstream oss2;
    oss2 << c;
    CHECK(oss2.str() == "2[kg]");

    NumberWithUnits d(15, "ton");
    ostringstream oss3;
    oss3 << d;
    CHECK(oss3.str() == "15[ton]");

    NumberWithUnits e(9, "hour");
    ostringstream oss4;
    oss4 << e;
    CHECK(oss4.str() == "9[hour]");

    NumberWithUnits f(59, "min");
    ostringstream oss5;
    oss5 << f;
    CHECK(oss5.str() == "59[min]");

    NumberWithUnits g(1.5, "USD");
    ostringstream oss6;
    oss6 << g;
    CHECK(oss6.str() == "1.5[USD]");
}

TEST_CASE("good case: input >> working as intended with similar measure types")
{
    NumberWithUnits a(3, "km");
    
    NumberWithUnits b(5, "m");

    NumberWithUnits c(2, "kg");

    NumberWithUnits d(15, "ton");

    NumberWithUnits e(9, "hour");

    NumberWithUnits f(1, "hour");

    NumberWithUnits g(59, "min");

    NumberWithUnits h(1.5, "USD");
}

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
    CHECK_THROWS(km + kg);
    CHECK_THROWS(km + ton);
    CHECK_THROWS(km + hour);
    CHECK_THROWS(km + minute);
    CHECK_THROWS(km + usd);

    // meter and everything else
    CHECK_THROWS(meter + kg);
    CHECK_THROWS(meter + ton);
    CHECK_THROWS(meter + hour);
    CHECK_THROWS(meter + minute);
    CHECK_THROWS(meter + usd);

    // kg and everything else
    CHECK_THROWS(kg + km);
    CHECK_THROWS(kg + meter);
    CHECK_THROWS(kg + hour);
    CHECK_THROWS(kg + minute);
    CHECK_THROWS(kg + usd);

    // ton and everything else
    CHECK_THROWS(ton + km);
    CHECK_THROWS(ton + meter);
    CHECK_THROWS(ton + hour);
    CHECK_THROWS(ton + minute);
    CHECK_THROWS(ton + usd);

    // hour and everything else
    CHECK_THROWS(hour + km);
    CHECK_THROWS(hour + meter);
    CHECK_THROWS(hour + kg);
    CHECK_THROWS(hour + ton);
    CHECK_THROWS(hour + usd);

    // minute and everything else
    CHECK_THROWS(minute + km);
    CHECK_THROWS(minute + meter);
    CHECK_THROWS(minute + kg);
    CHECK_THROWS(minute + ton);
    CHECK_THROWS(minute + usd);

    // usd and everything else
    CHECK_THROWS(usd + km);
    CHECK_THROWS(usd + meter);
    CHECK_THROWS(usd + kg);
    CHECK_THROWS(usd + ton);
    CHECK_THROWS(usd + hour);
    CHECK_THROWS(usd + minute);
}

TEST_CASE("bad case: += incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km += kg);
    CHECK_THROWS(km += ton);
    CHECK_THROWS(km += hour);
    CHECK_THROWS(km += minute);
    CHECK_THROWS(km += usd);

    // meter and everything else
    CHECK_THROWS(meter += kg);
    CHECK_THROWS(meter += ton);
    CHECK_THROWS(meter += hour);
    CHECK_THROWS(meter += minute);
    CHECK_THROWS(meter += usd);

    // kg and everything else
    CHECK_THROWS(kg += km);
    CHECK_THROWS(kg += meter);
    CHECK_THROWS(kg += hour);
    CHECK_THROWS(kg += minute);
    CHECK_THROWS(kg += usd);

    // ton and everything else
    CHECK_THROWS(ton += km);
    CHECK_THROWS(ton += meter);
    CHECK_THROWS(ton += hour);
    CHECK_THROWS(ton += minute);
    CHECK_THROWS(ton += usd);

    // hour and everything else
    CHECK_THROWS(hour += km);
    CHECK_THROWS(hour += meter);
    CHECK_THROWS(hour += kg);
    CHECK_THROWS(hour += ton);
    CHECK_THROWS(hour += usd);

    // minute and everything else
    CHECK_THROWS(minute += km);
    CHECK_THROWS(minute += meter);
    CHECK_THROWS(minute += kg);
    CHECK_THROWS(minute += ton);
    CHECK_THROWS(minute += usd);

    // usd and everything else
    CHECK_THROWS(usd += km);
    CHECK_THROWS(usd += meter);
    CHECK_THROWS(usd += kg);
    CHECK_THROWS(usd += ton);
    CHECK_THROWS(usd += hour);
    CHECK_THROWS(usd += minute);
}

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
    CHECK_THROWS(km - kg);
    CHECK_THROWS(km - ton);
    CHECK_THROWS(km - hour);
    CHECK_THROWS(km - minute);
    CHECK_THROWS(km - usd);

    // meter and everything else
    CHECK_THROWS(meter - kg);
    CHECK_THROWS(meter - ton);
    CHECK_THROWS(meter - hour);
    CHECK_THROWS(meter - minute);
    CHECK_THROWS(meter - usd);

    // kg and everything else
    CHECK_THROWS(kg - km);
    CHECK_THROWS(kg - meter);
    CHECK_THROWS(kg - hour);
    CHECK_THROWS(kg - minute);
    CHECK_THROWS(kg - usd);

    // ton and everything else
    CHECK_THROWS(ton - km);
    CHECK_THROWS(ton - meter);
    CHECK_THROWS(ton - hour);
    CHECK_THROWS(ton - minute);
    CHECK_THROWS(ton - usd);

    // hour and everything else
    CHECK_THROWS(hour - km);
    CHECK_THROWS(hour - meter);
    CHECK_THROWS(hour - kg);
    CHECK_THROWS(hour - ton);
    CHECK_THROWS(hour - usd);

    // minute and everything else
    CHECK_THROWS(minute - km);
    CHECK_THROWS(minute - meter);
    CHECK_THROWS(minute - kg);
    CHECK_THROWS(minute - ton);
    CHECK_THROWS(minute - usd);

    // usd and everything else
    CHECK_THROWS(usd - km);
    CHECK_THROWS(usd - meter);
    CHECK_THROWS(usd - kg);
    CHECK_THROWS(usd - ton);
    CHECK_THROWS(usd - hour);
    CHECK_THROWS(usd - minute);
}

TEST_CASE("bad case: -= incompatible measure types")
{
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(km -= kg);
    CHECK_THROWS(km -= ton);
    CHECK_THROWS(km -= hour);
    CHECK_THROWS(km -= minute);
    CHECK_THROWS(km -= usd);

    // meter and everything else
    CHECK_THROWS(meter -= kg);
    CHECK_THROWS(meter -= ton);
    CHECK_THROWS(meter -= hour);
    CHECK_THROWS(meter -= minute);
    CHECK_THROWS(meter -= usd);

    // kg and everything else
    CHECK_THROWS(kg -= km);
    CHECK_THROWS(kg -= meter);
    CHECK_THROWS(kg -= hour);
    CHECK_THROWS(kg -= minute);
    CHECK_THROWS(kg -= usd);

    // ton and everything else
    CHECK_THROWS(ton -= km);
    CHECK_THROWS(ton -= meter);
    CHECK_THROWS(ton -= hour);
    CHECK_THROWS(ton -= minute);
    CHECK_THROWS(ton -= usd);

    // hour and everything else
    CHECK_THROWS(hour -= km);
    CHECK_THROWS(hour -= meter);
    CHECK_THROWS(hour -= kg);
    CHECK_THROWS(hour -= ton);
    CHECK_THROWS(hour -= usd);

    // minute and everything else
    CHECK_THROWS(minute -= km);
    CHECK_THROWS(minute -= meter);
    CHECK_THROWS(minute -= kg);
    CHECK_THROWS(minute -= ton);
    CHECK_THROWS(minute -= usd);

    // usd and everything else
    CHECK_THROWS(usd -= km);
    CHECK_THROWS(usd -= meter);
    CHECK_THROWS(usd -= kg);
    CHECK_THROWS(usd -= ton);
    CHECK_THROWS(usd -= hour);
    CHECK_THROWS(usd -= minute);
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
    bool res;
    CHECK_THROWS(res = (km < kg));
    CHECK_THROWS(res = (km < ton));
    CHECK_THROWS(res = (km < hour));
    CHECK_THROWS(res = (km < minute));
    CHECK_THROWS(res = (km < usd));

    // meter and everything else
    CHECK_THROWS(res = (meter < kg));
    CHECK_THROWS(res = (meter < ton));
    CHECK_THROWS(res = (meter < hour));
    CHECK_THROWS(res = (meter < minute));
    CHECK_THROWS(res = (meter < usd));

    // kg and everything else
    CHECK_THROWS(res = (kg < km));
    CHECK_THROWS(res = (kg < meter));
    CHECK_THROWS(res = (kg < hour));
    CHECK_THROWS(res = (kg < minute));
    CHECK_THROWS(res = (kg < usd));

    // ton and everything else
    CHECK_THROWS(res = (ton < km));
    CHECK_THROWS(res = (ton < meter));
    CHECK_THROWS(res = (ton < hour));
    CHECK_THROWS(res = (ton < minute));
    CHECK_THROWS(res = (ton < usd));

    // hour and everything else
    CHECK_THROWS(res = (hour < km));
    CHECK_THROWS(res = (hour < meter));
    CHECK_THROWS(res = (hour < kg));
    CHECK_THROWS(res = (hour < ton));
    CHECK_THROWS(res = (hour < usd));

    // minute and everything else
    CHECK_THROWS(res = (minute < km));
    CHECK_THROWS(res = (minute < meter));
    CHECK_THROWS(res = (minute < kg));
    CHECK_THROWS(res = (minute < ton));
    CHECK_THROWS(res = (minute < usd));

    // usd and everything else
    CHECK_THROWS(res = (usd < km));
    CHECK_THROWS(res = (usd < meter));
    CHECK_THROWS(res = (usd < kg));
    CHECK_THROWS(res = (usd < ton));
    CHECK_THROWS(res = (usd < hour));
    CHECK_THROWS(res = (usd < minute));
}

TEST_CASE("bad case: <= incompatible measure types")
{
    bool res;
    NumberWithUnits km(5, "km");
    NumberWithUnits meter(5, "m");
    NumberWithUnits kg(5, "kg");
    NumberWithUnits ton(5, "ton");
    NumberWithUnits hour(5, "hour");
    NumberWithUnits minute(5, "min");
    NumberWithUnits usd(5, "USD");

    // km and evertything else
    CHECK_THROWS(res = (km <= kg));
    CHECK_THROWS(res = (km <= ton));
    CHECK_THROWS(res = (km <= hour));
    CHECK_THROWS(res = (km <= minute));
    CHECK_THROWS(res = (km <= usd));

    // meter and everything else
    CHECK_THROWS(res = (meter <= kg));
    CHECK_THROWS(res = (meter <= ton));
    CHECK_THROWS(res = (meter <= hour));
    CHECK_THROWS(res = (meter <= minute));
    CHECK_THROWS(res = (meter <= usd));

    // kg and everything else
    CHECK_THROWS(res = (kg <= km));
    CHECK_THROWS(res = (kg <= meter));
    CHECK_THROWS(res = (kg <= hour));
    CHECK_THROWS(res = (kg <= minute));
    CHECK_THROWS(res = (kg <= usd));

    // ton and everything else
    CHECK_THROWS(res = (ton <= km));
    CHECK_THROWS(res = (ton <= meter));
    CHECK_THROWS(res = (ton <= hour));
    CHECK_THROWS(res = (ton <= minute));
    CHECK_THROWS(res = (ton <= usd));

    // hour and everything else
    CHECK_THROWS(res = (hour <= km));
    CHECK_THROWS(res = (hour <= meter));
    CHECK_THROWS(res = (hour <= kg));
    CHECK_THROWS(res = (hour <= ton));
    CHECK_THROWS(res = (hour <= usd));

    // minute and everything else
    CHECK_THROWS(res = (minute <= km));
    CHECK_THROWS(res = (minute <= meter));
    CHECK_THROWS(res = (minute <= kg));
    CHECK_THROWS(res = (minute <= ton));
    CHECK_THROWS(res = (minute <= usd));

    // usd and everything else
    CHECK_THROWS(res = (usd <= km));
    CHECK_THROWS(res = (usd <= meter));
    CHECK_THROWS(res = (usd <= kg));
    CHECK_THROWS(res = (usd <= ton));
    CHECK_THROWS(res = (usd <= hour));
    CHECK_THROWS(res = (usd <= minute));
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
    bool res;

    // km and evertything else
    CHECK_THROWS(res = (km > kg));
    CHECK_THROWS(res = (km > ton));
    CHECK_THROWS(res = (km > hour));
    CHECK_THROWS(res = (km > minute));
    CHECK_THROWS(res = (km > usd));

    // meter and everything else
    CHECK_THROWS(res = (meter > kg));
    CHECK_THROWS(res = (meter > ton));
    CHECK_THROWS(res = (meter > hour));
    CHECK_THROWS(res = (meter > minute));
    CHECK_THROWS(res = (meter > usd));

    // kg and everything else
    CHECK_THROWS(res = (kg > km));
    CHECK_THROWS(res = (kg > meter));
    CHECK_THROWS(res = (kg > hour));
    CHECK_THROWS(res = (kg > minute));
    CHECK_THROWS(res = (kg > usd));

    // ton and everything else
    CHECK_THROWS(res = (ton > km));
    CHECK_THROWS(res = (ton > meter));
    CHECK_THROWS(res = (ton > hour));
    CHECK_THROWS(res = (ton > minute));
    CHECK_THROWS(res = (ton > usd));

    // hour and everything else
    CHECK_THROWS(res = (hour > km));
    CHECK_THROWS(res = (hour > meter));
    CHECK_THROWS(res = (hour > kg));
    CHECK_THROWS(res = (hour > ton));
    CHECK_THROWS(res = (hour > usd));

    // minute and everything else
    CHECK_THROWS(res = (minute > km));
    CHECK_THROWS(res = (minute > meter));
    CHECK_THROWS(res = (minute > kg));
    CHECK_THROWS(res = (minute > ton));
    CHECK_THROWS(res = (minute > usd));

    // usd and everything else
    CHECK_THROWS(res = (usd > km));
    CHECK_THROWS(res = (usd > meter));
    CHECK_THROWS(res = (usd > kg));
    CHECK_THROWS(res = (usd > ton));
    CHECK_THROWS(res = (usd > hour));
    CHECK_THROWS(res = (usd > minute));
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
    bool res;

    // km and everything else
    CHECK_THROWS(res = (km >= kg));
    CHECK_THROWS(res = (km >= ton));
    CHECK_THROWS(res = (km >= hour));
    CHECK_THROWS(res = (km >= minute));
    CHECK_THROWS(res = (km >= usd));

    // meter and everything else
    CHECK_THROWS(res = (meter >= kg));
    CHECK_THROWS(res = (meter >= ton));
    CHECK_THROWS(res = (meter >= hour));
    CHECK_THROWS(res = (meter >= minute));
    CHECK_THROWS(res = (meter >= usd));

    // kg and everything else
    CHECK_THROWS(res = (kg >= km));
    CHECK_THROWS(res = (kg >= meter));
    CHECK_THROWS(res = (kg >= hour));
    CHECK_THROWS(res = (kg >= minute));
    CHECK_THROWS(res = (kg >= usd));

    // ton and everything else
    CHECK_THROWS(res = (ton >= km));
    CHECK_THROWS(res = (ton >= meter));
    CHECK_THROWS(res = (ton >= hour));
    CHECK_THROWS(res = (ton >= minute));
    CHECK_THROWS(res = (ton >= usd));

    // hour and everything else
    CHECK_THROWS(res = (hour >= km));
    CHECK_THROWS(res = (hour >= meter));
    CHECK_THROWS(res = (hour >= kg));
    CHECK_THROWS(res = (hour >= ton));
    CHECK_THROWS(res = (hour >= usd));

    // minute and everything else
    CHECK_THROWS(res = (minute >= km));
    CHECK_THROWS(res = (minute >= meter));
    CHECK_THROWS(res = (minute >= kg));
    CHECK_THROWS(res = (minute >= ton));
    CHECK_THROWS(res = (minute >= usd));

    // usd and everything else
    CHECK_THROWS(res = (usd >= km));
    CHECK_THROWS(res = (usd >= meter));
    CHECK_THROWS(res = (usd >= kg));
    CHECK_THROWS(res = (usd >= ton));
    CHECK_THROWS(res = (usd >= hour));
    CHECK_THROWS(res = (usd >= minute));
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
    bool res;

    // km and evertything else
    CHECK_THROWS(res = (km == kg));
    CHECK_THROWS(res = (km == ton));
    CHECK_THROWS(res = (km == hour));
    CHECK_THROWS(res = (km == minute));
    CHECK_THROWS(res = (km == usd));

    // meter and everything else
    CHECK_THROWS(res = (meter == kg));
    CHECK_THROWS(res = (meter == ton));
    CHECK_THROWS(res = (meter == hour));
    CHECK_THROWS(res = (meter == minute));
    CHECK_THROWS(res = (meter == usd));

    // kg and everything else
    CHECK_THROWS(res = (kg == km));
    CHECK_THROWS(res = (kg == meter));
    CHECK_THROWS(res = (kg == hour));
    CHECK_THROWS(res = (kg == minute));
    CHECK_THROWS(res = (kg == usd));

    // ton and everything else
    CHECK_THROWS(res = (ton == km));
    CHECK_THROWS(res = (ton == meter));
    CHECK_THROWS(res = (ton == hour));
    CHECK_THROWS(res = (ton == minute));
    CHECK_THROWS(res = (ton == usd));

    // hour and everything else
    CHECK_THROWS(res = (hour == km));
    CHECK_THROWS(res = (hour == meter));
    CHECK_THROWS(res = (hour == kg));
    CHECK_THROWS(res = (hour == ton));
    CHECK_THROWS(res = (hour == usd));

    // minute and everything else
    CHECK_THROWS(res = (minute == km));
    CHECK_THROWS(res = (minute == meter));
    CHECK_THROWS(res = (minute == kg));
    CHECK_THROWS(res = (minute == ton));
    CHECK_THROWS(res = (minute == usd));

    // usd and everything else
    CHECK_THROWS(res = (usd == km));
    CHECK_THROWS(res = (usd == meter));
    CHECK_THROWS(res = (usd == kg));
    CHECK_THROWS(res = (usd == ton));
    CHECK_THROWS(res = (usd == hour));
    CHECK_THROWS(res = (usd == minute));
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
    bool res;

    // km and everything else
    CHECK_THROWS(res = (km != kg));
    CHECK_THROWS(res = (km != ton));
    CHECK_THROWS(res = (km != hour));
    CHECK_THROWS(res = (km != minute));
    CHECK_THROWS(res = (km != usd));

    // meter and everything else
    CHECK_THROWS(res = (meter != kg));
    CHECK_THROWS(res = (meter != ton));
    CHECK_THROWS(res = (meter != hour));
    CHECK_THROWS(res = (meter != minute));
    CHECK_THROWS(res = (meter != usd));

    // kg and everything else
    CHECK_THROWS(res = (kg != km));
    CHECK_THROWS(res = (kg != meter));
    CHECK_THROWS(res = (kg != hour));
    CHECK_THROWS(res = (kg != minute));
    CHECK_THROWS(res = (kg != usd));

    // ton and everything else
    CHECK_THROWS(res = (ton != km));
    CHECK_THROWS(res = (ton != meter));
    CHECK_THROWS(res = (ton != hour));
    CHECK_THROWS(res = (ton != minute));
    CHECK_THROWS(res = (ton != usd));

    // hour and everything else
    CHECK_THROWS(res = (hour != km));
    CHECK_THROWS(res = (hour != meter));
    CHECK_THROWS(res = (hour != kg));
    CHECK_THROWS(res = (hour != ton));
    CHECK_THROWS(res = (hour != usd));

    // minute and everything else
    CHECK_THROWS(res = (minute != km));
    CHECK_THROWS(res = (minute != meter));
    CHECK_THROWS(res = (minute != kg));
    CHECK_THROWS(res = (minute != ton));
    CHECK_THROWS(res = (minute != usd));

    // usd and everything else
    CHECK_THROWS(res = (usd != km));
    CHECK_THROWS(res = (usd != meter));
    CHECK_THROWS(res = (usd != kg));
    CHECK_THROWS(res = (usd != ton));
    CHECK_THROWS(res = (usd != hour));
    CHECK_THROWS(res = (usd != minute));
}

// incrumenter (++) what do i do if hour reachs 24/ meter reachs 1000/ gram reachs 1000 etc...
// decrementor (--) what do i do when things hit 0?
