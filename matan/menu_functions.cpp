#include "menu_functions.h"

#include <cstdlib>
#include <iostream>

const AArshinov::MenuItem* AArshinov::show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout <<current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	return current->children[user_input];
}

const AArshinov::MenuItem* AArshinov::exit(const MenuItem* current) {
	std::exit(0);
}

const AArshinov::MenuItem* AArshinov::study_lim_koshi(const MenuItem* current) {
	std::cout<< current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::study_lim_heine(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::study_peano(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::study_arhimed(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::study_go_back(const MenuItem* current) {
	return current->parent->parent;
}