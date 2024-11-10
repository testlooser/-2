#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c);

int main() {
	double a, b, c;
	printf("�����������߶εĳ��ȣ�a b c��:\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a) {

		if (a == b && b == c) {
			printf("�ȱ�������\n");
		} else if (a == b || b == c || a == c) {
			printf("����������\n");
		} else {
			printf("���ȱ�������\n");
		}

		double area = calculateArea(a, b, c);
		printf("���������: %.2f\n", area);
	} else {
		printf("������������\n");
	}
	return 0;
}
double calculateArea(double a, double b, double c) {
	double s = (a + b + c) / 2.0;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}
