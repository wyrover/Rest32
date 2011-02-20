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
                               const wstring &value)
{
}

void RestRequest::AddHeader(const wstring &name, 
                            const wstring &value)
{

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

}