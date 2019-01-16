#include <bits/stdc++.h>

using namespace std;

int find(int d, int m, int y){
	vector<int> v({0,3,2,5,0,3,5,1,4,6,2,4});
	y -= m < 3;
	return (y + y/4 - y/100 + y/400 + v[m-1] + d)%7;
}

int main(int argc, char const *argv[])
{
	cout << "Give the day, month and year of the day to be found in the format DD MM YYYY: " << endl;
	int d, m ,y;
	cin >> d >> m >> y;
	int x = find(d, m, y);
	cout << "The day on the given input is: ";
	switch(x){
		case 0:
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
	}

	return 0;
}