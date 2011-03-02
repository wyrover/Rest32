#pragma once

#include "RestRequest.h"

using namespace std;

namespace Rest32 {

class RestResponse
{
public:
    RestResponse(void);
    ~RestResponse(void);

    std::wstring GetContent() const;
    void SetContent(const wstring &val);
    std::wstring GetContentEncoding() const;
    void SetContentEncoding(const wstring &val);
    size_t GetContentLength() const;
    void SetContentLength(const size_t &val);
    std::wstring GetContentType() const;
    void SetContentType(const wstring &val);
    std::wstring GetErrorMessage() const;
    void SetErrorMessage(const wstring &val);
    std::wstring GetHeaders() const;
    void SetHeaders(const wstring &val);
    RestRequest GetRequest() const;
    void SetRequest(const RestRequest &val);
    wstring GetHttpStatusCode() const;
    void SetHttpStatusCode(const wstring &val);
    std::wstring GetHttpStatusDescription() const;
    void SetHttpStatusDescription(const wstring &val);

private:
    wstring content_;
    wstring content_encoding_;
    size_t content_length_;
    wstring content_type_;
    wstring cookies_;
    wstring error_;
    wstring headers_;
    RestRequest request_;
    wstring status_code_;
    wstring status_info_;
};

}