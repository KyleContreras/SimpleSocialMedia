#pragma once

template <typename T>
class Twitter
{
	public:
		// TODO: Constructor

		void AddFollower(T &follower);

		void RemoveFollower(T& follower);

		void PrintFollower();

	private:
		T username;
		int currentFollowers = 0;
		T followers [5];
};