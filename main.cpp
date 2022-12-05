#include <iostream>

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};

int main() {
    int n;
    std::cin >> n;
    MobilePhone *SkyFall_list = new MobilePhone[n];
    for (int i = 0; i < n; i++) {

        std::cin >> SkyFall_list[i].weight >> SkyFall_list[i].is_broken >>
                 SkyFall_list[i].price;
    }
    std::cout << "<MobilePhone>" << std::endl;
    for (int s = 0; s < n; s++) {
        std::cout << "\t" << "MobilePhone id=" << '"' << s << '"' << " weight=" << '"' << SkyFall_list[s].weight<< '"' << " is_broken=" << '"' << std::boolalpha << SkyFall_list[s].is_broken << '"'<< " price=" << '"' << '"' << SkyFall_list[s].price << "\"/>" << std::endl;
    }
    std::cout << "<MobilePhone>";
    std::cout << "<Mobile hone>";
    delete[] SkyFall_list;
    return 0;
}

