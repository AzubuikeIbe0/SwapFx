#include "swapFx.h"

int main()
{
	swapFx S;
	int a;
	int b;
	
	S.displaySwapBefore(a, b);
	S.inputSwap(a, b);
	S.displaySwapBefore(a, b);
	S.swapFxp(a, b);
	S.displaySwapAfter(a, b);

	return 0;
}

//An Example of Pass By Reference
