#pragma once
#include "restauthenticatorbase.h"
class OAuth1Authenticator :
    public RestAuthenticatorBase
{
public:
    OAuth1Authenticator(void);
    ~OAuth1Authenticator(void);
};

