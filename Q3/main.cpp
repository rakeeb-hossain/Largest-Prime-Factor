//
//  main.cpp
//  Q3: Largest Prime Factor
//
//  Created by Rakeeb on 2019-04-08.
//  Copyright © 2019 Rakeeb. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
long long int NUM = 600851475143;

/*
bool isPrime(long long int num) {
    
    if (num == 1) {return false;};
    if (num == 2) {return true;};
    if (num == 3) {return true;};
    if (num % 2 == 0) {return false;};
    if (num % 3 == 0) {return false;};

    int i = 5;
    int w = 2;
    
    while (static_cast<long long int>(i) * static_cast<long long int>(i) <= num) {
        if (num % static_cast<long long int>(i) == 0) {
            return false;
        }
        i += w;
        w = 6 - w;
    }
    
    return true;
}

int main(int argc, const char * argv[]) {
    long long int largest_prime = 0;
    for (int i = 1; i <= floor(sqrt(NUM)); i++) {
        if (NUM % static_cast<long long int>(i) == 0) {
            cout << i << endl;
            cout << isPrime(static_cast<long long int>(i)) << endl;

            if (isPrime(static_cast<long long int>(i)) == true) {
                largest_prime = static_cast<long long int>(i);
            }
            if (isPrime(NUM/static_cast<long long int>(i)) == true && NUM/static_cast<long long int>(i) > largest_prime) {
                largest_prime = NUM/static_cast<long long int>(i);
            }
        }
    }
    cout << largest_prime << endl;
    return 1;
}
*/

int main(int argc, const char * argv[]) {
    if (NUM % 2 == 0) {
        NUM /= 2;
        while (NUM % 2 == 0) {
            NUM /= 2;
        }
    }
    if (NUM % 3 == 0) {
        NUM /= 3;
        while (NUM % 3 == 0) {
            NUM /= 3;
        }
    }

    int i = 5;
    int w = 2;
    
    while (static_cast<long long int>(i) * static_cast<long long int>(i) <= NUM) {
        if (NUM % static_cast<long long int>(i) == 0) {
            NUM /= static_cast<long long int>(i);
            while (NUM % static_cast<long long int>(i) == 0) {
                NUM /= static_cast<long long int>(i);
            }
        }
        
        i += w;
        w = 6 - w;
    }
    cout << "Largest prime factor: " << NUM << endl;
    return 1;
}

