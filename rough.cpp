#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
using namespace std;

mutex mtx;
condition_variable cv;
queue<int> bricks;

void producer()
{
    for (int i = 1; i <= 5; ++i)
    {
        this_thread::sleep_for(chrono::seconds(1)); // Simulate brick making
        unique_lock<mutex> lock(mtx);
        bricks.push(i);
        cout << "Produced brick " << i << endl;
        cv.notify_one(); // Notify a waiting consumer
    }
}

void consumer()
{
    for (int i = 1; i <= 5; ++i)
    {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, []
                { return !bricks.empty(); }); // Wait until brick available
        int brick = bricks.front();
        bricks.pop();
        cout << "Consumed brick " << brick << endl;
    }
}

int main()
{
    thread prod(producer);
    thread cons(consumer);
    prod.join();
    cons.join();
    return 0;
}
