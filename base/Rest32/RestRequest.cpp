#include "StdAfx.h"
#include "RestRequest.h"

namespace Rest32 {

RestRequest::RestRequest(void)
{
}


RestRequest::~RestRequest(void)
{
}

void RestRequest::AddParameter(const wstring &name, 
                               const wstring &value,
                               const wstring &type)
{
    const HttpParameter &parameter_ = HttpParameter(name, value, type);
    parameters_.push_back(parameter_);
}

void RestRequest::AddHeader(const wstring &name, 
                            const wstring &value)
{
    const HttpHeader &header_ = HttpHeader(name, value);
    headers_.push_back(header_);
}

void RestRequest::SetMethod(const wstring &method)
{
    method_ = method;
}

void RestRequest::SetResource(const wstring &resource)
{

}

wstring RestRequest::GetResource() const
{
    return _T("");
}

void RestRequest::SetBody(const wstring &body)
{

}

std::wstring RestRequest::GetHeaders() const
{
    wstring text_;

    for (int i = 0; i < headers_.size(); i++)
    {
        text_.append(headers_[i].GetHeaderAsString());
    }

    return text_;
}

std::wstring RestRequest::GetParameters() const
{
    wstring text_;

    return text_;
}

}