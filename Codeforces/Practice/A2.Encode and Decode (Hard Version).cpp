#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

const int N_WIDTH = 3;
const int A_WIDTH = 7;

static string encode_base26(unsigned long long value, int width)
{
    string result;
    result.reserve(width);
    for (int i = 0; i < width; ++i)
    {
        int digit = value % 26;
        char c = 'a' + digit;
        result.push_back(c);
        value /= 26;
    }
    reverse(result.begin(), result.end());
    return result;
}

static unsigned long long decode_base26(const string &s)
{
    unsigned long long value = 0;
    for (char c : s)
    {
        int digit = c - 'a';
        value = value * 26 + (unsigned long long)digit;
    }
    return value;
}

void encode()
{
    ll n;
    if (!(cin >> n))
        return;

    string encoded_string = encode_base26((unsigned long long)n, N_WIDTH);

    for (int i = 0; i < n; ++i)
    {
        unsigned long long a;
        if (!(cin >> a))
            return;
        encoded_string += encode_base26(a, A_WIDTH);
    }

    cout << encoded_string << endl;
}

void decode()
{
    string s;
    if (!(cin >> s))
        return;

    if ((int)s.size() < N_WIDTH)
        return;
    string n_sub = s.substr(0, N_WIDTH);
    int n = static_cast<int>(decode_base26(n_sub));

    vector<unsigned long long> a;
    a.reserve(n);
    int idx = N_WIDTH;
    for (int i = 0; i < n; ++i)
    {
        if (idx + A_WIDTH > (int)s.size())
            return;
        string a_sub = s.substr(idx, A_WIDTH);
        unsigned long long val = decode_base26(a_sub);
        a.push_back(val);
        idx += A_WIDTH;
    }

    cout << n << endl;
    for (int i = 0; i < n; i += 2)
    {
        cout << a[i] << " " << a[i + 1] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string type;
    cin >> type;
    cin.ignore();

    if (type == "first")
        encode();
    else
        decode();

    return 0;
}
