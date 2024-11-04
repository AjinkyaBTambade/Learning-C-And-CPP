#include <iostream>
using  namespace std;
  
//Declare function Pointer
void (*ptrFn) ();

 void show(){
 	printf("Hello Transflower using Show () \n");
 }

 void display(){
 	printf("Hello Transflower  using display ()\n");
 }

int main(int argc, char** argv) {
	printf("Hello from Main function\n");	
	int * ptr;
	int * ptr_node=NULL;	
	show();	
	ptrFn=show;		
	ptrFn();
	return 0;
}