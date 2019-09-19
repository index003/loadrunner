info_flight()
{


	web_reg_save_param("flights","LB=\">","RB=</option>","ORD=ALL",LAST);
	//lr_output_message("flights=%s",lr_eval_string("{flights}"));

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
