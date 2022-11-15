#include "getVolumeSurface.h"

void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}

bool isSendable(BOX* box) {
	double size = box->x + box->y + box->z;
	int standard[] = { 60,80,100,120,140,160,180,200 };
	
	//_countof()で配列の最後まで
	for (int i = 0; size <= standard[7]; i++) 
	{
		if (size <= standard[i])
		{
			box->packSize = standard[i];
			return true;
		}
	}
	return false;
}
