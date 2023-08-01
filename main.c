#include <stdio.h>

int main() {
    int r, h, d, s;
    

	printf("-----Enter the height of the pattern-----\n");
	scanf("%d", &h);
	printf("\n-----This the butterfly pattern-----\n\n\n");

	for(r = 1; r <= h - 1; r++) {
		printf("\t");
		for(d = 1; d <= r; d++)
			printf("%d ", d);
		for(s = 1; s <= 2 * (h - r); s++)
			printf("  ");
		putchar('\b');
		for(d = r; d >= 1; d--)
			printf(" %d", d);
		putchar('\n');
	}

	for(r = h; r >= 1; r--) {
		printf("\t");
		for(d = 1; d <= r; d++)
			printf("%d ", d);
		for(s = 1; s <= 2 * (h - r); s++)
			printf("  ");
		putchar('\b');
		for(d = r; d >= 1; d--)
			printf(" %d", d);
		putchar('\n');
	}
    return 0;
}