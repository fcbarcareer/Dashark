#include <iostream>
using namespace std;
class Number
{
public:
	long long x;
	Number(int a,int b){x=a;}
	void show(){cout<<x<<endl;}
	Number converto(int u)
	{
		Number tt(x/u,10);
		if (!x) return tt;
		Number t=tt.converto(u);
		t.x*=10;
		t.x+=x%u;
		return t;
	}
};
int main() {

    int n, n1, n2;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1, 10);     //n1是10进制正整数

        Number no3 = no1.converto(n2);  //no3是n2进制的正整数

        no3.show();     //输出结果

    }

}
