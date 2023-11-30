#include "menu_functions.h"

#include <cstdlib>
#include <iostream>

const AArshinov::MenuItem* AArshinov::study_math(const MenuItem* current) {
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

const AArshinov::MenuItem* AArshinov::matan(const MenuItem* current) {
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	return current->children[user_input];
}
const AArshinov::MenuItem* AArshinov::algebra(const MenuItem* current) {
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	return current->children[user_input];
}
const AArshinov::MenuItem* AArshinov::diff(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::integral(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::matan_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}


const AArshinov::MenuItem* AArshinov::summ(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::substract(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::multiply(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::divide(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const AArshinov::MenuItem* AArshinov::alg_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}



const AArshinov::MenuItem* AArshinov::study_go_back(const MenuItem* current) {
	return current->parent->parent;
}

