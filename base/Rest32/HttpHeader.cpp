#include "StdAfx.h"

#include "HttpHeader.h"

namespace Rest32 {

HttpHeader::HttpHeader(const wstring &name, 
                       const wstring &value)
{
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

    return header_;
}

}