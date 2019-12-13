#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
class icecream
{
	int a;
	public:
		void master()
		{
			cout<<"------------------------------------------------LOVELY ICEBERG--------------------------------------------------\n";
			cout<<"\t\t\t\t\t\twelcomes you\t\t\t\t\n";
			cout<<"->choose which type of icecream you want\n";
				cout<<"->types of icecreams are followed by\n";
			cout<<"press\n1 for cone icecream\n2 for bar\n3 for cup icecream\n4 for ball ice cream\n\n";
			cin>>a;
			switch(a)
			{
				case 1:
					   cone();
					break;
				case 2:
					   bar();
					break;
					
				case 3:
					   cup();
					break;
				case 4:
				       ball();
					break;
				case 5:
						goback();
					break;
					default:
						cout<<"wrong choice";
			}
		}
		void cone()
		{
			int temp1,n,i;
			double gst,cost=0;
			double total;
			char name[10];
			cout<<"->enter the flavour of cone icecream do you want to buy\n";
			cout<<"->the flavours of icecream are followed by following flavours\n";
           char s;
           ifstream out;
           out.open("ca1.txt");
           s=out.get();
           while(!out.eof())
           {
           	cout<<s;
           	s=out.get();
		   }
		   out.close();
			cout<<"enter\n1 for strawberry\n2 for butterscotch\n3 for vanila\n4 for chocolate\n5 for mango\n6 for grape\n7 for pineapple\n";
			cin>>temp1;
			switch(temp1)
			{
				case 1:
					cout<<"strawberry\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=30*n;
					cout<<"the cost is="<<cost<<endl;
					void display();
					break;
				case 2:
					cout<<"you have choosen butterscotch flavour\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=40*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 3:
					cout<<"vanila\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=35*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 4:
					cout<<"chocolate\n";
					cout<"you have choosen chocolate flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*40;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 5:
					cout<<"mango\n";
					cout<<"you have choosen mango flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*25;
					cout<<"the total cost is= "<<cost<<endl;
					break;
				case 6:
					cout<<"grape\n";
					cout<<"you have choosen grape flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*28;
					cout<<"the total cost is="<<cost<<endl;;
					break;
				case 7:
					cout<<"pineapple\n";
					cout<<"you have choosen pineapple flavour\n";
					cout<<"enter the number of icecreams you want to buy\n";
					cin>>n;
					cost=n*33;
					cout<<"total cost is="<<cost<<endl;
					break;
				default:
					cout<<"--->YOU HAVE CHOOSEN A FLAVOUR WHICH IS NOT AVAILABLE\n";
					cout<<"--->SORRY FOR THE INCONVINIENCE OCCURED\n";
					exit(0);
			
				break;
				
				
			}
cout<<"enter name of the costumer\n";
			cin>>name;
		system("CLS");
gst=cost*5/100;
total=cost+gst;
cout<<"----------------------RECEIPT       -----------------------\n";
cout<<"----------------------LOVELY ICEBERG-----------------------\n\n\n";
	cout<<"name of the costumer is: "<<name<<endl;
cout<<"number of items ordered :"<<n<<endl;
cout<<"gst applied is :"<<gst<<endl;
cout<<"total bill to be paid is :"<<total<<endl;
cout<<"\n\n--------------------------THANK YOU------------------------\n";
cout<<"--------------------------VISIT AGAIN----------------------\n";
goback();
		}
		void bar()
		{
			int temp2,n;
			int cost=0,gst,total;
			char name[10];
			cout<<"enter the flavour of con icecream you want\n";
			cout<<"the flavours and prices are followed by\n";
		 char s;
           ifstream out;
           out.open("ca2.txt");
           s=out.get();
           while(!out.eof())
           {
           	cout<<s;
           	s=out.get();
		   }
		   out.close();
				cout<<"enter\n1 for strawberry\n2 for butterscotch\n3 for vanila\n4 for chocolate\n5 for mango\n6 for grape\n7 for pineapple\n";
			cin>>temp2;
			switch(temp2)
			{
				case 1:
					cout<<"strawberry";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=10*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 2:
					cout<<"butterscotch\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=20*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 3:
					cout<<"vanila";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=15*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 4:
					cout<<"chocolate\n";
					cout<"you have choosen chocolate flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*13;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 5:
					cout<<"mango\n";
					cout<<"you have choosen mango flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*12;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 6:
					cout<<"grape\n";
					cout<<"you have choosen grape flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*17;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 7:
					cout<<"pineapple\n";
					cout<<"you have choosen pineapple flavour\n";
					cout<<"enter the number of icecreams you want to buy\n";
					cin>>n;
					cost=n*14;
					cout<<"total cost is="<<cost<<endl;
					break;
				default:
					cout<<"---> YOU HAVE ENTERED A FLAVOUR WHICH IS NOT AVAILABLE\n";
					cout<<"---> SORRY FOR THE INCONVINIENCE OCCURED";
					exit(0);
					break;
	    	}
	    	cout<<"enter name of the costumer\n";
	    		cin>>name;
			system("CLS");
	    	gst=cost*5/100;
total=cost+gst;
cout<<"----------------------RECEIPT       -----------------------\n";
cout<<"----------------------LOVELY ICEBERG-----------------------\n\n\n";
	cout<<"name of the costumer is: "<<name<<endl;
cout<<"number of items ordered :"<<n<<endl;
cout<<"gst applied is :"<<gst<<endl;
cout<<"total bill to be paid is :"<<total<<endl;
system("CLS");
cout<<"\n\n--------------------------THANK YOU------------------------\n";
cout<<"--------------------------VISIT AGAIN----------------------\n";
goback();
       }
       int cup()
       {
       	int temp3,n;
       	double cost=0,gst,total;
       	char name[10];
       		cout<<"enter the flavour of con icecream you want\n";
			cout<<"the flavours are followed by\n";
			 char s;
           ifstream out;
           out.open("ca3.txt");
           s=out.get();
           while(!out.eof())
           {
           	cout<<s;
           	s=out.get();
		   }
		   out.close();
			cout<<"enter\n1 for strawberry\n2 for butterscotch\n3 for vanila\n4 for chocolate\n5 for mango\n6 for grape\n7 for pineapple\n";
			cin>>temp3;
			switch(temp3)
			{
				case 1:
					cout<<"strawberry";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=20*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 2:
					cout<<"butterscotch";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=30*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 3:
					cout<<"vanila\n";
					cout<<"you have choosen vanila flavour";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=25*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 4:
					cout<<"chocolate\n";
					cout<"you have choosen chocolate flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*22;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 5:
					cout<<"mango\n";
					cout<<"you have choosen mango flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*24;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 6:
					cout<<"grape\n";
					cout<<"you have choosen grape flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*23;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 7:
					cout<<"pineapple\n";
					cout<<"you have choosen pineapple flavour\n";
					cout<<"enter the number of icecreams you want to buy\n";
					cin>>n;
					cost=n*21;
					cout<<"total cost is="<<cost<<endl;
					break;
					default:
						cout<<"---> YOU HAVE CHOOSEN A FLAVOUR WHICH IS NOT AVAILABLE\n";
						cout<<"---> SORRY FOR THE INCONVINIENCE OCCURED";
						exit(0);
						break;
	       }
	       cout<<"enter name of the costumer\n";
	       	cin>>name;
			system("CLS");
	       gst=cost*5/100;
total=cost+gst;
cout<<"----------------------RECEIPT       -----------------------\n";
cout<<"----------------------LOVELY ICEBERG-----------------------\n";
	cout<<"name of the costumer is: "<<name<<endl;
cout<<"number of items ordered :"<<n<<endl;
cout<<"gst applied is :"<<gst<<endl;
cout<<"total bill to be paid is :"<<total<<endl;
cout<<"--------------------------THANK YOU------------------------\n";
cout<<"--------------------------VISIT AGAIN----------------------\n";
goback();
	   }
	   int ball()
	   {
	   	int temp4,n;
	   	double cost=0,gst,total;
	   	char name[10];
	   		cout<<"-->enter the flavour of con icecream you want\n";
			cout<<"-->the flavours are followed by\n";
			 char s;
           ifstream out;
           out.open("ca4.txt");
           s=out.get();
           while(!out.eof())
           {
           	cout<<s;
           	s=out.get();
		   }
		   out.close();
			cout<<"enter\n1 for strawberry\n2 for butterscotch\n3 for vanila\n4 for chocolate\n5 for mango\n6 for grape\n7 for pineapple\n";
			cin>>temp4;
			switch(temp4)
			{
				case 1:
					cout<<"strawberry\n";
					cout<<"you have choosen strawberry flavour\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=50*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 2:
					cout<<"butterscotch\n";
					cout<<"you have choosen butterscotch flavour\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=70*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 3:
					cout<<"vanila\n";
					cout<<"you have choosen vanila flavour\n";
					cout<<"enter number of ice creams you want\n";
					cin>>n;
					cost=60*n;
					cout<<"the cost is="<<cost<<endl;
					break;
				case 4:
					cout<<"chocolate\n";
					cout<"you have choosen chocolate flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*55;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 5:
					cout<<"mango\n";
					cout<<"you have choosen mango flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*57;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 6:
					cout<<"grape\n";
					cout<<"you have choosen grape flavour\n";
					cout<<"enter number of icecreams you want\n";
					cin>>n;
					cost=n*63;
					cout<<"the total cost is="<<cost<<endl;
					break;
				case 7:
					cout<<"pineapple\n";
					cout<<"you have choosen pineapple flavour\n";
					cout<<"enter the number of icecreams you want to buy\n";
					cin>>n;
					cost=n*65;
					cout<<"total cost is="<<cost<<endl;
					break;
					default:
						cout<<"---> YOU HAVE CHOOSEN A FLAVOUR WHICH IS NOT AVAILABLE\n";
						cout<<"--->SORRY FOR THE INCONVINIENCE OCCURED\n";
						exit(0);
						break;
	       }
	       cout<<"enter name of the costumer\n";
	       	cin>>name;
			system("CLS");
	       gst=cost*5/100;
total=cost+gst;
cout<<"----------------------RECEIPT       -----------------------\n";
cout<<"----------------------LOVELY ICEBERG-----------------------\n\n\n";
	cout<<"name of the costumer is: "<<name<<endl;
cout<<"number of items ordered :"<<n<<endl;
cout<<"gst applied is :"<<gst<<endl;
cout<<"total bill to be paid is :"<<total<<endl;
cout<<"\n\n--------------------------THANK YOU------------------------\n";
cout<<"--------------------------VISIT AGAIN----------------------\n";
goback();
	   }
	   

void goback()
{
	int opt;
	cout<<"Press 1 For MainMenu :"<<endl;
	cout<<"Press 2 For Exit :"<<endl;
	cin>>opt;
	switch(opt)
	{
		case 1:master();
				break;
		case 2:exit(1);
				break;
		default:cout<<"Oops Invalid Entry"<<endl<<"Restarting"<<endl;
				master();
	}
}
};
int main()
{
	icecream w;
	w.master();
}
