#include <iostream>
#include <deque>
using namespace std;

int main() 
{
	deque<int> dq;
	int N;
	string command;
	int front_num;
	int back_num;

	cin >> N;
	for (int i = 0; i < N; i++) 
    {
		cin >> command;

		if (command == "push_front") 
        {
			cin >> front_num;
			dq.push_front(front_num);
		}

		else if (command == "push_back") 
        {
			cin >> back_num;
			dq.push_back(back_num);
		}

		else if (command == "pop_front") 
        {
			if (dq.empty() == 1) 
            {
				cout << "-1" << endl;
			}
			else 
            {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}

		else if (command == "pop_back") 
        {
			if (dq.empty() == 1) 
            {
				cout << "-1" << endl;
			}
			else 
            {
				cout << dq.back() << endl;
				dq.pop_back(); 
			}
		}

		else if (command == "size") 
        {
			cout << dq.size() << endl;
		}

		else if (command == "empty") 
        {
			cout << dq.empty() << endl;
		}

        else if (command == "front") 
        {
			if (dq.empty() == 1) 
            {
				cout << "-1" << endl;
			}
			else 
            {
				cout << dq.front() << endl;
			}
		}

		else if (command == "back") 
        {
			if (dq.empty() == 1) 
            {
				cout << "-1" << endl;
			}
			else 
            {
				cout << dq.back() << endl;
			}
		}
	}
	return 0;
}