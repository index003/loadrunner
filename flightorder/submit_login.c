submit_login()
{

	lr_think_time(7);

	web_reg_find("text=welcome","SaveCount=loginflag",LAST);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/WebTours/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?in=home", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={usersession}", ENDITEM, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=32", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		LAST);

	if(atoi(lr_eval_string("{loginflag}"))>0)
	   {
		   lr_output_message("login successful!");
		   return 0;	
		}
	else
		{
			lr_output_message("login failed!");
			return -1;
		}
}