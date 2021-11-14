#include <stdio.h>
#include <string.h>

float averageScore (float toan, float van);
int main() {
	char name[50];
	float toan,van,trungbinh;
	printf ("Nhap ho ten: ");
	fgets(name,sizeof(name),stdin);
	name[strlen(name)-1] = '\0';
	printf ("Nhap diem toan: ");
	scanf ("%f",&toan);
	printf ("Nhap diem van: ");
	scanf ("%f",&van);
	printf ("Diem trung binh hai mon toan va van cua %s la: %.2f",name,averageScore(toan,van));
	return 0;
}

float averageScore (float toan, float van) {
	return (toan+van)/2;
}
