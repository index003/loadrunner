Action()
{

	//Ctrl+Alt+c ע�Ϳ�ݼ�
	//Ctrl+Alt+u ȡ��ע�Ϳ�ݼ� 

	//����ı���Ҫ����������
	char *tmp="hello";

	int num;
 
    char nameVar[100];
 
    char nameValue[100];

	lr_output_message( "#%s", lr_eval_string( "{testData}" ) );
    //lr_output_message( "We are on iteration #%s", lr_eval_string( "{iteration}" ) );
	lr_output_message( "#%s", lr_eval_string( "{testData}" ) );





	lr_save_string("192.168.10.35","ip"); //����������Ϊ����ip

	lr_save_string(tmp,"miao");     //������tmp����Ϊ����miao

	lr_output_message(lr_eval_string("{ip}"));

	lr_output_message(lr_eval_string("{miao}"));




     lr_save_string("AAA","name_1");
 
    lr_save_string("BBB","name_2");
 
    lr_save_string("CCC","name_3");
  
    lr_save_string("3","name_count");//�������鳤��
 
 
    for(num=1;num<=atoi(lr_eval_string("{name_count}"));num++){

		lr_output_message("%d",num);
 
        sprintf( nameVar,"{name_%d}",num );
 
        sprintf( nameValue,"%s",lr_eval_string(nameVar) );
 
        lr_save_string(lr_eval_string(nameVar),"nameValue");
 
        lr_output_message("nameValue��ֵ:%s",lr_eval_string("{nameValue}"));
 
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
//     lr_save_string("3","name_count");//�������鳤��
//
//
//     for(num=1;num<=atoi(lr_eval_string("{name_count}"));num++){
//
//
//         sprintf( nameVar,"{name_%d}",num );//��num�������浽fidVar�У�
//
// //      lr_output_message("name��ֵ:%s",lr_eval_string(nameVar));
//
//         lr_save_string(lr_eval_string(nameVar),"test");
//
//         lr_output_message("test��ֵ:%s",lr_eval_string("{test}"));
//
//
//     }
 


	return 0;
}
