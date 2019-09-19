
	
find_flight()
{

	char *departcity,departcitys[25];
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
	
	
	lr_think_time(2);

	//<input type="radio" name="outboundFlight" value="020;338;09/20/2019"
	
	web_reg_save_param("flightline","LB=outboundFlight\" value=\"","RB={departdate}","ORD=All",LAST);
	
	
	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		//"Name=depart", "Value=London", ENDITEM, 
		"Name=depart", departcitys, ENDITEM, 
		"Name=departDate", "Value={departdate}", ENDITEM, 
		//"Name=arrive", "Value=Portland", ENDITEM, 
		"Name=arrive", arrivecitys, ENDITEM, 
		"Name=returnDate", "Value={returndate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=59", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);
	

	flightno=lr_paramarr_random("flightline");
	lr_output_message(flightno);
	sprintf(flightnumber,"Value=%s%s",flightno,lr_eval_string("{departdate}"));
	lr_output_message("flightnumber=%s",flightnumber);

	
	return 0;
}
