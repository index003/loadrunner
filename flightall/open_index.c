open_index()
{

	//<input type="hidden" name="userSession" value="127085.82818955zfDzQHHpciHfDQccVpizDHcf"/>
	web_reg_save_param("usersession","LB=userSession\" value=\"","RB=\"/>",LAST);
	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	lr_output_message("usersession=%s",lr_eval_string("{usersession}"));

	lr_think_time(5);

	return 0;
}