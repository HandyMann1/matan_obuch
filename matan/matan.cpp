#include <iostream>
#include <clocale>


#include "menu.h"
#include "menu_functions.h"
#include "menu_items.h"

int main() {
	std::setlocale(LC_ALL, "");

	const AArshinov::MenuItem* current = &AArshinov::MAIN;
	do {
		current = current->func(current);
	} while (true);

	return 0;
}
