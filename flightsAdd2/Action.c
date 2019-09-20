Action()
{

	char *departcity,departcitys[25];
	char *arrivecity,arrivecitys[25];
	char *flightno;
	char flightnumber[25];
	
	char departstr[20];
	char arrivestr[20];
	int flightcount;
	int departrandnum=0;
	int arriverandnum=0;

	//<input type="hidden" name="userSession" value="127085.82818955zfDzQHHpciHfDQccVpizDHcf"/>
	web_reg_save_param("usersession","LB=userSession\" value=\"","RB=\"/>",LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/mer_login.gif", "Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", ENDITEM, 
		LAST);

	lr_output_message("usersession=%s",lr_eval_string("{usersession}"));
	
	lr_think_time(13);

	web_reg_find("Text=Welcome","SaveCount=loginflag",LAST);
	
	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={usersession}", ENDITEM, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=60", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		LAST);
	
			if(atoi(lr_eval_string("{loginflag}"))>0)
		   {
			   lr_output_message("login successful!");
			}
		else
			{
				lr_output_message("login failed!");
				return -1;
		}

	lr_think_time(7);

	web_reg_save_param("flights","LB=\">","RB=</option>","ORD=ALL",LAST);
	
	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t10.inf", 
		LAST);


	flightcount=atoi(lr_eval_string("{flights_count}"));

	lr_output_message("flightcount=%d",flightcount);
	
	lr_think_time(10);
	
	departrandnum = rand()%(flightcount/2)+1;

	
	sprintf(departstr,"{flights_%d}",departrandnum);
	lr_output_message("当前城市编号是：%s",departstr);
	lr_output_message("第%d个城市:%s",departrandnum,lr_eval_string(departstr));
	
	arriverandnum = rand()%(flightcount/2)+1;
	lr_output_message("%d",arriverandnum);
	
	while(1){
		
		if(departrandnum==arriverandnum){
			arriverandnum = rand()%(flightcount/2)+1;
		}
		else
			break;
	}
	
	sprintf(arrivestr,"{flights_%d}",arriverandnum);
	lr_output_message("当前城市编号是：%s",arrivestr);
	lr_output_message("第%d个城市:%s",arriverandnum,lr_eval_string(arrivestr));
	
	sprintf(departcitys,"Value=%s",lr_eval_string(departstr));
	sprintf(arrivecitys,"Value=%s",lr_eval_string(arrivestr));

 	lr_output_message("departcitys is %s",departcitys);
 	lr_output_message("arrivecitys is %s",arrivecitys);


	
//	departcity = lr_paramarr_random("flights");
// 	arrivecity = lr_paramarr_random("flights");	
// 	
// 	lr_output_message("departcity=%s",departcity);
// 	lr_output_message("arrivecity=%s",arrivecity);
//
// 		while(1)
// 		{
// 			int result = strcmp(arrivecity,departcity);
// 			
// 			if(result>0)
// 				break;
// 			else if(result<0)
// 				break;
// 			else
// 				arrivecity = lr_paramarr_random("flights");
// 		}
// 		
// 		
//// 		while(1){
//// 		
//// 			if(arrivecity==departcity)
//// 				arrivecity = lr_paramarr_random("flights");
//// 			else
//// 				breank;
//// 		}
//
// 	lr_output_message("departcity=%s",departcity);
// 	lr_output_message("arrivecity=%s",arrivecity);
//
// 	
// 	sprintf(departcitys,"Value=%s",departcity);
// 	sprintf(arrivecitys,"Value=%s",arrivecity);
//
// 	lr_output_message("departcitys is %s",departcitys);
// 	lr_output_message("arrivecitys is %s",arrivecitys);
	
	
	lr_think_time(2);

	//<input type="radio" name="outboundFlight" value="020;338;{departdate}"
	
	web_reg_save_param("flightline","LB=outboundFlight\" value=\"","RB={departdate}","ORD=All",LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=depart", departcitys, ENDITEM, 
		"Name=departDate", "Value={departdate}", ENDITEM, 
		"Name=arrive", arrivecitys, ENDITEM, 
		"Name=returnDate", "Value={returndate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=41", ENDITEM, 
		"Name=findFlights.y", "Value=12", ENDITEM, 
		LAST);

	lr_think_time(9);


	flightno=lr_paramarr_random("flightline");
	lr_output_message(flightno);
	sprintf(flightnumber,"Value=%s%s",flightno,lr_eval_string("{departdate}"));
	lr_output_message("flightnumber=%s",flightnumber);
	
	lr_think_time(9);
	
	web_submit_form("reservations.pl_2", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=outboundFlight",flightnumber, ENDITEM, 
		"Name=reserveFlights.x", "Value=30", ENDITEM, 
		"Name=reserveFlights.y", "Value=15", ENDITEM, 
		LAST);

	lr_think_time(16);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=jojo", ENDITEM, 
		"Name=lastName", "Value=bean", ENDITEM, 
		"Name=address1", "Value=test", ENDITEM, 
		"Name=address2", "Value=test", ENDITEM, 
		"Name=pass1", "Value=hmc", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=71", ENDITEM, 
		"Name=buyFlights.y", "Value=13", ENDITEM, 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t14.inf", 
		LAST);

	return 0;
}