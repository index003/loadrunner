Action()
{

	//Ctrl+Alt+c 注释快捷键
	//Ctrl+Alt+u 取消注释快捷键 

	//定义的变量要放在最上面
	char *tmp="hello";

	int num;
 
    char nameVar[100];
 
    char nameValue[100];

	lr_output_message( "#%s", lr_eval_string( "{testData}" ) );
    //lr_output_message( "We are on iteration #%s", lr_eval_string( "{iteration}" ) );
	lr_output_message( "#%s", lr_eval_string( "{testData}" ) );





	lr_save_string("192.168.10.35","ip"); //将常量保存为参数ip

	lr_save_string(tmp,"miao");     //将变量tmp保存为参数miao

	lr_output_message(lr_eval_string("{ip}"));

	lr_output_message(lr_eval_string("{miao}"));




     lr_save_string("AAA","name_1");
 
    lr_save_string("BBB","name_2");
 
    lr_save_string("CCC","name_3");
  
    lr_save_string("3","name_count");//定义数组长度
 
 
    for(num=1;num<=atoi(lr_eval_string("{name_count}"));num++){

		lr_output_message("%d",num);
 
        sprintf( nameVar,"{name_%d}",num );
 
        sprintf( nameValue,"%s",lr_eval_string(nameVar) );
 
        lr_save_string(lr_eval_string(nameVar),"nameValue");
 
        lr_output_message("nameValue的值:%s",lr_eval_string("{nameValue}"));
 
    }


//     int num;
//
//     char nameVar[100];
//
//     lr_save_string("AAA","name_1");
//
//     lr_save_string("BBB","name_2");
//
//     lr_save_string("CCC","name_3");
//
//     lr_save_string("3","name_count");//定义数组长度
//
//
//     for(num=1;num<=atoi(lr_eval_string("{name_count}"));num++){
//
//
//         sprintf( nameVar,"{name_%d}",num );//将num变量保存到fidVar中，
//
// //      lr_output_message("name的值:%s",lr_eval_string(nameVar));
//
//         lr_save_string(lr_eval_string(nameVar),"test");
//
//         lr_output_message("test的值:%s",lr_eval_string("{test}"));
//
//
//     }
 


	return 0;
}
