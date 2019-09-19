submit_login()
{

	lr_think_time(9);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=127085.74872418zfDzQHDpcDQccVpiDQc", ENDITEM, 
		"Name=username", "Value=abc", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=48", ENDITEM, 
		"Name=login.y", "Value=5", ENDITEM, 
		LAST);

	return 0;
}
