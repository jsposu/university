#include<iostream>
#include<random>

using namespace std;

int print_random(int ran1, int ran2){
	random_device dr;
	mt19937 gen(dr());
	uniform_int_distribution<> dis(ran1, ran2);
	int numero_aleatorio = dis(gen);
	return numero_aleatorio;
}

/* LIBRARY TO GENERETA A RANDOM NUMBER

TO USE: 

EXAMPLE

INT VALUE = PRINT_RANDOM(1, 10)

*/