#include<iostream>
#include"Singelton.h"
using namespace std;

int main() {
	FamiluCash* fother = FamiluCash::getFamiluCash(10'000);
	fother->spendMoney(2'000);
	FamiluCash* mother=FamiluCash::getFamiluCash(7'000);
	mother->spendMoney(4'000);
	
}