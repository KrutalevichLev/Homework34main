#include "logic.h"

void find_smaller_squares(int number){
    cout << "1 ";

    for (int i = 2; i * i <= number; i++) {
        cout << i * i << " ";
    }
}