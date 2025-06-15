#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "menu_routines.h"
#include "notes_calculator.h"

int main(void)
{	
	bool is_running = true;
	
	while (is_running)
	{	
		int menu_option = menu();

		switch (menu_option)
		{
			case 1:
				int total = get_total();
				double my_average = get_average(total);
				classify_student(my_average);
				pause();
				break;
			case 2:
				is_running = false;
				system("clear");	
				break;
			default:
				puts("Opção inválida...");
				pause();
				break;
		}
	}

	return 0;
}
