	char flightnumber[25];

select_flight()
{
	char *flightno;

	flightno=lr_paramarr_random("flightline");
	lr_output_message(flightno);

	sprintf(flightnumber,"Value=%s%s",flightno,lr_eval_string("{departdate}"));
	lr_output_message("flightnumber=%s",flightnumber);


	lr_think_time(10);

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/reservations.pl", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight",flightnumber , ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=44", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	return 0;
}
