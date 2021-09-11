/*Materi kali ini tentang fungsi return

fungsi return biasa ditaruh di sebekum fungsi main()*/

/*Fungsi tentang kuadrat(square) dari parameter & sum*/
#include <iostream>
int Square_Function (int Operator_Input_Kuadrat) {
  int Operator_Persamaan_Kuadrat;
  Operator_Persamaan_Kuadrat = (Operator_Input_Kuadrat * Operator_Input_Kuadrat);
  return Operator_Persamaan_Kuadrat;
}

/*Multi variabel*/

int Addition_Function (int Addition_Operator_a, int Addition_Operator_b) {
  int Operator_Persamaan_Tambah;
  Operator_Persamaan_Tambah = (Addition_Operator_a + Addition_Operator_b);
  return Operator_Persamaan_Tambah;
}

void Display_Text_Function(int Input_From_Cin ) {
  std::cout << "This is an result from void function " << Input_From_Cin << "\n" << std::endl;
  /*No return*/
}

int main() {
  int Hasil_Persamaan_Kuadrat;
  int User_Input_Persamaan_Kuadrat;
  int Addition_Operator_b;
  int Addition_Operator_a;
  int Hasil_Persamaan_Tambah;
  std::cout << "Masukan digit yang akan di-kuadratkan: " << std::endl;
  std::cin >> User_Input_Persamaan_Kuadrat;
  Hasil_Persamaan_Kuadrat = Square_Function(User_Input_Persamaan_Kuadrat);
  std::cout << "Hasil persamaan kuadrat dari digit yang anda masukan adalah " << Hasil_Persamaan_Kuadrat << "\n" <<  std::endl;
  Display_Text_Function(Hasil_Persamaan_Kuadrat);
  std::cout << "Operator persamaan tambah \n" << std::endl;
  std::cout << "Masukan digit variabel a " << std::endl;
  std::cin >> Addition_Operator_a;
  std::cout << "Masukan digit variabel b" << std::endl;
  std::cin >> Addition_Operator_b;
  Hasil_Persamaan_Tambah = Addition_Function(Addition_Operator_a, Addition_Operator_b);
  std::cout << "Hasil pertambahan dari digit yang anda masukan adalah " << Hasil_Persamaan_Tambah << std::endl;
  std::cin.get();
  return 0;
}