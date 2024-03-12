# Steps to create server

1. go in root directory
2. `sudo apt-get update`
3. `sudo apt-get install -y build-essential cmake`
4. `sudo apt-get install -y libasio-dev`
5. `git clone https://github.com/CrowCpp/Crow.git`
6. `cd into Crow` -> `mkdir build` -> `cd build`
7. `cmake .. -DCROW_BUILD_EXAMPLES=OFF -DCROW_BUILD_TESTS=OFF`
8. `sudo make install`
9. go back to root folder
10. create main.cpp
11. create endpoints [see the documentation](https://crowcpp.org/master/guides/app/)
12. compile using `g++ main.cpp -lpthread`
13. run using `./a.out`