#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c);

int main() {
	double a, b, c;
	printf("请输入三条线段的长度（a b c）:\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a) {

		if (a == b && b == c) {
			printf("等边三角形\n");
		} else if (a == b || b == c || a == c) {
			printf("等腰三角形\n");
		} else {
			printf("不等边三角形\n");
		}

		double area = calculateArea(a, b, c);
		printf("三角形面积: %.2f\n", area);
	} else {
		printf("不构成三角形\n");
	}
	return 0;
}
double calculateArea(double a, double b, double c) {
	double s = (a + b + c) / 2.0;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}
