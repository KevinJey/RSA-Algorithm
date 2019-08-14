#include <iostream>
#include "BigInt.h"

int main(int argc, char const *argv[])
{
	BigInt p("965020263285415169225506842409"),q("415924872698612520126277439911");
	BigInt N,n,a("1"),b("2");

	BigInt d,e;
	BigInt m,s;

	N = p*q;
	s = gcd(p-a,q-a);
	n = s*((p-a)/s)*((q-a)/s);

	cout << "n: " << n << endl;
	cout << "N: " << N << endl;
	while(1){
		cout << "请输入整数e ： " << endl;
		cin >> e;
		cout << "gcd(e,n): " << gcd(e,n) << endl;

		if(gcd(e,n).values == "1" && (n-e).flag == true){
			d = mod_inverse(e,n);
			cout << "d: " << d <<endl;
			cout << "请输入要加密的字符: " << endl;
			cin >>m ;
			BigInt t;
			cout << "加密:" << mod_fast(m,e,N) << endl;
			cout << "解密：" << mod_fast(mod_fast(m,e,N),d,N) << endl;
		}else{
			cout << "d N 非互素或非1<e<n" <<endl;
		}
	}
	return 0;
}