open_index()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("q.cgi", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x01\\x8B\\x008R\\x00\\x00\\x00\\x00\\xB8\\x00\\x00\\x00\\x02\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00©âs\\xC6\\x1FJžÊ\\x95'\\x19\\xEB\\x1DXtëÂ)\\x16\\xA1\"i\\xB9\\x1ADÙ—Êm\\xB7\n±Ø\\x1C\\x11‡M‹ë\\xE3\\x0FÆÍ\\x172H©Âõ{\\xC8\\x0Bd}>väÓ\\xD50-\\xEE4\\x80\"\tgNIÁÀ\\xFF&AMgA<·ÄÛr\\x9C\\x1B\\x01\\x1C\nŽÄîawCvË‚ÐÐ)H¾bYU3š¨"
		"!\\xE0%^\\x90,Z\\x18\\xCD;\\x94\\x14\\x87&\\x086U\\xA7", 
		LAST);

	web_custom_request("q.cgi_2", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x01@\\x008R\\x00\\x00\\x00\\x01\\x1A\\x00\\x00\\x00\\x03\\x0B\\x9E\r\\x00\\x00\\x00\\x00pâ]\\xE01ç ÂA\\x1C0Æ¿Jx\\x8F\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x13A\\xCF\\x0B¼×?6¹_\\x1E\\x19ÂeåaNo\\x03‹]ƒbµƒ&\\x08¯ÙÔ[2ŸŽÓüzÈ£\\x1C\\xFFßtB=\\x9A\\x00z\\xCC\\x00\\xC9\\x7F†÷\\x0F”ÌUyXa=žCâüŠ¨[7Z\\xFA\\x7FM»ûÏ·¢Á¢ó‹aÀŒbl#þAË|Cè„\\x0B2ØÚžsB\\xFFJ\\xC27~õÏ™Þ\\\x05™BaØaþK{p]fsX\\x00h\\xE4\tª‘\\x1B\\x80\\x11/«²\\x10w\\x06\\xF1/)"
		"\\xE4$\\xC3\\x17wÒÞšÌK1ê¯7*ûä/à´-¤^á¿$sÒŸ‰è b\\x0F\\xAB\\x11$\\xD6\\x05@A,JöÃêg\\x1C\tp¾Ì\\x871\\xE1#íÃ}šìmj«p\\xD6'LX\\x16\\xC2\\x13‹{\\xB8", 
		LAST);

	web_custom_request("wup.browser.qq.com", 
		"URL=https://wup.browser.qq.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/multipart-formdata", 
		"Referer=", 
		"Snapshot=t33.inf", 
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
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=", 
		"BodyBinary=\\x00\\x00\\x00\\xEC\\x10\\x02,<LV\\x0Bqbcloudctrlf\\x0CgetCloudCtrl}\\x00\\x01\\x00\\xBE\\x08\\x00\\x01\\x06\\x03req\\x18\\x00\\x01\\x06\\x0FQB.CloudCtrlReq\\x1D\\x00\\x01\\x00\\x9D\n\\x06 2a28d5a974c5f5aa416393aa1a4b4102\\x16\\x00& 2a28d5a974c5f5aa416393aa1a4b4102"
		"<F\\x00P\\x12`\\x08v\\x056.1.1\\x80@\\x90\\x12\\xA0\\x08\\xB6\\x00ÌÖ\\x00ìü\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0BŒ˜\\x0C\\xA8\\x0C", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("q.cgi_3", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x01@\\x008R\\x00\\x00\\x00\\x01\n\\x00\\x00\\x00\\x08\\x0B\\x9E\r\\x00\\x00\\x00\\x00p8§Ž¡»+´·aNœz®@¥w\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00ÌÝª«–ß\\xD8!\\xE7:|Åâû•^\\xA9*ên\\x16ÚÅWPIfýö\\xB4\\x1F’vÖw\\xDE\\x05B\\x1E¶±+\\xDD\\x1B3\r«ô¨€<ðòRcZÎr\\x1C~¢L\\x1A\\x02úP|¢fb\\x80ÇÜ]\\x90\\x19ÝùT\\x87\\x12Ž¤^áÍ\\x0Bðh\\xF2!Ya\\xE689\r\\x7F´‘ç¤OSnG8bŸŸ©á!\rRöAñj\\x0B\\xF19AÔkæ²`V\\x7F&ø`EûÞ«²$?YI—TMáÅ\\x0Fœˆ‡ê\\xB5\\x1C)~sœ\\x15½Ì**\n"
		"\\x907ØÑð½»„aÜÉ-üÌô¦ó\\x01\\x02æ‹®C¦Y\\x15ÉS7\\xB7\\x05ÚžßÅ“k”s£­\\xA4\\x1FR", 
		LAST);

	web_custom_request("q.cgi_4", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00X\\x008R\\x00\\x00\\x00\\x00\\xA2\\x00\\x00\\x00\\x04\\x0B\\x9E\r\\x00\\x00\\x00\\x00p»§h\\xFB\\x1C\\x1D\\\\Š½ä¸¬ÕŒö\\xE8\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\xF1\\x07\ro\\x81\\x0F\\xEC\\x15/ÒÅÂ¦é`ìðî½9üÀgmé¿/(áS1_¼ešZ+ìt\\x16³ƒ\\x84=…]_v\\xE3\\x05\\xED\\xFFU=Å°@/$\\x1D~Äo¾^\\xF62¤ÔT\\x16\\xAB\\x1ApÓ¹6ÑGrÎ¬»Îì‹{À¨‰¼\\xFC'†\t±–\\xC6&\\xCA?Z§×", 
		LAST);

	web_custom_request("q.cgi_5", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00X\\x008R\\x00\\x00\\x00\\x00\\xA2\\x00\\x00\\x00\\x05\\x0B\\x9E\r\\x00\\x00\\x00\\x00pUÂí4¿Ì¦\\xAC\\xFF$ýœv³[\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00b5ÔŠfÐ×\\xE7\\x7F\\xD1\\x1E\\x966&íƒ¸’™ñ\\xCB%B\\xE0\t“}óN\\xE1?¯úQ\\x1D\\x1E\\x0F©Ýy©bw„·]z8=ôµ¸¦Æõbs²´\\x07®´\\xDA\\x1CK\\x1F\\x1AßíëªZSö¶\\x06\\xAC \\xF2(çC\\x9F+£G*:\\x0F§›\\xE70^bÞÕ\\x15DC\\x02£Ç¨G", 
		LAST);

	web_custom_request("q.cgi_6", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00X\\x008R\\x00\\x00\\x00\\x00\\xA2\\x00\\x00\\x00\\x06\\x0B\\x9E\r\\x00\\x00\\x00\\x00pà¨¦–|\\xB18\\x06i\\x04©e\\x80–­F\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00ßpR;š†ÞŠãY\\x0C\\xEB\\x11,\\xAC.²¨\\xFC\r\\x1C{W¾‡¢yR\\xB4-\\x10Ï“Z±ÕÌn\\xCF\\x05ie¬Â÷Ž±ÏÒŸ˜ì¢»ŸÉ\\x9F\"9ûÜúì\\x0E]òyeÊµA. \\x01g6O\\xE5\\x02øÔ\\xCD\\x1BŒOkj\\x81\\x1CóÂ\\x80ƒÊ[\\x1E\\x05\\x1C­~c§ß)(\\x8C", 
		LAST);

	web_url("nav.pl", 
		"URL=http://127.0.0.1:1080/WebTours/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/welcome.pl?signOff=true", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("q.cgi_7", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00\\xA6\\x008R\\x00\\x00\\x00\\x01B\\x00\\x00\\x00\\x07\\x0B\\x9E\r\\x00\\x00\\x00\\x00p‘íÑ&aÆõ\\xE5>=\\x7F\\x03fS\\xBF\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00$n\\x00ˆkeL\\x1B\\x1Ft±X\\x02\\xAA5\\x18Œ^¸†\\x10ÀWŠ±¯’7\\xCA7\\x1F\\x0EW\\xC8\\x00Ù¼O+w@A\\xB2({7X\\x1C?¯æ\"\\x1C¹u\\x0CÝ\\xCA6™×òp\r¼‰\\x03\\xE1?q\\x13\\x9F&N\n\\x17œP²¤—MV#\\x08øLmJÖm\\xFF¦kW±Ðòtp¦o,A_ª´q5ÆéçŽ\\xB3\\x7F\\x19\\x11îÌ&—ô„Ê\\xBE.\\x11\t"
		"s\\x0FæÞùì\\xF1\\x00\\x9F\\x1D6Éfö¢Í™±ö^/˜Õ\\x0B\\x1BoFP>GPÌÇ)©V(|—kZSÆñ>\\xD9\\x19Ù™e.[8®{÷‘_„ZÜšÂ`žD‚ªÊtØñ\\x0E\\xFB\\x18»€\\x18%\\x16÷ñ¨Ö`©sZ~–äV\\xE89`ÌŒ\\x01\\xF7\\x0F\\x0EüË`pã·5\\xE8,/\\xBF\\x0Fb\\xB6\"ˆú$\\xDA\\x08Ò\\xF1\"‡{(â‘}5m\\x0EN", 
		LAST);

	return 0;
}