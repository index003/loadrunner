info_flight()
{

	lr_think_time(10);
	web_reg_save_param("flights","LB=\">","RB=</option>","ORD=ALL",LAST);

	

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	

	lr_think_time(5);
	return 0;
}
