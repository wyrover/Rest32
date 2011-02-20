#include "StdAfx.h"
#include "RestResponse.h"

namespace Rest32 {

RestResponse::RestResponse(void)
{
}


RestResponse::~RestResponse(void)
{
}

std::wstring RestResponse::GetContent() const
{
    return content_;
}

void RestResponse::SetContent(const wstring &val)
{
    content_ = val;
}

std::wstring RestResponse::GetContentEncoding() const
{
    return content_encoding_;
}

void RestResponse::SetContentEncoding(const wstring &val)
{
    content_encoding_ = val;
}

size_t RestResponse::GetContentLength() const
{
    return content_length_;
}

void RestResponse::SetContentLength(const size_t &val)
{
    content_length_ = val;
}

void RestResponse::SetContentType(const wstring &val)
{
    content_type_ = val;
}

std::wstring RestResponse::GetErrorMessage() const
{
    return error_;
}

void RestResponse::SetErrorMessage(const wstring &val)
{
    error_ = val;
}

std::wstring RestResponse::GetHeaders() const
{
    return headers_;
}

void RestResponse::SetHeaders(const wstring &val)
{
    headers_ = val;
}

RestRequest RestResponse::GetRequest() const
{
    return request_;
}

void RestResponse::SetRequest(const RestRequest &val)
{
    request_ = val;
}

size_t RestResponse::GetHttpStatusCode() const
{
    return status_code_;
}

void RestResponse::SetHttpStatusCode(const size_t &val)
{
    status_code_ = val;
}

std::wstring RestResponse::GetHttpStatusDescription() const
{
    return status_info_;
}

void RestResponse::SetHttpStatusDescription(const wstring &val)
{
    status_info_ = val;
}

std::wstring RestResponse::GetContentType() const
{
    return content_type_;
}

}