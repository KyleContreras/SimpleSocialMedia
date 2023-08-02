#include <iostream>
#include <string>

using namespace std;

struct Profile
{
	string username = "";
	int age = 0;
	string state = "";

	friend ostream& operator <<(ostream& out, const Profile& profile)
	{
		out << profile.username << " " << profile.age << " " << profile.state << endl;

		return out;
	}

	friend bool operator ==(const Profile& p1, const string& test)
	{
		return p1.username == test;
	}

	friend bool operator ==(const Profile& p1, const Profile& p2)
	{
		return p1.username == p2.username;
	}

	friend bool operator !=(const Profile& p1, const string& test)
	{
		return p1.username != test;
	}
};
