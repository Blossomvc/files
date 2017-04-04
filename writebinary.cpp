#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
   ofstream file2 {"abc.bin" , ios::binary};
   if (file2)
   {
	   file2.write(reinterpret_cast<char*> (&a),sizeof(a));
	   file2.write(reinterpret_cast<char*> (&b),sizeof(b));
	   file2.write(reinterpret_cast<char*> (&c),sizeof(c));

	   cout<<endl<<endl;
	}
	else
	{
		cout<<"Error opening abc.bin";
	}
	
	file2.close();
	
 
   return 0;
}
