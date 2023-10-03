#include <iostream>
#include <cmath>

using namespace std;

class Event {
private:
    string event_name;
    string first_name;
    string last_name;
    
    int num_guests;
    int num_minutes;
    int num_servers;
    double total_cost;

public:
    void inputEventDetails() {
        cout << "Enter the NAME OF THE EVENT: ";
        cin.ignore();
        getline(cin, event_name);
        cout << "Enter your FIRST NAME: ";
        cin >> first_name;
        cout << "Enter your LAST NAME: ";
        cin >> last_name;
        cout << "Enter the number of Guests: ";
        cin >> num_guests;
        cout << "Enter the number of Minutes: ";
        cin >> num_minutes;
    }

    void calculateEventCost() {
        const double CostPerHour = 18.50;
        const double CostPerMinute = 0.40;
        const double CostOfDinner = 20.70;
        const int GuestsPerServer = 20;

        num_servers = ceil(static_cast<double>(num_guests) / GuestsPerServer);

        double cost1 = (num_minutes / 60.0) * CostPerHour;
        double cost2 = (num_minutes % 60) * CostPerMinute;
        double cost_for_one_server = cost1 + cost2;

        double total_food_cost = num_guests * CostOfDinner;

        double average_cost = total_food_cost / num_guests;

        total_cost = total_food_cost + (cost_for_one_server * num_servers);
    }

    void displayEventCost() {
        cout << "\nEvent Details:" << endl;
        cout << "Event Name: " << event_name << endl;
        cout << "Organizer: " << first_name << " " << last_name << endl;
        cout << "Number of Guests: " << num_guests << endl;
        cout << "Number of Servers Required: " << num_servers << endl;
        cout << "Total Event Cost: $" << total_cost << endl;
    }
};

int main() {
    Event event;
    event.inputEventDetails();
    event.calculateEventCost();
    event.displayEventCost();

    return 0;
}
