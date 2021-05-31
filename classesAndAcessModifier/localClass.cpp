//     #include<iostream.h>
//     #include<conio.h>
//     using namespace std;

// //  Example of Local Class

//     int a = 111;

//     void show()
//     {
// 	 class ABC
// 	 {
// 	      int  a,b;

// 	    public:
// 	      friend void show();
// 	      void setdata( int  m, int  n)
// 	      {
// 		   a = m;
// 		   b = n;
// 	      }
// 	      void display()
// 	      {
// 		   cout<<"\n\n\t A = "<<a<<" & B = "<<b<<" Global A = "<<::a;
// 	      }
// 	 };
// 	 ABC   X;

// 	 X.setdata( 11, 22);
// 	 cout<<"\n\t X.a = "<<X.a<<" & X.b = "<<X.b;

// 	 X.setdata( 44, 55);
// 	 X.display();
//     }

//     int main()
//     {

// 	 show();

//     }