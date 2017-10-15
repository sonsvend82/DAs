/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>

uint8_t *minport = 0x680;

int main(void)
{


	
	int test;
	
	
	
	board_init();
	
 test = 5;
	
	
	*minport = 0xaa;
	


	return 0;
}

