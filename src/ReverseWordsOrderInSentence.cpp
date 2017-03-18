#include <iostream>
#include <stdio.h>
using namespace std;

void reverseWordsOrder(char *sentence, int length);
void reverse(char *word, int start, int end);

int main() {
	char sentence[30] = "I am a student！";
	reverseWordsOrder(sentence, strlen(sentence));
	return 0;
}

void reverseWordsOrder(char *sentence, int length){
	reverse(sentence, 0, length-1);
	int end =0;
	for(int start =0;start<length;start =end+1){
		for(end= start ;sentence[end] !=' ' && end < length; end++);
		reverse(sentence, start, end-1);
	}
	cout << "sentence:" << sentence << endl;
}

void reverse(char *word, int start, int end){
	char temp;
	while(start < end){
		temp = (word)[start];
		(word)[start] = (word)[end];
		(word)[end] = temp;
		start++;
		end--;
	}
}
