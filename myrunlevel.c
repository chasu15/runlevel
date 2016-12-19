#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/reboot.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	sync();
	if(argc == 2){

		if(strcmp(argv[1],"0") == 0 )
		{
			reboot(RB_POWER_OFF);
		}
	 	if(strcmp(argv[1],"6") == 0 )
		{
			reboot(RB_AUTOBOOT);
		}
		else 
		{ 
		}
	}
}
