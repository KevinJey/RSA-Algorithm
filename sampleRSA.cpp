#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <cmath>
using namespace std;
typedef unsigned char uchar;
typedef unsigned int uint;

uchar Msg[8] = {'a','b','c','d','e','f','g','h'};
uint C_uint[10];
uint Dec[10];
uint pp = 7;
uint qq = 17;

//判断素数
bool judgePrime(uint num){
	for(int k = 2;k <= sqrt(num) ; ++k)
		if(num % k == 0)
			return false;
	return true;
}
//generate a random number between 2 to t-1
uint randGenerateE(uint t){
	uint e = 0;
	srand(time(NULL));
	e = 2+ rand()%(t - 3);
	return e;
}

//get the gcd
void gcd(uint bignum,uint smallnum,uint &maxGcd){
	int temp = 0;
	while(bignum%smallnum){
		tmp = smallnum;
		smallnum = bignum%smallnum;
		bignum = tmp;
	}
	maxGcd = smallnum;
}

//judge the GCD is 1 or something,if it is 1 just both prime
//call it while generate secertKey
bool judgeGcd_1(uint bignum,uint smallnum){
	uint res;
	gcd(bignum,smallnum,res);
	if(res == 1)
		return true;
	else
		return false
}
//模逆
int Moni(uint e,uint model,uint *d){
	uint i;
	uint over = e;
	for(i = 1; i< model;){
		over = over % model;
		if(over == 1){
			*d = i;
			return 1;
		}else{
			if (over + e <= model){
				do{
					i++;
					over +=e;
				}while(over + e<= model);

			}
		}
	
	}
}
int main(){


	return 0;
}
