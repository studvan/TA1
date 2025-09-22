#include <iostream>
#include <string>

int main() {
    // Array untuk nama mata pelajaran
    std::string mata_pelajaran[] = {"PU", "PBM", "PPU", "PK", "PM", "LBI", "LBE", "Biologi"};

    // Ukuran array, 8 mata pelajaran
    const int JUMLAH_MAPEL = 8;
    
    // Array untuk menyimpan nilai UTBK
    double nilai_utbk[JUMLAH_MAPEL];
    double total_nilai = 0.0;

    std::cout << "Masukkan nilai UTBK Anda untuk setiap mata pelajaran:" << std::endl;

    // Loop untuk mengisi array dengan nilai dari pengguna
    for (int i = 0; i < JUMLAH_MAPEL; ++i) {
        std::cout << "Nilai " << mata_pelajaran[i] << ": ";
        std::cin >> nilai_utbk[i];
        total_nilai += nilai_utbk[i];
    }

    // Menghitung rata-rata nilai
    double rata_rata = total_nilai / JUMLAH_MAPEL;

    std::cout << "\n----------------------------" << std::endl;
    std::cout << "Rata-rata Nilai UTBK Anda: " << rata_rata << std::endl;
    std::cout << "----------------------------" << std::endl;

    return 0;
}