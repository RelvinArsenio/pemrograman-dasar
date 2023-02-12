#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
  // Perulangan untuk menampilkan jam digital setiap detik
  while (true) {
    // Mendapatkan waktu sekarang
    time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());

    // Mengkonversi waktu sekarang ke dalam format jam:menit:detik
    tm *local_time = localtime(&now);
    cout << put_time(local_time, "%H:%M:%S") << endl;

    // Menunggu satu detik sebelum menampilkan jam digital yang baru
    this_thread::sleep_for(chrono::seconds(1));
    system("cls");
  }

  return 0;
}
