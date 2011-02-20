// Rest32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RestClient.h"
#include "RestRequest.h"
#include "RestResponse.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Rest32::RestClient client(_T("http://brianlyttle.com/"));
    Rest32::RestRequest req;
    req.SetMethod(_T("GET"));
    req.SetResource(_T("api/v1/get_users"));

    Rest32::RestResponse response = client.Execute(req);

    return 0;
}

