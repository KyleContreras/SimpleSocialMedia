#include <iostream>
#include "Twitter.h"

using namespace std;

// Add a follower to the user's follower list
template<typename T>
void Twitter<T>::AddFollower(T &follower)
{
	bool toLoop = true;
	int counter = 0;
	
	// Checking on the user's followers
	if (this->currentFollowers >= 6)
	{
		cout << "Follower limit of 5 has been reached. You will need to remove a follower." << endl;
		return;
	}
	else
	{
		this->currentFollowers += 1;
	}

	while (toLoop)
	{
		if (this->followers[counter] == "")
		{
			this->followers[counter] = follower;

			toLoop = false;
		}

		counter++;
	}
}

// Remove a follower from user's list
template<typename T>
void Twitter<T>::RemoveFollower(T& follower)
{
	if (this->currentFollowers <= 0)
	{
		cout << "User has no followers." << endl;

		// In case currentFollowers is less than 0, set currentFollowers to 0
		this->currentFollowers = 0;

		return;
	}

	for (int i = 0; i < 5; i++)
	{
		if (this->followers[i] == follower)
		{
			T blankFollower;
			this->followers[i] = blankFollower;
			
			this->currentFollowers -= 1;
		}
	}
}

// Print user's follower list
template<typename T>
void Twitter<T>::PrintFollower()
{
	for (int i = 0; i < 5; i++)
	{
		if (this->followers[i] != "")
		{
			cout << followers[i] << endl;
		}
	}
}