#include<bits/stdc++.h>

using namespace std;
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Box
{
    int length, breadth, height;

public:
    Box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    Box(int a, int b, int c)
    {
        length = a;
        breadth = b;
        height = c;
    }
    Box(Box &B)
    {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    long long CalculateVolume()
    {
        return length * breadth * height;
    }
    bool operator<(Box &B)
    {
        if (length < B.length)
        {
            return true;
        }
        else if ((breadth < B.breadth) && (length == B.length))
        {
            return true;
        }
        else if ((height < B.height) && (breadth == B.breadth) && (length == B.length))
        {
            return true;
        }
        else
            return false;
    }
    friend ostream &operator<<(ostream &out, const Box &B);
};

ostream &operator<<(ostream &out, const Box &B)
{
    out << B.length << " " << B.breadth << " " << B.height;
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}