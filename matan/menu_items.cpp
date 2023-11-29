#include "menu_items.h"

#include <cstddef>

#include "menu_functions.h"

const AArshinov::MenuItem AArshinov::STUDY_LIM_KOSHI = { "1 - Хочу узнать определение предела по Коши!", AArshinov::study_lim_koshi,&AArshinov::STUDY};
const AArshinov::MenuItem AArshinov::STUDY_LIM_HEINE = { "2 - Хочу узнать определение предела по Гейне!", AArshinov::study_lim_heine,&AArshinov::STUDY };
const AArshinov::MenuItem AArshinov::STUDY_PEANO = { "3 - Хочу узнать об аксиомах Пеано!", AArshinov::study_peano,&AArshinov::STUDY };
const AArshinov::MenuItem AArshinov::STUDY_ARHIMED = { "4 - Хочу узнать об аксиоме Архимеда!", AArshinov::study_arhimed,&AArshinov::STUDY };
const AArshinov::MenuItem AArshinov::STUDY_GO_BACK = { "0 - Выйти в главное меню", AArshinov::study_go_back,&AArshinov::STUDY };

namespace {
	const AArshinov::MenuItem* const study_children[] = {
		& AArshinov::STUDY_GO_BACK,
		& AArshinov::STUDY_LIM_KOSHI,
		& AArshinov::STUDY_LIM_HEINE,
		& AArshinov::STUDY_PEANO,
		& AArshinov::STUDY_ARHIMED
	}; const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const AArshinov::MenuItem AArshinov::STUDY = { "1 - Хочу учиться математическому анализу!", AArshinov::show_menu,&AArshinov::MAIN, study_children, study_size };
const AArshinov::MenuItem AArshinov::EXIT = { "0 - Как-нибудь в другой раз...", AArshinov::exit, &AArshinov::MAIN };

namespace {
	const AArshinov::MenuItem* const main_children[] = {
		&AArshinov::EXIT,
		&AArshinov::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const AArshinov::MenuItem AArshinov::MAIN = {
	nullptr, AArshinov::show_menu, nullptr, main_children, main_size
};