#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here

    std::stringstream ss(macAddress);
    std::string hexNumber;
    int firstOctet;

    std::getline(ss, hexNumber, ':');
    std::stringstream(hexNumber) >> std::hex >> firstOctet;


    std::string addressT;
    if (firstOctet % 2 == 0) {
        addressT = "Unicast";
    } else if (firstOctet == 0xFF) {
        addressT = "Broadcast";
    } else {
        addressT = "Multicast";
    }
    return 0;
    // make use of control flow statements
    // return result;
}
