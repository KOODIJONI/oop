#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <pankkitili.h>

class Luottotili: public Pankkitili
{
public:
    Luottotili(string,double);
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
