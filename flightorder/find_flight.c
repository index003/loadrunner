find_flight()
{

	char *departcity,departcitys[26];
	char *arrivecity,arrivecitys[25];

	departcity = lr_paramarr_random("flights");
	arrivecity = lr_paramarr_random("flights");

		while(1)
		{
			if(arrivecity==departcity)
				arrivecity = lr_paramarr_random("flights");
			else
				break;
		}

	lr_output_message("departcity=%s",departcity);
	lr_output_message("arrivecity=%s",arrivecity);

	sprintf(departcitys,"Value=%s",departcity);
	sprintf(arrivecitys,"Value=%s",arrivecity);

	lr_output_message("departcitys is %s",departcitys);
	lr_output_message("arrivecitys is %s",arrivecitys);

	

	lr_think_time(16);


	web_reg_save_param("flightline","LB=outboundFlight value=","RB={departdate}","ORD=All",LAST);
	//lr_output_message(lr_eval_string("{flightline}"));

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/reservations.pl?page=welcome", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		//"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=depart", departcitys, ENDITEM, 
		"Name=departDate", "Value={departdate}", ENDITEM,
		//"Name=arrive", "Value=London", ENDITEM, 
		"Name=arrive", arrivecitys, ENDITEM, 
		"Name=returnDate", "Value={returndate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=38", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	return 0;
}
