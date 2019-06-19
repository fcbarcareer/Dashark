#include<bits/stdc++.h>
using namespace std;

class Number {
	public:
		Number(int x):n(x) {}
		Number(const Number&x):n(x.n) {}
		~Number(){}
		bool isPrime() 
		{
			if (n==1) return false;
			for(int i=2;i*i<=n;i++)	if(n%i==0) return false;
			return true;
		}
	private:
		int n;
};
class SuperPrime : public Number 
{
	public:
		SuperPrime(int x):Number(x),nn(x){}
		~SuperPrime(){}
		Number getsum()
		{
			int tot=0,t=nn;
			while(t) tot+=t%10,t/=10;
			return Number(tot);
		}
		Number getmult()
		{
			int tot=1,t=nn;
			while(t) tot*=t%10,t/=10;
			return Number(tot);
		}
		Number getsquare()
		{
			int tot=0,t=nn;
			while(t) tot+=(t%10)*(t%10),t/=10;
			return Number(tot);
		}
	private:
		int nn;
};

int main() {
	SuperPrime sp(113);
	if(sp.isPrime()) {
		printf("sp is a prime\n");
	}
	if(sp.getsum().isPrime()) {
		printf("sp'sumbit is a prime\n");
	}
	if(sp.getmult().isPrime()) {
		printf("sp'multibit is a prime\n");
	}
	if(sp.getsquare().isPrime()) {
		printf("sp'squareSumBit is a prime\n");
	}
}
