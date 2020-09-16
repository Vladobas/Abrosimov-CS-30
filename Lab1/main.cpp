#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int number_n){
    int random_number = 0;
    while(random_number <= number_n){
        random_number += rand() % 11;
    }
    return random_number;
}

int main(){
    int number, n, m, counter;
    srand(time(0));
    counter = 0;
    std::cout << "Input n: ";
    std::cin >> n;
    std::cout << "Input m: ";
    std::cin >> m;
    std::cout << "Step_1";
    do{
        number=random(n);
        std::cout << "Number=" << number << std::endl;;
        counter++;
    }while(number % m != 0);
    std::cout << "Step_2" << "\n" << "Iterations: " << counter << std::endl;
    return 0;
}

