#include <iostream>;
#include <cmath>;
using namespace std;
double tochka1 = 0.0;
double tochka2 = 0.0;
double peres1 = 0.0;
double peres2 = 0.0;
double parabola(double x) // y = x^2-3x
{
return (pow(x, 2) - 3 * x);
}
double pryamaya(double x) // y = x
{
return x;
}
double peresechenie( double parabola(double), double
pryamaya(double)) {
int count = 0;
for (double i = -10.; i < 10.; i += 1.0 ) {
if ((count == 1) && (abs(parabola(i) -
pryamaya(i)) <= 0.01)) {
tochka2 = i;
break;
}
if ((count == 0) && (abs(parabola(i) -
pryamaya(i)) <= 0.01)) {
tochka1 = i;
count += 1;
}
}
return 0;
}
double peresechenie(double parabola(double), double y = 0.)
{
int count = 0;
for (double i = -10.; i < 10.; i += 1.0) {
if ((count == 1) && (abs(parabola(i) - y) <=
0.01)) {
peres2 = i;
break;
}
if ((count == 0) && (abs(parabola(i) - y) <=
0.01)) {
peres1 = i;
count += 1;
}
}
return 0;
}
double pervoobraznaya(double x) {
return (2 * pow(x, 2) - pow(x, 3) / 3);
}
double integrir() {
peresechenie(parabola, pryamaya);
return pervoobraznaya(tochka2) -
pervoobraznaya(tochka1);
}
int main() {
setlocale(LC_ALL, "Russian");
cout << "Площадь - " << integrir() << endl;
peresechenie(parabola, 0.0);
cout << "Пересечение графиков - " << tochka1 << "; ";
cout << tochka2 << endl;
cout << "Пересечение параболы с x - " << peres1 << ";
";
cout << peres2 << endl;
}
