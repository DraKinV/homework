#include <stdio.h>

int sum (int x,int n);
int power (int x,int n);

int main () {
	int n,x;
	printf ("Nhap x: ");
	scanf ("%d",&x);
	printf ("Nhap n: ");
	scanf ("%d",&n);
	printf ("Ket qua: %d",sum(x,n));
	return 0;
	
}

int sum (int x,int n) {
	int reusult = x;
	for (int i=2;i<=n;i++) {
		reusult += power(x,i);
	}
	return reusult;
}

int power (int x,int n) {
	int result = x;
	for (int i=2;i<=n;i++) {
		result*=x;
	}
	return result;
 }


