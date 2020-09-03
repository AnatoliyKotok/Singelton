#pragma once
#include<iostream>
using namespace std;
class FamiluCash {
	double money = 0;
	FamiluCash(const double& money = 1000):money(money) {

	}
	static FamiluCash* instance;
public:
	FamiluCash(const FamiluCash*) = delete;
	void operator=(const FamiluCash*) = delete;
	static FamiluCash* getFamiluCash(double money = 0) {
		if (instance == nullptr) {
			instance = new FamiluCash(money);
		}
		return instance;
	}
	void addMoney(const double money) {
		this->money = money;
	}
	void spendMoney(const double money){
		if (money <= this->money) {
			this->money -= money;
			cout << "You spent->" << money << "\nRest->" << this->money << endl;
		}
		else {
			cout << "You want spent more then possible" << endl;
		}
	}
	double getCash()const {
		return money;
	}
	~FamiluCash() {
		delete instance;
	}
};
FamiluCash* FamiluCash::instance = nullptr;