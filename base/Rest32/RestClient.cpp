#include "StdAfx.h"
#include "RestClient.h"

namespace Rest32 {

RestClient::RestClient(const wstring &url) 
{
    url_ = url;
    user_agent_ = _T("Rest32 (https://github.com/brianly/Rest32)");
}

RestClient::~RestClient(void)
{
}

// Executes a request against a REST service
RestResponse RestClient::Execute(const RestRequest &request) const
{
    // Validate the request
    //wstring res = request.GetResource();
    std::wstring converted = std::wstring(request.GetResource());
    wstring headers_ = request.GetHeaders();
    
    
    // Return a response
    RestResponse &response = this->ExecuteHttpRequest(request);
    return response;
}

void RestClient::SetAuthenticator(const OAuth1Authenticator &authenticator)
{

}

void RestClient::SetUserAgent(const wstring &user_agent)
{
    user_agent_ = user_agent;
}

RestResponse RestClient::ExecuteHttpRequest(const RestRequest &request) const
{
    // Set URL.
    WinHttpClient client(url_ + request.GetResource());

    // Send http request, a GET request by default.
    client.SendHttpRequest();

    RestResponse &response = RestResponse();
    response.SetContent(client.GetResponseContent());
    response.SetHeaders(client.GetResponseHeader());
    response.SetContentLength(client.GetRawResponseReceivedContentLength());
    response.SetHttpStatusCode(client.GetResponseStatusCode());

    // Return a response
    return response;
}

}