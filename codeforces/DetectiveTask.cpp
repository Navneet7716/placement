/*
Polycarp bought a new expensive painting and decided to show it 
to his n friends. He hung it in his room. n of his friends entered
 and exited there one by one. At one moment there was no more than 
 one person in the room. In other words, the first friend entered and 
 left first, then the second, and so on.

It is known that at the beginning (before visiting friends) a picture hung 
in the room. At the end (after the n-th friend) it turned out that it 
disappeared. At what exact moment it disappeared — there is no information.

Polycarp asked his friends one by one. He asked each one if 
there was a picture when he entered the room. Each friend answered one of three:

no (response encoded with 0);
yes (response encoded as 1);
can't remember (response is encoded with ?).
Everyone except the thief either doesn't remember or told the truth. 
The thief can say anything (any of the three options).

Polycarp cannot understand who the thief is. He asks you to find out the 
number of those who can be considered a thief according to the answers.

Input
The first number t (1≤t≤104) — the number of test cases in the test.

The following is a description of test cases.

The first line of each test case contains one string s 
(length does not exceed 2⋅105) — a description of the friends' answers, 
where si indicates the answer of the i-th friend. Each character in the string is either 0 or 1 or ?.

The given regularity is described in the actual situation. In particular, 
on the basis of answers, at least one friend can be suspected of stealing a painting.

It is guaranteed that the sum of string lengths over the entire input data set does not exceed 2⋅105.

Output
Output one positive (strictly more zero) number – the number of people who 
could steal the picture based on the data shown.

Example
input
8
0
1
1110000
?????
1?1??0?0
0?0???
??11
??0??
output
1
1
2
5
4
1
1
3
*/

// solution

#include<bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
	
	fast_cin();
	int t;
	cin >> t;

	while(t--) {

		string s;
		cin >> s;

		int leftMostOne = 0;
		int rightMostZero = s.length() - 1;

		for (int i=0;i<s.length();i++) {
			if (s[i] == '1') {
				leftMostOne = i;
			}
		}

		for(int i = s.length(); i >= 0 ; i--) {

			if(s[i] == '0') {
				rightMostZero = i;
			}

		}

		cout << rightMostZero - leftMostOne + 1 << "\n";
	}
}