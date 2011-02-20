#include "StdAfx.h"
#include "RestClient.h"
#include<string>

namespace Rest32 {

RestClient::RestClient(const wstring &url)
{
}


RestClient::~RestClient(void)
{
}


// Executes a request against a REST service
RestResponse RestClient::Execute(const RestRequest &request)
{
    // Validate the request
    //wstring res = request.GetResource();
    std::wstring converted = std::wstring(request.GetResource());

    // Return a response
    RestResponse &response = RestResponse();
    return response;
}

void RestClient::SetAuthenticator(const OAuth1Authenticator &authenticator)
{

}

void RestClient::SetUserAgent( const wstring &user_agent )
{

}

}