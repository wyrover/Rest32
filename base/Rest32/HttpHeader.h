#pragma once

using namespace std;

namespace Rest32 {

class HttpHeader
{
public:
    HttpHeader(const wstring &name, const wstring &value);
    ~HttpHeader(void);

    wstring GetHeaderAsString() const;

private:
    wstring name_;
    wstring value_;
};

}