#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

/** *
 * CHEAT SHEET
 * 
 * INITIALIZING
 * vector(size) : buat vector sebesar size
 * vector(list) : buat vector dengan isi list
 * 
 * INSERTION
 * push_back : Masukin belakang
 * insert : Masukin data (HArus muat Capacitynya)
 * assign (* timpa)
 * Emplace : Tempatin di  sebelum elemen yg ditunjuk
 * 
 * ERASURE
 * pop_back : Buang ekor
 * erase : BUang
 * clear : Buang semua
 * 
 * IDENTITAS
 * size : Ukuran
 * reserve : Realokasi memori
 * 
 * Lokasi
 * at, [] : Data ke-
*/

int main()
{
    vector<int> data;

    // Memasukan data ke vector
    data.push_back(12);
    data.push_back(22);
    data.push_back(67);

    // Ukuran vector
    cout << data.size() << endl;

    // Iterator (Tipe data vector<T>::iterator)
    for (vector<int>::iterator i = data.begin(); i < data.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // Mencetak Vektor
    for (int x : data)
        cout << x << " ";

    cout << endl;

    // BUang ujung
    data.pop_back();
    for (int x : data)
        cout << x << " ";

    cout << endl;

    data.push_back(14);
    data.push_back(92);
    data.push_back(433);

    for (int x : data)
        cout << x << " ";

    cout << endl;

    // Hapus
    data.erase(data.begin() + 1);
    for (int x : data)
        cout << x << " ";

    cout << endl;

    data.erase(data.begin() + 1, data.begin() + 3); // [begin,end); Hapus 1-2
    for (int x : data)
        cout << x << " ";

    cout << endl
         << endl;

    data.clear(); // Buang data

    data.push_back(2);
    data.assign({1, 2, 3, 4, 5, 6}); // Timpa

    for (int x : data)
        cout << x << " ";
    cout << endl;

    // Masukin ditengah O(n)
    data.insert(data.begin() + 1, 12);
    for (int x : data)
        cout << x << " ";

    cout << endl;

    // Concat
    vector<int> v1({1, 2, 3}), v2({4, 5, 6, 7});
    v1.reserve(v1.size() + v2.size());
    v1.insert(v1.end(), v2.begin(), v2.end());
    for (int x : v1)
        cout << x << " ";

    cout << endl;
    data.emplace(data.begin(), 1);
    for (int x : data)
        cout << x << " ";
}