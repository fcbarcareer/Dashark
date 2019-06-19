#include <iostream>
using namespace std;
class HanXin
{
public:
	int n3,n5,n7;
	void line3(int x){n3=x;}
	void line5(int x){n5=x;}
	void line7(int x){n7=x;}
	void showMany()
	{
		for (int i=10;i<=100;i++) if (i%3==n3&&i%5==n5&&i%7==n7) {cout<<i<<endl;return;}
		cout<<"Impossible"<<endl;
	}
};
int main() {

    int n, n1, n2,n3;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //??

        hx.line3(n1);  //3???

        hx.line5(n2);   //5???

        hx.line7(n3);   //7???

        hx.showMany();

    }

}
