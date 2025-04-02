#include <iostream>
#include <thread>
#include <vector>



void task(int id){
    std::cout<< "thread "<<id <<"is running \n";
}

int main(){
    
    std::vector<std::thread> threads;
    //now threads is a vector which will handle our all the threads

    for(int i=0;i<5;i++){

        threads.emplace_back(task,i);//create thread

        //we can use thread.push_back(std::thread(i))//as push back  Requires existing object but emplace back don't 

    }
    for (auto& t : threads) {
        t.join();  // Wait for all threads to finish
    }


    return 0;
}