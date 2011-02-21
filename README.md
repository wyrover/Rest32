Rest32
======

Rest32 is a library for calling [REST web services](http://en.wikipedia.org/wiki/Representational_State_Transfer#RESTful_web_services) from C++ on Windows. It takes it's inspiration from the [RestSharp](https://github.com/johnsheehan/RestSharp) which is very easy to use.

It'll be some time before this is production-ready but I'd be interested in feed back on the public API.

Initial Goals
-------------

* Get familiar with C++ (again).
* Support GET and POST methods.
* Allow OAuth 1.0 authentication.
* x86 and x64 builds on Windows.
* Support PUT and DELETE methods.
* Examples for Yammer API and possibly others.

Long Term
---------

* Serialization support.
* Support C++ Builder.
* Use an HTTP stack other than WinHTTP allowing for cross-platform use.

Contributing
------------

These are early days so you can really hack on anything you want. I'd like to try and keep a public API along the lines of RestSharp, except where it can be improved.