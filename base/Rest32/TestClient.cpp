// Rest32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RestClient.h"
#include "RestRequest.h"
#include "RestResponse.h"

void WriteLine(string &name , string &value )
{
    cout << name << ": " << value << endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
    Rest32::RestClient client(_T("http://brianlyttle.com/"));
    
    Rest32::RestRequest req;
    req.SetMethod(_T("GET"));
    req.SetResource(_T("api/v1/get_users"));
    req.AddHeader(_T("HName1"), _T("HValue1"));
    req.AddHeader(_T("HName2"), _T("HValue2"));
    req.AddHeader(_T("HName3"), _T("HValue3"));
    req.AddParameter(_T("PName1"), _T("PValue1"), _T("PType1"));
    req.AddParameter(_T("PName2"), _T("PValue2"), _T("PType2"));

    Rest32::RestResponse response = client.Execute(req);
    wcout << "Length:\n" << response.GetContentLength() << endl;
    wcout << "Headers:\n" << response.GetHeaders() << endl;
    wcout << "Content:\n" << response.GetContent() << endl;

    return 0;
}


