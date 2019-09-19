info_flight()
{

	lr_think_time(7);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/WebTours/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?page=menu&in=home", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
