#include <iostream>
using namespace std;
const int DIM = 5;

int main() {
    int numbers[DIM];
    int i, j;
    int counter = 0;

    cout << "Program that calculates the median of n distinct numbers." << endl << endl;

    for(i = 0; i < DIM; i++) {
        cout << "Enter data number " << i + 1 << " ";
        cin >> numbers[i];
    }

    i = 0;

    do {
        counter = 0;
        /*
        for(j = 0; j < DIM; j++) {
            if(numbers[i] > numbers[j]) {
                counter++;
            }
        }
        */
        j = 0;
        while((j < DIM) && (counter <= (DIM - 1)/2)) {
            if(numbers[i] < numbers[j]) {
                counter++;
            }
            j++;
        }
        i++;
    } while ((counter != (DIM - 1)/2) && (i < DIM));

    cout << endl << "The median of the set of " << DIM << " numbers is " << numbers[i-1] << endl << endl;
    
    return 0;
}