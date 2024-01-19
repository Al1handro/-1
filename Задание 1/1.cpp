#include <iostream>

using namespace std;

int i;
int n = 1;
char TB[] = { ' ', 'И', 'Р', 'В', 'Ж', 'Т', 'М', 'Г',
 'Б', 'Э', 'К', 'С', 'О', 'Я', 'Д', 'Ь',
 'П', 'Е', 'Ю', 'Н', 'А', 'З', 'Г', 'Л' };
int main()
{
    setlocale(LC_ALL, "ru");
    for (int i = 1; i < 4; i++) {
        int j;
        for (int j = 1; j < 5; j++) {
            if (i % j == 0) {
                n += 2;
                cout << TB[n] << ' ' << n << endl;
            }
            if (i % j == 1) {
                n += 5;
            }
            if (i % j == 2) {
                n -= 6;
            }
            if (i % j == 3) {
                n *= 2;
            }
        }
    }
}
