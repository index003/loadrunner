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

	return 0;
}