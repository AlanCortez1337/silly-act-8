#include <vector>
#include <iostream>

int main () {
std::vector<std::string> sillyNames = {
        "Bubbles McFizzy",
        "Squishy McSquishface",
        "Fluffy McFlufferson",
        "Cheesy McCheeseface",
        "Dizzy von Whirlwind",
        "Sir Loin of Beef",
        "Baron von Burp",
        "Princess Picklepants",
        "Captain Wigglesworth",
        "Lord Snugglebottom"
    };
}

for (std::vector::iterator<std::string> itr = sillyNames.begin(); itr != sillyNames.end(); itr++) {
    std::cout << *itr << std::endl;
}

for (std::vector::iterator<std::string> itr = sillyNames.rbegin(); itr != sillyNames.rend(); itr++) {
    std::cout << *itr << std::endl;
}