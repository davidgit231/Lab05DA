// Lab05DA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>


char charTran(char ch, const std::vector<char> & tableTran) {
	if (ch >= 65 && ch <= 90) {
		
		return tableTran[ch - 65];
	}
	else if (ch >= 97 && ch <= 122) {
		char letterUpper = ch - 32;
		char codeUpper = tableTran[letterUpper - 65];
		
		return codeUpper + 32; 
	}
	else {
		
		return ch;
	}
}

int main() {
	std::vector<char> tableTran = {'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'};
	
	std::string text; 

	std::cout << "Input text to cypher: "; 
	
	std::getline(std::cin, text);

	std::string textTrans;
	
	for (char ch : text) {
		
		textTrans = textTrans + charTran(ch, tableTran);
	}

	std::cout << "Encoded message:  " << textTrans << std::endl;

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
