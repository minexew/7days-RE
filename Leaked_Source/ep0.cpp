init():()
{
	LoadMap(2021);										//测试可能替换更改
	wait(IsMapLoadOK());
	TeleportPlayer( 26.5000,0.0000,62.5000 );			//正常出生点
	//TeleportPlayer( 40.5000,-9.0000,236.5000 );		//测试用的出生点
	//TeleportPlayer( -187.4031,-29.5208,124.5877 );	//测试用的2002出生点
	//TeleportPlayer( -181.0000,-28.5000,97.0000 );		//测试用的1021出生点


	SetPlayerDir(0,0,1);
	SetSwordType(0);

	AddDoorTrigger( 1, 0, 0, 4, 2011, 2011, 27.5000,-8.0000,90.5000,0,0,1,20.0000,-11.0000,82.0000,33.0000,-9.0000,84.0000 );//开启通往<2011>的门


	SetEventHappen( 64 );								//已旋转了黄色房间2024
	SetEventHappen( 66 );								//已旋转了紫色房间2020
	SetEventHappen( 65 );								//已旋转了红色房间1020
	SetEventHappen( 81 );								//已播放了第一幕剧情动画
	//SetEventHappen( short );
	
	enableTask("gotitem");

	if(IsEventHappen( 65 ) == 0 ){
		AddDoorTrigger( 1, 0, 0, 3, 1020, 1020, -183.5000,-48.5000,134.5000,1,0,0, -185.0000,-34.0000,101.0000,-177.0000,-32.0000,103.0000 );
	}else{
		AddDoorTrigger( 1, 0, 0, 3, 1002, 1002, -183.5000,-29.0000,109.5000,1,0,0, -185.0000,-34.0000,101.0000,-177.0000,-32.0000,103.0000 );
	}

	AddDoorTrigger( 1, 0, 0, 3, 2022, 2022, -1.0000,-72.0000,48.0000,1,0,1, -186.0000,-35.0000,121.0000,-183.0000,-32.0000,128.0000 );//测试用


}

//TASK列表——————————————————————————————————————————————————————
gotitem():()
{
	PlayerGetItem(29);				//润滑剂
	PlayerGetItem(26);				//女佣休息室钥匙
	PlayerGetItem(30);				//休息室柜子钥匙

	disableTask("gotitem");
}