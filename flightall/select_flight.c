select_flight()
{
	
//	char *flightno;
//	char flightnumber[25];
//	flightno=lr_paramarr_random("flightline");
//	lr_output_message(flightno);
//	sprintf(flightnumber,"Value=%s%s",flightno,lr_eval_string("{departdate}"));
//	lr_output_message("flightnumber=%s",flightnumber);

	
	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=251;494;{departdate}", ENDITEM, 
		//"Name=outboundFlight", flightnumber, ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=59", ENDITEM, 
		"Name=reserveFlights.y", "Value=12", ENDITEM, 
		LAST);

	return 0;
}
