//If multiple threads modify shared data without synchronization, you may encounter race conditions.
#include <iostream>
#include <mutex>
#include <thread>
std::mutex mtx;
int counter =0;
void fnx1(){
    
    //suppose the same fnx is asscessed by many theads so the ++ opertion takes 3 steps read the value then increment it then return it 
    //so maybe while reading or incrementing it another thread changes it which can lead to unexpected bugs  or errors
    //so to deal that we should restricts the threads to use the fnx one at once
    mtx.lock();
    std::cout <<" : "<<++counter<<std::endl;
    mtx.unlock();


    //but there is a problem in these method
    // If an exception occurs in the lock condition, unlock() might never be called, causing a deadlock.

    // std::lock_guard<std::mutex> automatically locks and unlocks the mutex, preventing deadlocks.

    /*
    
    std::lock_guard<std::mutex> lock(mtx);
    
    
     */
     
     //  Mutex automatically unlocks when 'lock' goes out of scope


    //we can use more smart locks to unlock at any instance of the thread 
    // std::unique_lock provides more control (e.g., can defer locking).

    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Thread " << std::this_thread::get_id() << " is running\n";
    lock.unlock();  // 🔓 Unlock manually if needed
    


}



int main(){

    std::thread t1(fnx1),t2(fnx1);
    t2.join();
    t1.join();
    


    return 0;
}

