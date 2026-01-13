#include <bits/stdc++.h>
using namespace std;

// Forward declarations
template <class T1, class T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p);

template <class T>
ostream &operator<<(ostream &os, vector<T> &v);

template <class T>
ostream &operator<<(ostream &os, deque<T> &v);

template <class T>
ostream &operator<<(ostream &os, set<T> &v);

template <class T>
ostream &operator<<(ostream &os, multiset<T> &v);

template <class T1, class T2>
ostream &operator<<(ostream &os, map<T1, T2> &v);

template <class T1, class T2>
ostream &operator<<(ostream &os, unordered_map<T1, T2> &v);

// err functions
void err(istream_iterator<string> it)
{
    cout << endl;
}

template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cout << *it << " = " << a << " ";
    err(++it, args...);
}

// Now define your operator<< functions here
template <class T1, class T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p)
{
    os << "{" << p.first << ", " << p.second << "} ";
    return os;
}

template <class T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    os << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << " ]";
    return os;
}

template <class T>
ostream &operator<<(ostream &os, deque<T> &v)
{
    os << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << " ]";
    return os;
}

template <class T>
ostream &operator<<(ostream &os, set<T> &v)
{
    os << "[ ";
    for (T i : v)
    {
        os << i << " ";
    }
    os << " ]";
    return os;
}

template <class T>
ostream &operator<<(ostream &os, multiset<T> &v)
{
    os << "[ ";
    for (T i : v)
    {
        os << i << " ";
    }
    os << " ]";
    return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, map<T1, T2> &v)
{
    for (auto i : v)
    {
        os << "Key : " << i.first << " , Value : " << i.second << endl;
    }
    return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, unordered_map<T1, T2> &v)
{
    for (auto i : v)
    {
        os << "Key : " << i.first << " , Value : " << i.second << endl;
    }
    return os;
}

#define HERE cout << "here - " << __LINE__ << "\n";
#define debug(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }