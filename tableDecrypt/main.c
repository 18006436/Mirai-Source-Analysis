#include <stdio.h>



#include "table.h"
#include "util.h"
#include "includes.h"



int main(int argc, char **args){


	table_init();	
	table_ref_init();

	for(int i = 1; i < TABLE_MAX_KEYS; i++)
	{
		int tbl_val_len;
		table_unlock_val(i);
		
		printf("%s: %s \n", table_ref_retrieve_val(i), table_retrieve_val(i, &tbl_val_len));
		
		table_lock_val(i);

	}
	return 0;
}
