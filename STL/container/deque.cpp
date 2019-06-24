#include <bits/stdc++.h>
using namespace std;

/** *
 * CHEAT SHEET
 * 
 * INITIALIZING
 * deque(size) : buat vector sebesar size
 * deque(list) : buat vector dengan isi list
 * 
 * INSERTION
 *** push_back : Masukin belakang
 *** push_front : Masukin depan
 *** insert : Masukin data (HArus muat Capacitynya)
 * assign (* timpa)
 * Emplace : Tempatin di  sebelum elemen yg ditunjuk
 * Emplace_<front|back> : mirip push
 * 
 * ERASURE
 *** pop_front
 *** pop_back : Buang ekor
 *** erase : BUang (O(n))
 *** clear : Buang semua
 * 
 * IDENTITAS
 *** size : Ukuran
 * resize : " (Ubah size)
 * 
 * Lokasi
 *** at, [] : Data ke-
*/

void print(deque<int> &data)
{
    for (int x : data)
        cout << x << " ";

    cout << endl;
}

int main()
{
    // INIT
    deque<int> d, d1(10), d2({1, 2, 3, 4, 5});

    // INSERTION
    d.push_back(12);
    d.push_front(19);
    d.push_back(3);
    d.push_front(-1);
    print(d);

    d.insert(d.begin() + 1, {19, 20, 21});
    print(d);

    d.assign({999});
    print(d);

    cout << endl;
    d.insert(d.begin(), {1, 2, 3, 4, 5, 6, 7});
    print(d);
    d.emplace(d.begin() + 2, 12);
    print(d);

    d.emplace_back(9999);
    d.emplace_front(-9999);
    print(d);

    // ERASURE
}