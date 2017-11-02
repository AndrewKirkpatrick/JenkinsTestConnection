Action()
{
	

	/* Test to check the logs */

	lr_start_transaction("BP01_GIT_001_Open_HomePage");
	
	//lr_think_time(1);
	sleep(1000* atoi(lr_eval_string("{prm_RandomNumber}")));
	
	
	lr_end_transaction("BP01_GIT_001_Open_HomePage", LR_AUTO);

	
	lr_start_transaction("BP01_GIT_002_Sel_Register");
	
	//lr_think_time(2);
	sleep(2000* atoi(lr_eval_string("{prm_RandomNumber}")));
	
	lr_end_transaction("BP01_GIT_002_Sel_Register", LR_AUTO);
	
	
	lr_start_transaction("BP01_GIT_003_Enter_Details_Submit");
	
	//lr_think_time(3);
	sleep(3000* atoi(lr_eval_string("{prm_RandomNumber}")));
	
	lr_end_transaction("BP01_GIT_003_Enter_Details_Submit", LR_AUTO);
	
	
	lr_start_transaction("BP01_GIT_004_Sel_HomePage");
	
	//lr_think_time(4);
	sleep(4000* atoi(lr_eval_string("{prm_RandomNumber}")));
	
	lr_end_transaction("BP01_GIT_004_Sel_HomePage", LR_AUTO);
	
	return 0;
}
