open_index()
{

	web_add_cookie("MUID=37D44E90795463D4381443127D546284; DOMAIN=www.bing.com");

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_think_time(5);

	web_custom_request("q.cgi", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x01\\x8B\\x008R\\x00\\x00\\x00\\x00\\xB8\\x00\\x00\\x00\\x02\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x1B=\\xBD\\xBE\\x1A\r\\x18\\xA8{V_3\\xAF\\x89+\\xBD\\xF66\\xCEe\\xB8\\x98\\xE3v>\\x7F\\x12&\\x0EV\\x1A\\x8Fq\n\\xB8\\x9B\r\\xD4\\x88\\xFC{b\\xDA5\\xE0\\x83\\x1CI\\x07^"
		"\\xC5\\x8C\\xD6$R\\xF0\\xE1lP\\xF1\\xBFW\\x12g\\x8EX\\xCF\\x02\\xA9C\\xD8\\xFE\\xF1\\x80\\xCDCR\\x92c\td\\x1A?\\xC3\\x00\\xFEh\\x15\\xAA\\x8B\\x9A\\xBE\\xCA\\xB1\\xE0\\xC0\\x132\\xE7\\xA8\\xC3^H\\xD0\\xE7\\x1A\\xB6\\x99\\xD2T\\x8D\\xEA\\xD0\\xD3f=\\xB1\\x14\\x8DC\\x87\\xB1\\x91\\x89\\x93Uj\\x01", 
		LAST);

	return 0;
}