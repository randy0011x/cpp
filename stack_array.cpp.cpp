//TASK 1 STACK

#include<iostream>
#include<stdlib.h>
int top=-1,i;
using namespace std;
class stack
{
	int data,a[10],temp;
	public:
		void push()
		{
			if(top>10)
			{
				cout<<"Overflow";
			}
			else
			{
			++top;
			cout<<"Enter data"<<endl;
			cin>>data;
			a[top] = data;
		
		}
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"underflow";
			}
			else
			{
			
			temp = a[top];
			top--;
		}
		}
		void display()
		{
			for(i=top;i>=0;i--)
			{
				cout<<a[i]<<endl;
			}
		}
};
int main()
{
	stack s;


	int ch;
	do
	{
		cout<<"enter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				s.push();
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				break;
			default:
				cout<<"Invalid";
	}
}while(ch!=4);
}
