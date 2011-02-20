#pragma once

#include "RestResponse.h"
#include "RestRequest.h"
#include "RestResponse.h"
#include "OAuth1Authenticator.h"

using namespace std;

namespace Rest32 {

class RestClient
{
public:
    RestClient(const wstring &url);
    ~RestClient(void);

    RestResponse Execute(const RestRequest &request);
    void SetAuthenticator(const OAuth1Authenticator &authenticator);
    void SetUserAgent(const wstring &user_agent);
};

}
