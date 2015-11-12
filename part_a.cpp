#include <iostream>
using namespace std;

int* read_into_array(int size) {
    int* array = new int[size];

    cout << "Enter " << size << " integers to be added to an array.\n";

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        array[i] = value;
    }

    return array;
}

void print_array(int *array, int size) {
    cout << '[';
    for (int i = 0; i < size; i++) {
        cout << array[i];
        if (i != (size - 1)) {
            cout << ' ';
        }
    }
    cout << ']' << '\n';
}

void sum_and_product(int size) {
    int* a0 = read_into_array(size);
    int* a1 = read_into_array(size);

    int* sum = new int[size];
    int* product = new int[size];

    for (int i = 0; i < size; i++) {
        sum[i] = a0[i] + a1[i];
        product[i] = a0[i] * a1[i];
    }

    cout << "Array 1\n";
    print_array(a0, size);
    delete []a0;

    cout << "Array 2\n";
    print_array(a1, size);
    delete []a1;

    cout << "Sum Array\n";
    print_array(sum, size);
    delete []sum;

    cout << "Product Array\n";
    print_array(product, size);
    delete []product;
}

int main(int argc, char** argv) {
    sum_and_product(10);
    return 0;
}
