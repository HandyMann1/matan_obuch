#include "menu_items.h"

#include <cstddef>

#include "menu_functions.h"



namespace {
	const AArshinov::MenuItem* const study_children[] = {
		& AArshinov::STUDY_GO_BACK,
		& AArshinov::MATAN,
		& AArshinov::ALGEBRUH
	}; const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

namespace {
	const AArshinov::MenuItem* const matan_children[] = {
		&AArshinov::MATAN_GO_BACK,
		&AArshinov::DIFF,
		&AArshinov::INTEGRAL
	}; const int matan_size = sizeof(matan_children) / sizeof(matan_children[0]);
}

const AArshinov::MenuItem AArshinov::ALGEBRUH = { "2 - Хочу учиться алгебре!", AArshinov::algebruh,&AArshinov::STUDY };
const AArshinov::MenuItem AArshinov::STUDY_GO_BACK = { "0 - Выйти в главное меню", AArshinov::study_go_back,&AArshinov::STUDY };

const AArshinov::MenuItem AArshinov::STUDY = { "1 - Хочу учиться математике!", AArshinov::study_math,&AArshinov::MAIN, study_children, study_size };
const AArshinov::MenuItem AArshinov::EXIT = { "0 - Как-нибудь в другой раз...", AArshinov::exit, &AArshinov::MAIN };



const AArshinov::MenuItem AArshinov::MATAN = {
	"1 - Хочу изучать математический анализ!", AArshinov::matan, &AArshinov::STUDY, matan_children, matan_size
};
namespace {
	const AArshinov::MenuItem* const main_children[] = {
		&AArshinov::EXIT,
		&AArshinov::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}


const AArshinov::MenuItem AArshinov::DIFF = { "1 - Хочу изучить дифференциальное исчисление!", AArshinov::diff,&AArshinov::MATAN };
const AArshinov::MenuItem AArshinov::INTEGRAL = { "2 - Хочу изучить интегральный анализ!", AArshinov::integral,&AArshinov::MATAN };
const AArshinov::MenuItem AArshinov::MATAN_GO_BACK = { "0 - Вернуться к выбору предметов.", AArshinov::matan_go_back,&AArshinov::MATAN };



const AArshinov::MenuItem AArshinov::MAIN = {
	nullptr, AArshinov::study_math, nullptr, main_children, main_size
};

