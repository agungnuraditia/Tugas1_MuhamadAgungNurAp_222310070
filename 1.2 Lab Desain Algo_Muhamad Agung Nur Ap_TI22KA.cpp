#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compareString(const string& a, const string& b) {
    return a < b;
}

int main() {
    int numBooks;
    cout << "Masukkan jumlah buku: ";
    cin >> numBooks;
    cin.ignore(); // Mengabaikan karakter newline (\n)

    vector<string> books;
    for (int i = 0; i < numBooks; ++i) {
        string title;
        cout << "Masukkan judul buku ke-" << i + 1 << ": ";
        getline(std::cin, title);
        books.push_back(title);
    }

    sort(books.begin(), books.end(), compareString);

    cout << "\nBuku-buku yang diurutkan secara ascending berdasarkan alfabet:\n";
    for (const string& book : books) {
        cout << book << std::endl;
    }

    return 0;
}