#include <iostream>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wc++11-compat-deprecated-writable-strings"


#define DNC 00000000000000000000


class Bank {

	private:
		char * name;
		long numAccount;
		double balance;

	public:
		double Balance () const;
		Bank (char * m_name = "none", long m_numAccount = DNC, double m_balance = 0);
		virtual ~Bank ();
		void Deposit (double depositSum);
		virtual void show () const;
		virtual void Withdraw (double withdrawSum);
};


class BankPlus : public Bank { // НЕ ЗАБЫВАТЬ ПРО public, иначе - автоматически private;

	private:
		double maxCredit;
		double maxRate;
		double bankDuty;

	public:
		BankPlus (char * m_name = "none", long m_numAccount = DNC, double m_balance = 0,
			      double m_maxCredit = 0, double m_maxRate = 500, 
			      double m_bankDuty = 0.11125);
		BankPlus (const Bank & copy, double m_maxCredit = 500, double m_maxRate = 500);
		virtual void show () const;
		virtual void Withdraw (double withdrawSum);
};


int main (void) {

	Bank * pt[7]; // массив указателей. В данном случае указатель может указывать, как на 
				  // Bank, так и на BankPlus, что наследуется от Bank;

	
	char * name = (char * ) malloc (sizeof (char) * 30);
	long numAccount = DNC;
	double balance = 0;
	double maxCredit = 0, maxRate = 0, bankDuty = 0;

	int i = 0, answer = 1;
	for (i = 0; i < 7; i++) {

		std:: cout << "Enter the name: " << std:: endl;
		std:: cin  >> name;
		std:: cout << "Enter the number of account: " << std:: endl;
		std:: cin  >> numAccount;
		std:: cout << "Enter the balance: " << std:: endl;
		std:: cin  >> balance;
		std:: cout << "Enter \"1\" - Bank and enter \"2\" - Bank+" << std:: endl;
		std:: cin  >> answer;

		switch (answer) {

			case 1:
				pt[i] = new Bank (name, numAccount, balance);
				break;

			case 2: {

				std:: cout << "Enter the credit: "  << std:: endl;
				std:: cin  >> maxCredit;
				std:: cout << "Enter the rate: " << std:: endl;
				std:: cin  >> maxRate;
				pt[i] = new BankPlus (name, numAccount, balance, maxCredit, maxRate);
				break;
			}

			default:
				std:: cout << "Enter 1 or 2 !" << std:: endl;
				break;
		}
	}

	return 0;
}


double Bank:: Balance () const {

	return (double) balance;
}


Bank:: Bank (char * m_name, long m_numAccount, double m_balance) {

	name = (char * ) malloc (sizeof (char) * (std:: strlen (m_name) + 1));

	std:: strcpy (name, m_name);
	numAccount = m_numAccount;
	balance    = m_balance;
}


Bank:: ~Bank () {

	std:: cout << name << " closed." << std:: endl;
}


BankPlus:: BankPlus (char * m_name, long m_numAccount, double m_balance,
			         double m_maxCredit, double m_maxRate, 
			         double m_bankDuty) : Bank (m_name, m_numAccount, m_balance) {

	maxCredit = m_maxCredit;
	maxRate   = m_maxRate;
	bankDuty  = m_bankDuty;
}


BankPlus:: BankPlus (const Bank & copy, double m_maxCredit, double m_maxRate) : Bank (copy) {

	maxCredit = m_maxCredit;
	maxRate   = m_maxRate;
	bankDuty  = 0;
}


void Bank:: Deposit (double depositSum) {

	if (depositSum < 0) {

		std:: cout << "Entered sum < 0. Error." << std:: endl;
		return;
	}

	balance += depositSum;
}


void Bank:: show () const {

	std:: cout << "name: "           << name       << std:: endl;
	std:: cout << "number account: " << numAccount << std:: endl;
	std:: cout << "balance: "        << balance    << std:: endl;
}


void BankPlus:: show () const {

	Bank:: show ();
	std:: cout << "max credit: " << maxCredit << std:: endl;
	std:: cout << "max rate: "   << maxRate   << std:: endl;
	std:: cout << "bank duty: "  << bankDuty  << std:: endl;
}


void BankPlus:: Withdraw (double withdrawSum) {

	double bal = Balance ();

	if (withdrawSum <= bal)
		Bank:: Withdraw (withdrawSum);

	else if (withdrawSum <= bal + maxCredit - bankDuty) {

		double advance = withdrawSum - bal;
		bankDuty += advance * (1 + maxRate);

		std:: cout << "Bank advande: $"   << advance           << std:: endl;
		std:: cout << "Finance charge: $" << advance * maxRate << std:: endl;
		
		Deposit (advance);
		Bank:: Withdraw (withdrawSum);
	}

	else
		std:: cout << "Credit limit exceeded. Transaction called." << std:: endl;
}


void Bank:: Withdraw (double withdrawSum) {

	if (withdrawSum < 0) {

		std:: cout << "Entered sum < 0. Error." << std:: endl;
		return;
	}

	balance -= withdrawSum;
}








