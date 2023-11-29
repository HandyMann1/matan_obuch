#pragma once

#include "menu.h"

namespace AArshinov {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);
	
	const MenuItem* study_lim_koshi(const MenuItem* current);
	const MenuItem* study_lim_heine(const MenuItem* current);
	const MenuItem* study_peano(const MenuItem* current);
	const MenuItem* study_arhimed(const MenuItem* current);
	const MenuItem* study_go_back(const MenuItem* current);
}