submit_login()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_custom_request("wup.browser.qq.com", 
		"URL=https://wup.browser.qq.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/multipart-formdata", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x00\\x00\\x00\\xEC\\x10\\x02,<LV\\x0Bqbcloudctrlf\\x0CgetCloudCtrl}\\x00\\x01\\x00\\xBE\\x08\\x00\\x01\\x06\\x03req\\x18\\x00\\x01\\x06\\x0FQB.CloudCtrlReq\\x1D\\x00\\x01\\x00\\x9D\n\\x06 2a28d5a974c5f5aa416393aa1a4b4102\\x16\\x00& 2a28d5a974c5f5aa416393aa1a4b4102"
		"<F\\x00P\\x15`\\x08v\\x056.1.1\\x80@\\x90\\x15\\xA0\\x08\\xB6\\x00ÌÖ\\x00ìü\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0BŒ˜\\x0C\\xA8\\x0C", 
		LAST);

	web_add_cookie("MUID=37D44E90795463D4381443127D546284; DOMAIN=www.bing.com");

	web_custom_request("wup.browser.qq.com_2", 
		"URL=https://wup.browser.qq.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/multipart-formdata", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x00\\x00\\x00\\xEC\\x10\\x02,<LV\\x0Bqbcloudctrlf\\x0CgetCloudCtrl}\\x00\\x01\\x00\\xBE\\x08\\x00\\x01\\x06\\x03req\\x18\\x00\\x01\\x06\\x0FQB.CloudCtrlReq\\x1D\\x00\\x01\\x00\\x9D\n\\x06 2a28d5a974c5f5aa416393aa1a4b4102\\x16\\x00& 2a28d5a974c5f5aa416393aa1a4b4102"
		"<F\\x00P\\x12`\\x08v\\x056.1.1\\x80@\\x90\\x12\\xA0\\x08\\xB6\\x00ÌÖ\\x00ìü\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0BŒ˜\\x0C\\xA8\\x0C", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/WebTours/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/nav.pl?in=home", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=127065.383394087zfDfQcfpzfiDDDDDDQcVfpffDQf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=32", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		LAST);

	return 0;
}