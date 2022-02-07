#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
/*A program in which you define two null-terminated strings by using two pointer variables of type char. Using only pointers the program must compare two strings character by character and inform what characters in the strings are the same and what are different.*/
//#define WORD_LEN 20
int main()
{
	char word1[100], word2[100],*p, * q;
	p = word1;
	 q = word2;

	cout << "Kindly enter first word: " << endl;
	cin>>word1, '\n';
	cout << "Kindly enter second word: " << endl;
	cin>>word2;
	
			if (*p  != '\0' && *q != '\0') {
				for (int i = 0; i < *p; i++) {

					for (int j = 0; j < *q; j++) {

						if (*(p + i) == *(q + i))
						{
							cout << *(p + i) << " = " << *(q + i) << endl;

						}
						else if (*(p + i) != *(q + i))
						{
							cout << *(p + i) << " != " << *(q + i) << endl;
						}
						q++;
						p++;
					





					}
				}
	}
}