#include <iostream>
using namespace std;

/*int main()
{
	int n;
	cout << "type a number"<< endl;
	cin >> n;

	cout << "hello world" << endl;
	for (int i = 0; i < n; i = i + 1) {
		cout << "hello world" << endl;
	}
	int e = 0;
	while (e < n) {
			cout << "hello world" << endl;
			e++;
	}
	int f = 0;
	do {

		cout << "hello world" << endl;
		f++;

	} while (f < n);

	return 0;


}*/
/*
int main()
{
	string name;
	cout << "What is your name" << endl;
	cin >> name;

	int age;
	cout << "How old are you?" << endl;
	cin >> age;

	char gender;
	cout << "Are you male(m) or female(f)" <<endl;
	cin >> gender;

	string adress;
	cout << "What is your adress?" <<endl;
	cin >> adress;

	bool married;
	cout << "Are you married, true(1) or false(0)?" <<endl;
	cin >> married;

	float lenght;
	cout << "How tall are you?" <<endl;
	cin >> lenght;
	}
	*/

int main()
{
	char name;
	printf_s("what is your name?");
	scanf_s("%c", &name, 10);
	printf("%c", name);

	/*
	int age;
	printf_s("How old are you?" );
	scanf_s(" &d", &age, 3);*/

}