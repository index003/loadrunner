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
		"BodyBinary=\\x00\n\\x01\\x8B\\x008R\\x00\\x00\\x00\\x00\\xB8\\x00\\x00\\x00\\x02\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00��s\\xC6\\x1FJ��\\x95'\\x19\\xEB\\x1DXt��)\\x16\\xA1\"i\\xB9\\x1ADٗ�m\\xB7\n��\\x1C\\x11�M��\\xE3\\x0F��\\x172H���{\\xC8\\x0Bd}>v��\\xD50-\\xEE4\\x80\"\tgNI��\\xFF&AMgA<���r\\x9C\\x1B\\x01\\x1C\n���a�wC�v˂��)H�bYU3��"
		"!\\xE0%^\\x90,Z\\x18\\xCD;\\x94\\x14\\x87&\\x086U\\xA7", 
		LAST);

	web_custom_request("q.cgi_2", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x01@\\x008R\\x00\\x00\\x00\\x01\\x1A\\x00\\x00\\x00\\x03\\x0B\\x9E\r\\x00\\x00\\x00\\x00p�]\\xE01��A\\x1C0ƿJ�x\\x8F\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x13A\\xCF\\x0B��?6�_\\x1E\\x19�e�aNo\\x03�]�b��&\\x08���[2�����zȣ\\x1C\\xFF�tB=\\x9A\\x00z\\xCC\\x00\\xC9\\x7F��\\x0F��UyXa=�C����[7Z\\xFA\\x7FM��Ϸ����a��b�l#�A�|C�\\x0B2�ڞsB\\xFFJ\\xC27~�ϙ��\\\x05�Ba؝a�K{p]fsX\\x00h\\xE4\t��\\x1B\\x80\\x11/��\\x10w\\x06\\xF1/)"
		"\\xE4$\\xC3\\x17w�ޚ�K1�7*��/�-�^�$sҐ���b\\x0F\\xAB\\x11$\\xD6\\x05@A,J���g\\x1C\tp��\\x871\\xE1#��}��mj�p\\xD6'LX\\x16\\xC2\\x13��{\\xB8", 
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
		"<F\\x00P\\x15`\\x08v\\x056.1.1\\x80@\\x90\\x15\\xA0\\x08\\xB6\\x00��\\x00��\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0B��\\x0C\\xA8\\x0C", 
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
		"<F\\x00P\\x12`\\x08v\\x056.1.1\\x80@\\x90\\x12\\xA0\\x08\\xB6\\x00��\\x00��\\x0F\\xF6\\x10\\x00\\xF0\\x11\\xFF\\xF0\\x12\\xFF\\xF0\\x13\\xFF\\xF6\\x14\\x00\\xF6\\x15\\x00\\xFC\\x16\\xFC\\x17\\xFC\\x18\\xF6\\x19\\x00\\xFC\\x1A\\xF6\\x1B\\x00\\xFC\\x1C\\xFC\\x1D\\xFC\\x1E\\xFC\\x1F\\xF6 \\x0E6.1.7601.17514\\x0B��\\x0C\\xA8\\x0C", 
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
		"BodyBinary=\\x00\n\\x01@\\x008R\\x00\\x00\\x00\\x01\n\\x00\\x00\\x00\\x08\\x0B\\x9E\r\\x00\\x00\\x00\\x00p8����+��aN�z�@�w\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00�ݪ���\\xD8!\\xE7:|����^\\xA9*�n\\x16��WPIf��\\xB4\\x1F�v�w\\xDE\\x05B\\x1E��+\\xDD\\x1B3\r����<��RcZ�r\\x1C~�L\\x1A\\x02�P|�fb\\x80��]\\x90\\x19��T\\x87\\x12��^��\\x0B�h\\xF2!Ya\\xE689\r\\x7F���OSnG8b����!\rR�A�j\\x0B\\xF19A�k�`V\\x7F&�`E�ޫ�$?YI�TM��\\x0F����\\xB5\\x1C)~s��\\x15��**\n"
		"\\x907��𽻄a��-������\\x01\\x02拮C�Y\\x15�S7\\xB7\\x05ڞ�œk�s��\\xA4\\x1FR", 
		LAST);

	web_custom_request("q.cgi_4", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00X\\x008R\\x00\\x00\\x00\\x00\\xA2\\x00\\x00\\x00\\x04\\x0B\\x9E\r\\x00\\x00\\x00\\x00p��h\\xFB\\x1C\\x1D\\\\��丬Ռ�\\xE8\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\xF1\\x07\ro\\x81\\x0F\\xEC\\x15/��¦�`���9��gm�/(�S1_�e�Z+�t\\x16��\\x84=�]_v\\xE3\\x05\\xED\\xFFU=Ű@/$\\x1D~�o�^\\xF62��T\\x16\\xAB\\x1A�pӹ6�Grά���{����\\xFC'��\t��\\xC6&\\xCA?Z��", 
		LAST);

	web_custom_request("q.cgi_5", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00X\\x008R\\x00\\x00\\x00\\x00\\xA2\\x00\\x00\\x00\\x05\\x0B\\x9E\r\\x00\\x00\\x00\\x00pU��4�̦�\\xAC\\xFF$��v�[\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00b5Ԋf��\\xE7\\x7F\\xD1\\x1E\\x966&탸���\\xCB%B\\xE0\t�}�N\\xE1?��Q\\x1D\\x1E\\x0F���y�bw��]z8=������bs��\\x07��\\xDA\\x1CK\\x1F\\x1A���ZS��\\x06\\xAC \\xF2(�C\\x9F+�G*:\\x0F��\\xE70^b��\\x15DC\\x02�ǨG", 
		LAST);

	web_custom_request("q.cgi_6", 
		"URL=http://conna.gj.qq.com/q.cgi", 
		"Method=POST", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x00\n\\x00X\\x008R\\x00\\x00\\x00\\x00\\xA2\\x00\\x00\\x00\\x06\\x0B\\x9E\r\\x00\\x00\\x00\\x00pਦ�|\\xB18\\x06i\\x04�e\\x80��F\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00�pR;��ފ�Y\\x0C\\xEB\\x11,\\xAC.��\\xFC\r\\x1C{W���yR\\xB4-\\x10ϓZ���n\\xCF\\x05ie������ҟ�좻��\\x9F\"9����\\x0E]�yeʵA. \\x01g6O\\xE5\\x02��\\xCD\\x1B�Okj\\x81\\x1C��\\x80��[\\x1E\\x05\\x1C�~c��)(\\x8C", 
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
		"BodyBinary=\\x00\n\\x00\\xA6\\x008R\\x00\\x00\\x00\\x01B\\x00\\x00\\x00\\x07\\x0B\\x9E\r\\x00\\x00\\x00\\x00p���&a��\\xE5>=\\x7F\\x03fS\\xBF\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00$n\\x00�keL\\x1B\\x1Ft�X\\x02\\xAA5\\x18�^��\\x10�W����7\\xCA7\\x1F\\x0EW\\xC8\\x00ټO+w@A\\xB2({7X\\x1C?��\"\\x1C�u\\x0C��\\xCA6���p\r��\\x03\\xE1?q\\x13\\x9F&N\n\\x17�P���MV#\\x08�LmJ��m\\xFF�kW���tp�o,A_��q5���\\xB3\\x7F\\x19\\x11��&���\\xBE.\\x11\t"
		"s\\x0F����\\xF1\\x00\\x9F\\x1D6�f��͙��^/��\\x0B\\x1BoFP>GP��)�V(|�kZS��>\\xD9\\x19ٙe.[8�{��_�Zܚ�`�D���t��\\x0E\\xFB\\x18��\\x18%\\x16���`�sZ~��V\\xE89`̌\\x01\\xF7\\x0F\\x0E��`p�5\\xE8,/\\xBF\\x0Fb\\xB6\"��$\\xDA\\x08ҝ\\xF1\"�{(�}5m\\x0EN", 
		LAST);

	return 0;
}