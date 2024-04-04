#pragma once
#include "LoyaltyScheme.h"

ref class CreditCardAccount
{
public:
	CreditCardAccount::CreditCardAccount(long, double);
	static CreditCardAccount();
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	static int GetNumberOfAccounts();
	literal System::String^ name = "Super Platinum Card";
	void RedeemLoyaltyPoints();

private:
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;
	LoyaltyScheme^ scheme;
};
