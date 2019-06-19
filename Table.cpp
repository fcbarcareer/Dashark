#include<bits/stdc++.h>
#include<string>
using namespace std;
class Cell 
{
	public:
		Cell(){content="*****";}
  		Cell(string st){this->content=st;}
  		~Cell(){}
  		void change(string st){content=st;}
  		string get(){return content;}
  		void show(){cout<<content<<' ';}
	private:
  		string content;
};
class Table 
{
	public:
		Table(int x=1,int y=1){	
			n=x;m=y;
			for (int i=0;i<10;i++) for (int j=0;j<10;j++) cells[i][j].change("*****");
		}
		void show(){for (int i=1;i<=n;i++) {for (int j=1;j<=m;j++) cells[i][j].show();cout<<endl;}}
		void addRow()
		{
			n++;
		}
		void delRow(int x)
		{
  			for (int i=x;i<n;i++) for (int j=1;j<=m;j++) cells[i][j].change(cells[i+1][j].get());
  			n--;
		}
		void addColumn()
		{
			m++;
		}
		void delColumn(int x)
		{
			for (int i=1;i<=n;i++) for (int j=x;j<m;j++) cells[i][j].change(cells[i][j+1].get());
			m--;
		}
		void set(int i,int j,string x)
		{
			cells[i][j].change(x);
		}
		void set(int i,int j,int x)
		{
			string t;t=std::to_string(x);
			set(i,j,t);
		}
	private:
  		Cell cells[10][10];
  		int n,m;
};
int main() 
{
	Table tb;
	tb.show();
	tb.addRow();
	tb.show();
	tb.addColumn();
	tb.show();
	Table tb1(5,5);
	tb1.show();
	tb1.set(1,1,30);
	tb1.set(2,2,"hello");
	tb1.show();
	tb1.delRow(1);
	tb1.show();
	tb1.delColumn(1);
	tb1.show();
	return 0;
}
