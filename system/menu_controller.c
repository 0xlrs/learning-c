#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "menu_controller.h"
#include "calculate_average.h"

void menu(void)
{	
	bool is_running = true;

	while(is_running)
	{	
		int total_students = students();
		calculate_averages(total_students);
		
		int menu_option = 0;

		do
		{
			printf(
				"\nDeseja reiniciar o programa?"
				"\n[1 para sim / 2 para não] > "
			);
		
			scanf("%d", &menu_option);
		} while (menu_option < 1 || menu_option > 2);

		switch (menu_option)
		{
			case 1:	
				system("clear");
				break;
			default:
				is_running = false;
				break;
		}
	}
}
