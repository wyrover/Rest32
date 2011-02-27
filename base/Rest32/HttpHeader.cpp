#include "StdAfx.h"

#include "HttpHeader.h"

namespace Rest32 {

HttpHeader::HttpHeader(const wstring &name, 
                       const wstring &value)
{
    name_ = name;
    value_ = value;
}


HttpHeader::~HttpHeader(void)
{
}

wstring HttpHeader::GetHeaderAsString() const
{
    wstring header_ ;
    header_.append(name_);
    header_.append(_T(":"));
    header_.append(value_);
    header_.append(_T("\n"));
    
    return header_;
}

}