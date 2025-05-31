#include <iostream>   
#include <chrono>
#include <thread>
using namespace std;

void timer(int seconds) {
    for (int i = seconds; i > 0; --i) {
        cout << "Time left: " << i << " seconds\r" << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << "Time's up!           " << endl;
}

int main() {
    int seconds;
    cout << "Enter number of seconds for timer: ";
    cin >> seconds;
    timer(seconds);
    return 0;
}
