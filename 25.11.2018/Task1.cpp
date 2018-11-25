/* Напишите программу, находящую корни уравнения
2018X +2019Y=78487894 
Перебор является эффективным, так как:
1) мы ограничиваем значения для переменных
2) выражаем x через y (y может принимать только четные значения) */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

unsigned int znach = 78487894;

unsigned int a = 2018;

unsigned int b = 2019;

unsigned int n = znach % 2018;

unsigned int xmax = znach / 2018;
unsigned int ymax = znach / 2019;

//cout << a << " " << b;

 for (int y = 2; y <= ymax; y = y + 2) {
 
     unsigned int p = (2019 * y) / 2018;
     
     if (p == n) {
     
     
     double x = (znach - (2019 * y)) / 2018;
     
     
       cout << "System: " << "x = " << x << endl;
       
       cout << "        " << "y = " << y << endl << endl;
             
         }
     
     } 
	
	
	return 0;
}
