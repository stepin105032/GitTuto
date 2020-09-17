#include"Account.h"
#include <string>
#include<iostream>

Account::Account()
{ }
Account::Account(int a,std::string b, double c)
{
    m_accNumber=a;
    m_accName=b;
    m_balance=c;
}
Account::Account(const Account &obj)
{
    m_accNumber=obj.m_accNumber;
    m_accName=obj.m_accName;
    m_balance=obj.m_balance;
}





Account::debit(Account &obj,double amount)
{
    if(obj.m_balance>amount)
    {
        obj.m_balance=obj.m_balance-amount;
        std::cout<<amount<<"Rs debited \n";
    }
    else if(obj.m_balance<amount)
    {
        std::cout<<"insufficient balance \n";
    }

    return 0;

}

Account::credit( Account &obj,double amount)
{
    obj.m_balance=obj.m_balance+amount;
    std::cout<<amount<<"Rs credited";

    return 0;
}

Account::getbalance(Account &obj)
{
    std::cout<<"Balance :"<<obj.m_balance;
    return 0;
}


Account::display(Account &obj)
{
    std::cout<<"Account ID:"<<obj.m_accNumber<<"\n";
    std::cout<<"Account Name:"<<obj.m_accName<<"\n";
    std::cout<<"Account Balance:"<<obj.m_balance<<"\n";

    return 0;
}
