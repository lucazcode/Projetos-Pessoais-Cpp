#include <iostream>
#include <array>
#include <locale>

void calculo(long long int p_decimal);

int main(){

  setlocale(LC_ALL, "Portuguese");

  std::cout << "Decimal para Binário\n\n";

  long long int decimal;

  std::cout << "Insira um número decimal: ";
  std::cin >> decimal;

  calculo(decimal);

  system("pause");
  return 0;
} 

void calculo(long long int p_decimal){

  std::cout << '\n';

  long long inicio_decimal = p_decimal;

  std::array<char, 100> arr_resto = {};
  int i = 0;

  while (p_decimal != 1){

    long long int antes_decimal = p_decimal;

    if (p_decimal % 2 == 0){

      p_decimal = p_decimal / 2;

      arr_resto[i] = '0';
    }

    else{

      p_decimal = (p_decimal - 1) / 2;

      arr_resto[i] = '1';
    }

    std::cout << antes_decimal << " / 2 = " << p_decimal << " (resto = " << arr_resto[i] << ")" << '\n';

    i++;
  }

  arr_resto[i] = '1';

  std::cout << "\nDecimal " << inicio_decimal << " em binário: ";

  for(int j=i; j>=0; j--){

    std::cout << arr_resto[j];
  }

  std::cout << '\n';
}

// =)!
