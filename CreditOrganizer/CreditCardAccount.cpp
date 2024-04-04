#include "pch.h"
#include "CreditCardAccount.h"
#using <mscorlib.dll>
using namespace System;

void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;
}
bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		return true;
	}
}
void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}
void CreditCardAccount::PrintStatement()
{
	Console::WriteLine("Current balance: ");
	Console::WriteLine(currentBalance);
}
long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}
CreditCardAccount::CreditCardAccount(long number, double limit)
{
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
	numberOfAccounts++;
	Console::Write("This is account number: ");
	Console::WriteLine(numberOfAccounts);
}
static CreditCardAccount::CreditCardAccount()
{
	interestRate = 4.5;
	Console::WriteLine("Static constructor called");
}
int CreditCardAccount::GetNumberOfAccounts()
{
	return numberOfAccounts;
}