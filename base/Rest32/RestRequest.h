#pragma once

#include "HttpHeader.h"
#include "HttpParameter.h"

using namespace std;

namespace Rest32 {

class RestRequest
{
public:
    RestRequest(void);
    ~RestRequest(void);

    wstring GetMethod() const;
    wstring GetResource() const;
    wstring GetBody() const;
    wstring GetHeaders() const;
    wstring GetParameters() const;
    void AddParameter(const wstring &name, const wstring &value, const wstring &type);
    void AddHeader(const wstring &name, const wstring &value);
    void SetMethod(const wstring &method);
    void SetResource(const wstring &resource);
    void SetBody(const wstring &body);

private:
    wstring method_;
    wstring resource_;
    wstring body_;

    vector<HttpHeader> headers_;
    vector<HttpParameter> parameters_;
};

}