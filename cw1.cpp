#include <iostream>


int addingTwoNumbers(int a, int b){
	return a+b;
}


float linearEquation(float x, float y, float z){
	
	return (z-y)/x;
}



//Varibales for addingTwoNumbers function
/*
int x;
int z;
*/


//Variables for linear equation
/*
float a,b,c;
*/


int my_number;



int main(){


//Hello world program

//    std::cout<<"Hello world"<<std::endl;



//Adding two numbers and cin usage

/*
std::cout<<"First number: "<<std::endl;
std::cin>>x;
std::cout<<"Second number: "<<std::endl;
std::cin>>z;
std::cout<<"Adding two numbers: "<<addingTwoNumbers(x,z)<<std::endl;
*/


//Solving the linear equation

/*
std::cout<<"Introduce a: "<<std::endl;
std::cin>>a;
std::cout<<"Introduce b: "<<std::endl;
std::cin>>b;
std::cout<<"Introduce c: "<<std::endl;
std::cin>>c;
std::cout<<"Solve of x is: "<<linearEquation(a,b,c)<<std::endl;
*/


//Cin usage, is my_nuber even or odd


std::cout<<"Please introduce your number: "<<std::endl;
std::cin>>my_number;

if(my_number%2==0){
	std::cout<<"Your number is even"<<std::endl;
}
else{
	std::cout<<"Your number is odd"<<std::endl;
}








    return 0;
}
