#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int count = 0;
	int num = 0;
	int temp = 0;
	int day = 0;
	string type;
	cin >> num;

	for(char a = 'a'; a <= 'z'; a++){
		for(char b = 'a'; b <= 'z'; b++){
			for(char c = 'a'; c <= 'z'; c++){
				if(count++ >= num) break;
				cout << "RQ " << a << b << c << " ";
				temp = rand() % 3;
				if(temp == 0){
					type = "hi";
				}                
				else if(temp == 1){
					type = "lo";
				}
				else{
					type = "any";
				}
				// change mod value to higher than 12 to get "bad number
				// errors
				cout << (rand() % 13) << " " << type << " ";
				day = ((rand() % 10));
				if(day <= 6){
					cout << day << endl;
				}
				else{
					cout << "any" << endl;
				}
			}
		}
	}
	cout << "PR all QU";
}
