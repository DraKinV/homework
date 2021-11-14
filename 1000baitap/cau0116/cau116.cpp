#include <stdio.h>

int sum (int n);

int main () {
	int n;
	printf ("Nhap n: ");
	scanf ("%d",&n);
	printf ("Ket qua: %d",sum(n));
	return 0;
	
}

int sum (int n) {
	int reusult = 0;
	for (int i=1;i<=n;i++) {
		reusult += i;
	}
	return reusult;
}
