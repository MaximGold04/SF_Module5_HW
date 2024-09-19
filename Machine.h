#pragma once

#include <string>
#include <iostream>
using namespace std;


class VMachine
{
private:
	short slotCount; 
	int emptySlotCount; 
	int fillSlotCount; 

public:
	friend class Snack;
	friend class SnackSlot;
	
	VMachine();
	VMachine(int slotCountEX, int emptySlotCountEX, int fillSlotCountEX);
	VMachine(int slotCountEX);
	~VMachine();

	void addSlot(int slot);
	
	int getSlotCount() const;
	void setSlotCount(int slotCountEX);

	int getEmptySlotCount() const;
	void setEmptySlotCount(int emptySlotCountEX);

	int getFillSlotCount() const;
	void setFillSlotCount(int fillSlotCountEX);

};


class Snack
{
private:
	string snackName;
	int snackPrice;
	int snackWeight;

public:
	friend class VMachine;
	friend class SnackSlot;

	Snack();
	Snack(string snackNameEX, int snackPriceEX, int snackWeightEX);
	Snack(string snackNameEX);
	Snack(int snackPriceEX, int SnackWeighEX);
	~Snack();

	string getSnackName();
	void setSnackName(string snackNameEX);

	int getSnackPrice();
	void setSnackPrice(int snackPriceEX);

	int getSnackWeight();
	void setSnackWeight(int snackWeightEX);
};


class SnackSlot
{
private:
	int slot;

public:
	friend class Snack;
	friend class VMachine;

	SnackSlot();
	SnackSlot(int slotEX);
	~SnackSlot();

	int getSlot();
	void setSlot(int slotEX);

	int addSnack(string snackNameEX) const;





};