#include <iostream>
using namespace std;

int main() {

	cout << "Welcome to C++ test \n";
	cout << "Use keyboard number for answer \n";
	cout << "Best of luck \n" << endl;

	string Name;

	cout << "Enter your name \n" << endl;
	cin >> Name;

	cout << "\n \n Hi " << Name << ". Lets begin.. \n \n" << endl;

	int a = 0;
	int b = 0;

	a: cout << "1. C++ is a: \n" << endl;
	cout << " 1. General purpose programming language \n 2. Client-side scripting language \n 3. Movie making program \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a + 1; break;
        case 2 : a = a + 0; break;
        case 3 : a = a - 1; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto a;
	}

    b: cout << "2. What is the starting point for a computer program? \n" << endl;
	cout << " 1. First line \n 2. Main function \n 3. From <iostream> \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 1; break;
        case 3 : a = a + 0; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto b;
	}

	c: cout << "3. Which of the following is a C++ compiler? \n" << endl;
	cout << " 1. Console \n 2. GAC \n 3. CodeBlocks \n 4. GNU GCC \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 0; break;
        case 3 : a = a - 1; break;
        case 4 : a = a + 1; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto c;
	}

    d: cout << "4. What should be used to move to a new line? \n" << endl;
	cout << " 1. #include \n 2. endl \n 3. startl \n 4. return \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a + 0; break;
        case 2 : a = a + 1; break;
        case 3 : a = a - 1; break;
        case 4 : a = a + 0; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto d;
	}

    e: cout << "5. Which of the following is true? \n" << endl;
	cout << " 1. Comments are used to confuse programmers \n 2. Single line comment starts with an * (asterisk) \n 3. Comments are ignored by the compiler \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 0; break;
        case 3 : a = a + 1; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto e;
	}

	f: cout << "6. How many times should a data type be mentioned for a variable? \n" << endl;
	cout << " 1. Everywhere the variable is used \n 2. When printing a variable's value \n 3. Only once: when declaring the variable \n 4. When entering variable's value using cin \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 0; break;
        case 3 : a = a + 1; break;
        case 4 : a = a - 1; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto f;
	}

	g: cout << "7. x++ has the same meaning as: \n" << endl;
	cout << " 1. x = x - 4; \n 2. x /= 17; \n 3. x = x + 1; \n 4. x = x + x \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a - 1; break;
        case 3 : a = a + 1; break;
        case 4 : a = a + 0; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto g;
	}

	h: cout << "8. Which choice shows the correct syntax for the if statement in C++? \n" << endl;
	cout << " 1. IF test \n 2. if (test) { } \n 3. if test \n 4. if test { } \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 1; break;
        case 3 : a = a - 1; break;
        case 4 : a = a + 0; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto h;
	}

	j: cout << "9. Which is the right syntax for the while loop? \n" << endl;
	cout << " 1. WHILE bacon <= 5 { cout << ''text''; } \n 2. while bacon <= 5 cout << ''text''; \n 3. while (bacon <= 5) { cout << ''text''; } \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 0; break;
        case 3 : a = a + 1; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto j;
	}

	k: cout << "10. How is a do... while loop different from a while loop? \n" << endl;
	cout << " 1. do...while loop tests the condition before running the code \n 2. while loop runs the code before testing the condition \n 3. do...while loop runs your code at least one time \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 0; break;
        case 3 : a = a + 1; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto k;
	}

    l: cout << "11. Which choice shows the correct syntax for the if statement in C++? \n" << endl;
	cout << " 1. The switch statement may be an alternative for multiple if statements \n 2. The switch statement must always contain a default case \n 3. The switch statement is the same as the for loop \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a + 1; break;
        case 2 : a = a - 1; break;
        case 3 : a = a + 0; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto l;
	}

    m: cout << "12. The result of the 'a && b' is true if: \n" << endl;
	cout << " 1. Both a and b are false \n 2. Both a and b are true \n 3. Either a or b is true \n" << endl;
	cout << "Your answer is "; cin >> b; cout << endl;

	switch (b){
        case 1 : a = a - 1; break;
        case 2 : a = a + 1; break;
        case 3 : a = a + 0; break;
        default : cout << "Be careful. Wrong number for answer! \n \n"; goto m;
	}

	switch (a) {
        case 1: case 2: case 3: case 4 : cout << "\n \nYou don't pass the test. \n \n" << endl; break;
        case 5: case 6: case 7 : cout << "\n \nBad results. You need have more learning. \n \n" << endl; break;
        case 8: case 9: case 10 : cout << "\n \nGood. You have passed the test. \n \n" << endl; break;
        case 11 : cout << "\n \nExcellent! " << Name << ". You have passed the test! \n \n" << endl; break;
        case 12 : cout << "\n \nCongratulations!!! " << Name << ". Great result! You are a guru of C++ :) \n \n" << endl; break;
            default : cout << "\n \nDo you pass the test less than 30 seconds? :) \n" << endl;
	}

    cout << "Your result of testing is " << a << " of 12 \n \n" << endl;

	return 0;
}
