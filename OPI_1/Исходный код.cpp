#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

void main()
{
	int n;
	double  a, b, c, alpha, h, p, s, r;
	const double PI = 2 * acos(0);
    setlocale(LC_ALL,"Russian");
    printf("Меню:\n");
    printf("1 – подсчет площади треугольника по формуле Герона\n");
    printf("2 – подсчет площади тругольника по двум сторонам и углу между ними\n");
	printf("3 – подсчет площади тругольника по двум сторонам и высоте\n");
	printf("4 – подсчет площади тругольника по полупериметру и радиусу вписанной окружности\n");
    printf("5 – выход из программы\n");
    printf("Ваш выбор? \n");   
    cin >> n;
    switch (n) 
    {
        case 1: 
			printf("Введите 3 стороны треугольника\n");
			cin >> a >> b >> c;
			p = (1.0/2)*(a + b + c);
			s = sqrt(p*(p - a)*(p - b)*(p - c));
			printf("Площадь равна %f\n ", s);
			break;
        case 2: printf("Введите две стороны и угол между ними\n");
			cin >> a >> b >> alpha;
			s = (1.0/2) * a * b * sin(alpha * (PI / 180.0));
			printf("Площадь равна %f\n ", s);
			break;
		case 3: printf("Введите две стороны и высоту\n");
			cin >> a >> b >> h;
			s = (1.0/2)* a * b * h;
			printf("Площадь равна %f\n ", s);
		case 4:
			printf("Введите полупериметр и радиус вписанной окружности\n");
			cin >> p >> r;
			s = p * r;
			printf("Площадь равна %f\n ", s);
        case 5: return; 
        default: printf("Heвернoe значение.");
    }
}