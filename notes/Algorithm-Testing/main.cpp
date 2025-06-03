
#include <chrono>
#include <iostream>
/*In this program I will be testing different recrusive functions.
*/
int fib(int F){
    if (F == 0) return 0;
    else if (F == 1 ) return 1;
    return  fib(F - 1) + fib(F - 2);
}
int main() {
    // Record start time
    auto start = std::chrono::high_resolution_clock::now();

    int f = 45;
    for(int i = 0;i < f; i++){
        std::cout << "Fib: " << i << std::endl;
        std::cout << fib(i) << std::endl;
    }
    // Record end time
    auto stop = std::chrono::high_resolution_clock::now();

    // Calculate elapsed time in milliseconds
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();

    // Output the elapsed time
    std::cout << "Elapsed time: " << elapsed << " milliseconds" << std::endl;

    return 0;
}