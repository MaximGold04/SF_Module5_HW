#include <iostream>
#include "Machine.h"
#include <string>
using namespace std;

int main()
{
	system("CHCP 1251");

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack("bounty");
	slot->addSnack("snickers");
	VMachine* machine = new VMachine(5);
	machine->addSlot(10); 

	cout << machine->getEmptySlotCount(); 
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	return 0;
}