#include <iostream>
using namespace std;

int main()
{
	char name[10];
	printf_s("what is your name?");
	scanf_s("%c", &name, 10);
	printf_s("%s", name);

	int age;
	printf_s("How old are you?" );
	scanf_s(" &d", &age, 3);


	char gender[1];
	printf_s("What is your gender, male(m) or female(f)?");
	scanf_s("%c", &gender, 1);

	char adress[20];
	printf_s("Where do you live?");
	scanf_s("%c", &adress, 20);






}