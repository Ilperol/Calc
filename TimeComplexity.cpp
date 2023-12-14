#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <map>

void measureTime(const std::string& operation, std::function<void(std::vector<int>&, int&)> opFunction, std::vector<int>& container, int& opCount) {
    auto start = std::chrono::high_resolution_clock::now();
    opFunction(container, opCount);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Time taken for " << operation << ": " << duration.count() << " milliseconds; " << opCount << " operations" << std::endl;
    opCount = 0;
}

void measureTime(const std::string& operation, std::function<void(std::list<int>&, int&)> opFunction, std::list<int>& container, int& opCount) {
    auto start = std::chrono::high_resolution_clock::now();
    opFunction(container, opCount);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Time taken for " << operation << ": " << duration.count() << " milliseconds; " << opCount << " operations" << std::endl;
    opCount = 0;
}

void measureTime(const std::string& operation, std::function<void(std::map<int, int>&, int&)> opFunction, std::map<int, int>& container, int& opCount) {
    auto start = std::chrono::high_resolution_clock::now();
    opFunction(container, opCount);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Time taken for " << operation << ": " << duration.count() << " milliseconds; " << opCount << " operations" << std::endl;
    opCount = 0;
}

// Operations for vector
void insertOperationVector(std::vector<int>& container, int& opCount) {
    container.push_back(std::rand() % 101); 
    ++opCount; 
}

void accessOperationVector(std::vector<int>& container, int& opCount) {
    if (!container.empty()) {
        int index = std::rand() % container.size(); 
        int element = container[index]; 
        ++opCount; 
    }
}

void deleteOperationVector(std::vector<int>& container, int& opCount) {
    if (!container.empty()) {
        int index = std::rand() % container.size(); 
        container.erase(container.begin() + index); 
        ++opCount; 
    }
}

void searchOperationVector(std::vector<int>& container, int& opCount) {
    if (!container.empty()) {
        int key = std::rand() % 101; 
        auto it = std::find(container.begin(), container.end(), key);
        if (it != container.end()) {
            ++opCount; 
        }
    }
}

void sortOperationVector(std::vector<int>& container, int& opCount) {
    std::vector<int> temp = container; 
    std::sort(temp.begin(), temp.end(), [&opCount](int a, int b) {
        ++opCount;
        return a < b;
        });
}

void insertOperationList(std::list<int>& container, int& opCount) {
    container.push_back(std::rand() % 101); 
    ++opCount; 
}

void accessOperationList(std::list<int>& container, int& opCount) {
    if (!container.empty()) {
        int index = std::rand() % container.size(); 
        auto it = container.begin();
        std::advance(it, index);
        int element = *it; 
        ++opCount; 
    }
}

void deleteOperationList(std::list<int>& container, int& opCount) {
    if (!container.empty()) {
        int index = std::rand() % container.size(); 
        auto it = container.begin();
        std::advance(it, index);
        container.erase(it); 
        ++opCount; 
    }
}

void searchOperationList(std::list<int>& container, int& opCount) {
    if (!container.empty()) {
        int key = std::rand() % 101; 
        for (auto it = container.begin(); it != container.end(); ++it) {
            if (*it == key) {
                ++opCount; 
                break;
            }
            ++opCount; 
        }
    }
}

void sortOperationList(std::list<int>& container, int& opCount) {
    container.sort([&opCount](int a, int b) {
        ++opCount; 
        return a < b;
        });
}

void insertOperationMap(std::map<int, int>& container, int& opCount) {
    container[container.size() + 1] = std::rand() % 101; 
    opCount = log2(container.size()); 
}

void accessOperationMap(std::map<int, int>& container, int& opCount) {
    if (!container.empty()) {
        int key = std::rand() % 101; 
        auto it = container.find(key);
        if (it != container.end()) {
            int value = it->second;
            ++opCount;
        }
    }
}

void deleteOperationMap(std::map<int, int>& container, int& opCount) {
    if (!container.empty()) {
        int key = std::rand() % container.size();
        auto it = std::find_if(container.begin(), container.end(), [&opCount, key](const std::pair<int, int>& pair) {
            ++opCount; 
            return pair.first == key;
            });

        container.erase(it); 
    }
}

void searchOperationMap(std::map<int, int>& container, int& opCount) {
    if (!container.empty()) {
        int key = std::rand() % container.size(); 

        auto it = std::find_if(container.begin(), container.end(), [&opCount, key](const std::pair<int, int>& pair) {
            ++opCount;
            return pair.first == key;
            });

    }
}


int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); 
    const int numberExperiments = 5;
    int containerSize;
    char containerType;
    double totalTime = 0.0;
    int totalOperations = 0;

    std::cout << "Enter the size of the container: ";
    std::cin >> containerSize;

    std::cout << "Choose the container type ('v' for vector, 'l' for list, 'm' for map): ";
    std::cin >> containerType;

    if (containerSize <= 0) {
        std::cerr << "Size of the container must be a positive integer." << std::endl;
        return 1;
    }

    if (containerType != 'v' && containerType != 'l' && containerType != 'm') {
        std::cerr << "Invalid choice of container type. Choose 'v' for vector, 'l' for list, or 'm' for map." << std::endl;
        return 1;
    }

    if (containerType == 'v') {
        std::vector<int> myVector(containerSize);
        int opCountVector = 0; 

        for (int i = 0; i < numberExperiments; ++i) { 
            for (auto& val : myVector) {
                val = std::rand() % 101;
            }

            measureTime("Vector Insertion", insertOperationVector, myVector, opCountVector);
            measureTime("Vector Access", accessOperationVector, myVector, opCountVector);
            measureTime("Vector Deletion", deleteOperationVector, myVector, opCountVector);
            measureTime("Vector Search", searchOperationVector, myVector, opCountVector);
            measureTime("Vector Sorting", sortOperationVector, myVector, opCountVector);

            std::cout << "---------------------" << std::endl;

        }
    }
    else if (containerType == 'l') {
        std::list<int> myList(containerSize);
        int opCountList = 0; 

        for (int i = 0; i < numberExperiments; ++i) { 
            for (auto& val : myList) {
                val = std::rand() % 101;
            }

            measureTime("List Insertion", insertOperationList, myList, opCountList);
            measureTime("List Access", accessOperationList, myList, opCountList);
            measureTime("List Deletion", deleteOperationList, myList, opCountList);
            measureTime("List Search", searchOperationList, myList, opCountList);
            measureTime("List Sorting", sortOperationList, myList, opCountList);

            std::cout << "---------------------" << std::endl;

        }   
    }
    else if (containerType == 'm') {
        std::map<int, int> myMap;
        int opCountMap = 0; 

        for (int i = 0; i < numberExperiments; ++i) { 
            for (int j = 0; j < containerSize; ++j) {
                myMap[j] = std::rand() % 101;
            }
            measureTime("Map Insertion", insertOperationMap, myMap, opCountMap);
            measureTime("Map Access", accessOperationMap, myMap, opCountMap);
            measureTime("Map Deletion", deleteOperationMap, myMap, opCountMap);
            measureTime("Map Search", searchOperationMap, myMap, opCountMap);

            std::cout << "---------------------" << std::endl;

            myMap.clear();

        }
    }

    return 0;
}
