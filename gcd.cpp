#include<iostream>
using namespace std;
class Number
{
public:
	int x;
	Number(int t=0){x=t;}
	void show(){std::cout<<x<<endl;}
	Number maxDivisor(Number u);
//	Number 
};
Number Number::maxDivisor(Number u)
{
	if (!u.x) {Number t(x);return t;}
	else {Number t(x%u.x);return u.maxDivisor(t);}
}
int main() {

    int n, n1, n2;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1), no2(n2);

        Number no3 = no1.maxDivisor(no2);  //最大公约数

        no3.show();

    }

}
