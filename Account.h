#include<string>
#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
class Account
{
    int m_accNumber;
    double m_balance;
    std::string m_accName;
public:
    Account();

    Account(int a,std::string b, double c);

    Account(const Account &obj);



    int debit(Account &obj,double amount);
    int credit( Account &obj,double amount);
    int getbalance(Account &obj);
    int display(Account &obj);
};

#endif // ACCOUNT_H_INCLUDED
