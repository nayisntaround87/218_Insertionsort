#include <iostream>
using namespace std;
int n, arr[20];

void input() {
    while (true) {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}


void insertionSort() {
    int i, j, temp;

    for (i = 1; i <= n - 1; i++) { // step 1
        temp = arr[i]; // step 2

        j = i - 1; // step 3

        while (j >= 0 && arr[j] > temp) // step 4
        {
            arr[j + 1] = arr[j]; // step 4a
            j = j - 1; // step 4b
        }

        arr[j + 1] = temp; //step 5
    }

}


void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; //menampilkan array
       
    }
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan total angka dari elemen yang benar
    cout << endl;
    
}

int main() 
{
    input();
    insertionSort();
    display();

    system("pause");
    return�0;
}







int main()
{
    std::cout << "Hello World!\n";
}

