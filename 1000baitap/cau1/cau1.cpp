#include <stdio.h>

int main () {
	int n,S;
	printf ("Nhap n: ");
	scanf ("%d",&n);
	for (int i=1; i<=n;i++) 
		S+=i;
	printf ("S(n) = %d",S);
	return 0;
}
