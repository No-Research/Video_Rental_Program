#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

// Video ADT
class Video {
private:
    int videoId;
    string movieTitle;
    string genre;
    string production;
    int numCopies;
    string movieImageFilename;

public:
    Video() {}

    int getVideoId() const;
    string getMovieTitle() const;
    string getGenre() const;
    string getProduction() const;
    int getNumCopies() const;
    string getMovieImageFilename() const;
    void setNumCopies(int copies) { numCopies = copies; }
};

// Customer ADT
class Customer {
private:
    int customerId;
    string name;
    string address;

public:
    Customer() {}

    int getCustomerId() const;
    string getName() const;
    string getAddress() const;
};

// CustomerRent ADT
class CustomerRent {
private:
    int customerId;
    stack<int> rentedVideos;

public:
    CustomerRent(int id) : customerId(id) {}
    int getCustomerId() const;
    void rentVideo(int videoId);
    void returnVideo();
    bool hasRentedVideos() const;
    stack<int> getRentedVideos() const;
    void printRentedVideos() const { }
};

int main()
{
    int choice;
    while (true) {
        cout << "-----------------------------" << endl;
        cout << "Video Store Management System" << endl;
        cout << "-----------------------------" << endl;
        cout << "[1] New Video" << endl;
        cout << "[2] Rent a Video" << endl;
        cout << "[3] Return a Video" << endl;
        cout << "[4] Show Video Details" << endl;
        cout << "[5] Display all Videos" << endl;
        cout << "[6] Check Video Availability" << endl;
        cout << "[7] Customer Maintenance" << endl;
        cout << "[8] Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // New Video
            // TODO: Implement
            break;
        }
        case 2: {
            // Rent a Video
            // TODO: Implement
            break;
        }
        case 3: {
            // Return a Video
            // TODO: Implement
            break;
        }
        case 4: {
            // Show Video Details
            // TODO: Implement
            break;
        }
        case 5: {
            // Display all Videos
            // TODO: Implement
            break;
        }
        case 6: {
            // Check Video Availability
            // TODO: Implement
            break;
        }
        case 7: {
            // Customer Maintenance
            // TODO: Implement
            break;
        }
        case 8: {
            // Exit Program
            return 0;
        }
        default: {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    }

    return 0;
}
