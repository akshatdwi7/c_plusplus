#include <iostream>


using namespace std;

int main() {
    const int rows = 3;
    const int columns = 3;

    string brands[rows][columns] = {
        {"Nike", "Adidas", "Puma"},
        {"Reebok", "Converse", "Vans"},
        {"New Balance", "Under Armour", "Asics"}
    };

    // Print the brands
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << brands[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

}