/* DO NOT MODIFY THIS FILE! */
#include <stdio.h>
#include "temp_struct.h"

int main() {
	struct temps test = {250,-250,-250,250};
	printf("%d", sizeof(test)); /* Expected output: 8 */

	return 0;
}
