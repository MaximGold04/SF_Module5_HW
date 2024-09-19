#include <iostream>
#include "Machine.h"
#include <string>
using namespace std;

VMachine::VMachine()
{
	slotCount = 10;
	fillSlotCount = 1;
	emptySlotCount = slotCount;
}
VMachine::VMachine(int slotCountEX, int emptySlotCountEX, int fillSlotCountEX)
{
	slotCount = slotCountEX;
	emptySlotCount = emptySlotCountEX;
	fillSlotCount = fillSlotCountEX;
}
VMachine::VMachine(int slotCountEX)
{
	slotCount = slotCountEX;
	this->emptySlotCount = slotCount;
	this->fillSlotCount = 0;
}
VMachine::~VMachine(){}


int VMachine::getSlotCount() const
{
	return slotCount;
}
void VMachine::setSlotCount(int slotCountEX)
{
	this->slotCount = slotCountEX;
}


int VMachine::getEmptySlotCount() const
{
	return emptySlotCount;
}
void VMachine::setEmptySlotCount(int emptySlotCountEX)
{
	this->emptySlotCount = emptySlotCountEX;
}


int VMachine::getFillSlotCount() const
{
	return fillSlotCount;
}

void VMachine::setFillSlotCount(int fillSlotCountEX)
{
	this->fillSlotCount = fillSlotCountEX;
}


void VMachine::addSlot(int slot)
{
	if ((emptySlotCount != 0) and (slot <= (emptySlotCount - fillSlotCount)))
	{
		int fillSlotCountEX = fillSlotCount;
		fillSlotCountEX += slot;
		cout << "Количество заполненных слотов: " << fillSlotCountEX << endl;
	}
	else
	{
		cout << "Вы не можете поместить слот.  " << endl;
	}
}



Snack::Snack()
{
	snackName = "Snack";
	snackPrice = 100;
	snackWeight = 50;
}
Snack::Snack(string snackNameEX, int snackPriceEX, int snackWeightEX)
{
	snackName = snackNameEX;
	snackPrice = snackPriceEX;
	snackWeight = snackWeightEX;
}
Snack::Snack(string snackNameEX)
{
	snackName = snackNameEX;
	this->snackPrice = 100;
	this->snackWeight = 50;
}
Snack::Snack(int snackPriceEX, int snackWeightEX)
{
	snackPrice = snackPriceEX;
	snackWeight = snackWeightEX;
	snackName = "Snack";
}
Snack::~Snack(){}

string Snack::getSnackName()
{
	return snackName;
}
void Snack::setSnackName(string snackNameEX)
{
	this->snackName = snackNameEX;
}

int Snack::getSnackPrice()
{
	return snackPrice;
}
void Snack::setSnackPrice(int snackPriceEX)
{
	this->snackPrice = snackPriceEX;
}

int Snack::getSnackWeight()
{
	return snackWeight;
}
void Snack::setSnackWeight(int snackWeightEX)
{
	this->snackWeight = snackWeightEX;
}



SnackSlot::SnackSlot()
{
	slot = 10;
}
SnackSlot::SnackSlot(int slotEX)
{
	slot = slotEX;
}
SnackSlot::~SnackSlot(){}

int SnackSlot::getSlot()
{
	return slot;
}
void SnackSlot::setSlot(int slotEX)
{
	this->slot = slotEX;
}


int SnackSlot::addSnack(string snackNameEX) const
{
	int slotEX = slot;
	slotEX += 1;

	return slotEX;
}