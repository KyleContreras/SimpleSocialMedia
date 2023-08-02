// ****************
// Kyle Contreras
// CSC 375
// 30 Jan 2023
// ****************

#include <iostream>

#include "Twitter.h"
#include "Twitter.cpp"
#include "profileStruct.cpp"

using namespace std;

int main()
{
    bool menuStatus = true;

    // These two Users have a static array of size 5
    Twitter<string> popularUserString;
    Twitter<Profile> popularUserProfile;

    while (menuStatus)
    {
        int mode;

        // These two will represent a new follower
        string followerString;
        Profile followerProfile;

        cout << "********** TWITTER **********" << endl;
        cout << "1) Add string follower" << endl;
        cout << "2) Add Profile follower" << endl;
        cout << "3) Remove string follower" << endl;
        cout << "4) Remove Profile follower" << endl;
        cout << "5) Print string followers" << endl;
        cout << "6) Print Profile followers" << endl;
        cout << "7) Quit" << endl;
        cout << "*****************************" << endl;
        cout << endl;

        cin >> mode;

        switch (mode)
        {
            case 1:
                cout << "Enter the new follower's username: ";
                cin >> followerString;

                popularUserString.AddFollower(followerString);

                break;
            case 2:
                cout << "Enter the new follower Profile's username: ";
                cin >> followerProfile.username;

                cout << "Enter the new follower Profile's age: ";
                cin >> followerProfile.age;

                cout << "Enter the new follower Profile's state abbreviation: ";
                cin >> followerProfile.state;

                popularUserProfile.AddFollower(followerProfile);

                break;
            case 3:
                cout << "Enter the follower's username, for deletion: ";
                cin >> followerString;

                popularUserString.RemoveFollower(followerString);
                
                cout << "Remaining followers for string user: " << endl;
                popularUserString.PrintFollower();
                break;
            case 4:
                cout << "Enter the follower's Profile username, for deletion: ";
                cin >> followerProfile.username;

                popularUserProfile.RemoveFollower(followerProfile);
                
                cout << "Remaining followers for Profile user: " << endl;
                popularUserProfile.PrintFollower();

                break;
            case 5:
                cout << endl;
                cout << "Print followers for Popular String User: " << endl;
                popularUserString.PrintFollower();
                cout << endl;

                break;
            case 6:
                cout << endl;
                cout << "Print followers for Popular Profile User: " << endl;
                popularUserProfile.PrintFollower();
                cout << endl;

                break;
            case 7:
                cout << "Exiting." << endl;
                
                return 0;
            default:
                cout << "Choose one of the numbered options." << endl;
                break;
        }

    }
}
