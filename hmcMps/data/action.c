Action()
{

	web_url("login.html", 
		"URL=http://mps-test.haomaiche.com/fs/login.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../resources/js/easyui-1.3.2/themes/default/images/panel_tools.png", ENDITEM, 
		"Url=../resources/js/easyui-1.3.2/themes/default/images/blank.gif", ENDITEM, 
		LAST);

	web_custom_request("q.cgi", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x01\\x8B\\x008R\\x00\\x00\\x00\\x00\\xB8\\x00\\x00\\x00\\x02\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00k\\xA9D\\xA1\\xA7\\xAD\\x97\\xB7&\\xE4\\xB2\t:\\xD3\\xBB\\x10B\\xB7\\x85\\xD3\\xA6r\\xF7\\xA4\\xAC\\xD2\\xC8c\\x06\\xFE\\x08C\\xB4B\\xEA\\x14\\xDB\\xE1\\xAB\\x02\\x00\\xEF\\x1A\\xF0\\xDC\\xE3I\\xFF\""
		"\\xAC\\xA5z`\\xC2\\xE7\\x96\\x8A\\x8F\\x89\\xF9\\xBE$!E\\xE3|3\\xCB\\xFD\\xC3d:&\\xBD\\xA5\\x07\\x8D\\xCB\\xEB\\xDCuE\\x87\\xA0'\\xF2&\\xE6w\\xC1#d\\x9F\\xC0\\x9E|\\x11\\x91\\xD2+a\\x8F\\x87+\\xE8\\xF8\\x0B;Uc{\\x89\\x0CU\\x1B ?\\xEA\\x0B\\x88\\xC3\\xE1\\xDAYp\\xF39\\xB5", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_think_time(16);

	web_custom_request("wup.browser.qq.com", 
		"URL=https://wup.browser.qq.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/multipart-formdata", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x00\\x00\\x00\\xEC\\x10\\x02,<LV\\x0Bqbcloudctrlf\\x0CgetCloudCtrl}\\x00\\x01\\x00\\xBE\\x08\\x00\\x01\\x06\\x03req\\x18\\x00\\x01\\x06\\x0FQB.CloudCtrlReq\\x1D\\x00\\x01\\x00\\x9D\n\\x06 2a28d5a974c5f5aa416393aa1a4b4102\\x16\\x00& 2a28d5a974c5f5aa416393aa1a4b4102"
		"<F\\x00P\\x15`\\x08v\\x056.1.1\\x80@\\x90\\x15\\xA0\\x08\\xB6\\x00\\xCC\\xD6\\x00\\xEC\\xFC\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0B\\x8C\\x98\\x0C\\xA8\\x0C", 
		LAST);

	web_custom_request("wup.browser.qq.com_2", 
		"URL=https://wup.browser.qq.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/multipart-formdata", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x00\\x00\\x00\\xEC\\x10\\x02,<LV\\x0Bqbcloudctrlf\\x0CgetCloudCtrl}\\x00\\x01\\x00\\xBE\\x08\\x00\\x01\\x06\\x03req\\x18\\x00\\x01\\x06\\x0FQB.CloudCtrlReq\\x1D\\x00\\x01\\x00\\x9D\n\\x06 2a28d5a974c5f5aa416393aa1a4b4102\\x16\\x00& 2a28d5a974c5f5aa416393aa1a4b4102"
		"<F\\x00P\\x12`\\x08v\\x056.1.1\\x80@\\x90\\x12\\xA0\\x08\\xB6\\x00\\xCC\\xD6\\x00\\xEC\\xFC\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0B\\x8C\\x98\\x0C\\xA8\\x0C", 
		LAST);

	web_add_cookie("MUID=37D44E90795463D4381443127D546284; DOMAIN=www.bing.com");

	web_url("fsEmploy.do", 
		"URL=http://mps-test.haomaiche.com/fs/fs/fsEmploy.do?method=getLastOrder", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/login.html", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_url("fsEmploy.do_2", 
		"URL=http://mps-test.haomaiche.com/fs/fs/fsEmploy.do?method=validateAccount&empPhone=17765161670&empUser=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/login.html", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_url("fsEmploy.do_3", 
		"URL=http://mps-test.haomaiche.com/fs/fs/fsEmploy.do?method=validateSmCode&phone=17765161670&code=041713", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/login.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("fsEmploy.do_4", 
		"Action=http://mps-test.haomaiche.com/fs/fs/fsEmploy.do?method=login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/login.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userPhone", "Value=17765161670", ENDITEM, 
		"Name=empPhone", "Value=17765161670", ENDITEM, 
		"Name=smCode", "Value=041713", ENDITEM, 
		"Name=token", "Value=", ENDITEM, 
		LAST);

	web_url("fsEmploy.do_5", 
		"URL=http://mps-test.haomaiche.com/fs/fs/fsEmploy.do?method=index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c.cnzz.com/core.php?web_id=1262932335&t=z", "Referer=http://mps-test.haomaiche.com/fs/index.html", ENDITEM, 
		"Url=https://cnzz.mmstat.com/9.gif?abc=1&rnd=1903752157", "Referer=http://mps-test.haomaiche.com/fs/index.html", ENDITEM, 
		LAST);

	web_add_cookie("CNZZDATA1262932335=438912350-1568886028-%7C1568886028; DOMAIN=mps-test.haomaiche.com");

	web_add_cookie("UM_distinctid=16d492b3fd41bf-09b093332a586-26596859-1fa400-16d492b3fd51ca; DOMAIN=mps-test.haomaiche.com");

	lr_think_time(5);

	web_url("fsEmploy.do_6", 
		"URL=http://mps-test.haomaiche.com/fs/fs/fsEmploy.do?method=getCurUser&_=1568890644480", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/index.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fsRespond.do", 
		"URL=http://mps-test.haomaiche.com/fs/fs/fsRespond.do?method=getWaitProcessTaskInfo&_=1568890644484", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/index.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("stat.htm", 
		"URL=https://z7.cnzz.com/stat.htm?id=1262932335&r=&lg=zh-cn&ntime=none&cnzz_eid=438912350-1568886028-&showp=1920x1080&p=http%3A%2F%2Fmps-test.haomaiche.com%2Ffs%2Findex.html&t=4S%E5%BA%97%E5%90%8E%E5%8F%B0%E7%AE%A1%E7%90%86%E7%B3%BB%E7%BB%9F%E7%99%BB%E5%BD%95%E7%95%8C%E9%9D%A2&umuuid=16d492b3fd41bf-09b093332a586-26596859-1fa400-16d492b3fd51ca&h=1&rnd=668763734", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://mps-test.haomaiche.com/fs/index.html", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("BAIDUID=CF00F504FC76A13BC3FF661E22648210:FG=1; DOMAIN=www.baidu.com");

	web_add_cookie("BIDUPSID=CF00F504FC76A13BC3FF661E22648210; DOMAIN=www.baidu.com");

	web_add_cookie("PSTM=1561107345; DOMAIN=www.baidu.com");

	web_add_cookie("BAIDUID=CF00F504FC76A13BC3FF661E22648210:FG=1; DOMAIN=sp1.baidu.com");

	web_add_cookie("BIDUPSID=CF00F504FC76A13BC3FF661E22648210; DOMAIN=sp1.baidu.com");

	web_add_cookie("PSTM=1561107345; DOMAIN=sp1.baidu.com");

	lr_think_time(12);

	web_url("23360.html", 
		"URL=http://rj.baidu.com/soft/detail/23360.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.baidu.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=https://sp1.baidu.com/5b1ZeDe5KgQFm2e88IuM_a/cm.gif?type=wwwerror&terminal=www", "Referer=https://www.baidu.com/search/error.html", ENDITEM, 
		LAST);

	return 0;
}