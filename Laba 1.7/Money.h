#pragma one
#include <string>
#include <iostream>
#include <cmath>

class Money
{
private:
    long banknote;
    unsigned char coin;
public:
    Money();
    Money(double amount);
    const long getBanknote() const;
    const long getCoin() const;
    void init(long banknote, unsigned char coin);
    void init(long long coin);
    void read();
    void display() const;
    std::string toString() const;
    void setBanknote(long banknote);
    void setCoin(unsigned char coin);
    Money add(Money money);
    Money add(int coin);
    Money minus(Money money);
    Money minus(int coin);
    Money div(int divider);
    Money div(double divider);
    Money mul(double times);
    bool equal(Money money);

    Money operator+(Money money);
    Money operator+(int coin);
    Money operator-(Money money);
    Money operator-(int coin);
    Money operator/(int divider);
    Money operator/(double divider);
    Money operator*(double times);
    bool operator==(Money money);
};
