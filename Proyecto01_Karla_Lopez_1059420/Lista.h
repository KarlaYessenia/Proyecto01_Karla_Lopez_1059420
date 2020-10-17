#pragma once
#include "Nodo.h"
class Lista
{
public:
	Nodo* start;
	Nodo* end;
	int count;

	Lista();
	void InsertAtEnd(int value);
	bool isEmpty();
	~Lista() {};
};

