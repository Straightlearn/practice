#include <stdio.h>
#include <stdlib.h>
typedef char spec;
typedef struct PHONE PHONE;

/**
 * struct: PHONE
 * typedef char spec
 * declaration for struct PHONE
 * 
 */
struct PHONE
{
	spec *model;
	spec *sim;
	spec *display_Type;
	spec *OS;
	spec *card_slot;
	spec *internal_storage;
	spec *sensor;
	spec *battery_type;
};

/*typedef struct PHONE PHONE
 * main function
 */
int main(void)
{
	int option;

	PHONE TECHNO;
	TECHNO.model="spark4";
	TECHNO.sim="Dual sim";
	TECHNO.display_Type="IPS LCD";
	TECHNO.OS="Android 9.0 pie,Hios 5.5";
	TECHNO.card_slot="macrosDXC";
	TECHNO.internal_storage="32GB 2GB RAM"; 	  TECHNO.sensor="finger print,proximity";
	TECHNO.battery_type="Li-Lon 4000MAH";

	PHONE INFINIX;
	INFINIX.model="Hot 8";
	INFINIX.sim="Dual sim";
	INFINIX.display_Type="IPS LCD";
	INFINIX.OS="Android 9.0 pie,Xos";
	INFINIX.card_slot="macrosDXC";
	INFINIX.internal_storage="32GB 2GB RAM";
	INFINIX.sensor="f8nger print,compass";
	INFINIX.battery_type="LI-PO 5000MAH";
	

	while(1){
	printf("\tWELCOME TO MYSPEC.COM\n\n");
	printf("[1] Techno spark 4 specification\n");
	printf("[2] Infinix hot 8 specification\n");
	printf("[0] end program\n");
	scanf("%d",&option);

		
	switch(option)
	{
	case 1:
	printf("\tTECHNO SPARK 4 SPECIFICATION\n\n");
	printf(" sim: %s\n",TECHNO.sim);
	printf(" Display type: %s\n",TECHNO.display_Type);
	printf(" Operating system: %s\n",TECHNO.OS);
	printf(" Card slot: %s\n",TECHNO.card_slot);
	printf(" Internal storage: %s\n",TECHNO.internal_storage);
	printf(" Sensor: %s\n",TECHNO.sensor);
	printf(" Battery capacity: %s\n",TECHNO.battery_type);
	break;

	case 2:
	printf("\tINFINIX HOT 8 SPECIFICATION\n\n");
	printf(" sim: %s\n",INFINIX.sim);
	printf(" Display type: %s\n",INFINIX.display_Type);
	printf(" Operating system: %s\n",INFINIX.OS);
	printf(" Card slot: %s\n",INFINIX.card_slot);
	printf(" Internal storage: %s\n",TECHNO.internal_storage);
	printf(" Sensor: %s\n",INFINIX.sensor);
	printf(" Battery capacity: %s\n",TECHNO.battery_type);
	break;
	case 0:
	exit(0);
	break;
	default: printf(" Please input a valid number\n");
	}
	}
	return (0);
}

