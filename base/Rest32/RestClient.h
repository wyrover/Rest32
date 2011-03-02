#pragma once

#include <string>
#include "RestResponse.h"
#include "RestRequest.h"
#include "RestResponse.h"
#include "OAuth1Authenticator.h"
#include "WinHttpClient.h"

using namespace std;

namespace Rest32 {

class RestClient
{
public:
    explicit RestClient(const wstring &url);
    ~RestClient(void);

    RestResponse Execute(const RestRequest &request) const;
    void SetAuthenticator(const OAuth1Authenticator &authenticator);
    void SetUserAgent(const wstring &user_agent);

private:
    wstring url_;
    wstring user_agent_;

    RestResponse ExecuteHttpRequest(const RestRequest &request) const;
};

}
