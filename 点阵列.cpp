#include<iostream>

class DotArray 
{   //点阵对象

//    const int maxcol=5, maxrow=7;

public:

    virtual void showrow(int flag) const
    {
    	if (flag==1) printf("*****");
    	if (flag==2) printf("*   *");
    	if (flag==3) printf("*    ");
    	if (flag==4) printf("    *");
    }

};

class DA0 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row==1||row==7) showrow(1);
		else showrow(2);
	}
};

class DA1 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		showrow(4);
	}
};

class DA2 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row%3==1) showrow(1);
		else if (row<4) showrow(4);else showrow(3);
	}
};

class DA3 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row%3==1) showrow(1);
		else showrow(4);
	}
};

class DA4 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row==4) showrow(1);
		else if (row<4) showrow(2);else showrow(4);
	}
};

class DA5 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row%3==1) showrow(1);
		else if (row<4) showrow(3);else showrow(4);
	}
};

class DA6 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row%3==1) showrow(1);
		else if (row<4) showrow(3);else showrow(2);
	}
};

class DA7 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row==1) showrow(1);
		else showrow(4);
	}
};

class DA8 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row%3==1) showrow(1);
		else showrow(2);
	}
};

class DA9 : public DotArray {   //0的点阵

public:
	void print(int row)
	{
		if (row%3==1) showrow(1);
		else if (row<4) showrow(2);else showrow(4);
	}
};

class Printer {

private:

    int num,c;

    int das[5]; //最多4个点阵对象

public:
	Printer(int x){num=x;c=0;printf("%d:\n",x);}
    void split(){while (num) das[++c]=num%10,num/=10;}

    void print()
    {
    	DA0 da0;DA1 da1;DA2 da2;DA3 da3;DA4 da4;
    	DA9 da9;DA8 da8;DA7 da7;DA6 da6;DA5 da5;
    	for (int j=1;j<=7;j++)
    	{
	    	for (int i=c;i>=1;i--)
   		 	{
				if (das[i]==0) da0.print(j);
				if (das[i]==1) da1.print(j);
				if (das[i]==2) da2.print(j);
				if (das[i]==3) da3.print(j);
				if (das[i]==4) da4.print(j);
				if (das[i]==5) da5.print(j);
				if (das[i]==6) da6.print(j);
				if (das[i]==7) da7.print(j);
				if (das[i]==8) da8.print(j);
				if (das[i]==9) da9.print(j);
				printf("  ");
			}
			putchar('\n');
		}
	}
};

int main() {

	freopen("in.txt","r",stdin);
    int n,n1;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1;

        Printer p(n1);

        p.split();

        p.print();

    }

    return 0;

}


