#include <stdio.h>

int main () {
	int n;
	float S;
	printf ("Nhap n: ");
	scanf ("%d",&n);
	for (int i=1; i<=n;i++) 
		S+=(float) 1/(2*i);
	printf ("S(n) = %.2f",S);
	return 0;
}
