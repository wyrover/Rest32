#pragma once

using namespace std;

namespace Rest32 {

class HttpParameter
{
public:
    HttpParameter(const wstring &name, const wstring &value, const wstring &type);
    ~HttpParameter(void);
};

}