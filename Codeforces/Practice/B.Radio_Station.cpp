/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
#include "map"
#include "string"

#define endl "\n"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> server_info;

    string server, ip;
    for (int i = 0; i < n; i++)
    {
        cin >> server >> ip;
        server_info.insert({ip, server});
    }

    for (int i = 0; i < m; i++)
    {
        cin >> server >> ip;
        cout << server << " " << ip;
        ip.pop_back();
        cout << " #" << server_info[ip] << endl;
    }

    return 0;
}
