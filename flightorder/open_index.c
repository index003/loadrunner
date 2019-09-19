open_index()
{

	web_reg_save_param("usersession","LB=userSession value=","RB=>",LAST);

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	lr_output_message("usersession=%s",lr_eval_string("{usersession}"));

	return 0;
}