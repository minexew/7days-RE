//Event319=��һ�ν���2050

init():()
{
	wait(IsMapLoadOK());
	AddDoorTrigger( 10100, 0, 0,  20, 1063,1063, 33.2698,-13.4301,212.2443,1,0,0,53.8453,-50.9472,216.0152,54.8453,-50.2597,223.9237);//ͨ��1063
	AddDoorTrigger( 10101, 0, 0, 18, 2051,2051, 31.6066,-46.4828,273.0754,0,0,1 , 23.0000,-51.0000,264.0000,41.0000,-42.0000,270.0000 );//ͨ��2051
	AddDoorTrigger( 10125, -1, 51,  18, 2052,2052,28.0805,-8.6250,207.9579,0,0,-1,24.9409,-50.9420,215.2904,38.9760,-50.0145,216.8693);//ͨ��2052

	//    AddThing(99,0,-1,"cg_daziji_a",43.4292,-46.6907,234.0637,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000,1.0000,0.0000,0.0000, false);//��Ӵ��ֻ�[���99]
	//	EnableThingLight(99, true );
	//	SetThingAnim(99,"cg_daziji_a",0,-1,0);
	//	AddThing(98,0,-1,"oi_zhitiao_a",45.2980,-47.1887,236.3699,0.1486,0.0000,-0.7638,0.0000,0.3487,0.0000,0.5113,0.0000,0.0995 , false);//���ֽ��[���98]
	//	AddThing(97,0,-1,"oi_zhitiao_a",46.3909,-47.1887,236.2569,-0.3892,0.0000,0.6738,0.0000,0.3487,0.0000,-0.4510,0.0000,-0.2606, false);//���ֽ��[���97]


	AddThing( 1,0,0,"oszv_pintu_aa",32.1587,-43.0000,267.0000, 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
	SetThingColi( 1, false );
	if( IsEventHappen( 301 )) {
		SetThingAnim( 1, "oszv_pintu_aa", 0,0,0);
		// ��ɵķ���
		AddThing( 10,0,0,"oszv_pintu_ab",30.5460,-41.4805,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 11,0,0,"oszv_pintu_ac",31.9101,-41.4804,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 12,0,0,"oszv_pintu_ad",33.2464,-41.4763,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 13,0,0,"oszv_pintu_ae",30.5460,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 14,0,0,"oszv_pintu_af", 31.9101,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 15,0,0,"oszv_pintu_ag", 33.2464,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 16,0,0,"oszv_pintu_ah", 30.5460,-44.5975,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 17,0,0,"oszv_pintu_ai", 31.9101,-44.5975,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 18,0,0,"oszv_pintu_aj", 33.2464,-44.5933,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 19,0,0,"oszv_pintu_ak", 30.5460,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 20,0,0,"oszv_pintu_al", 31.9101,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		AddThing( 21,0,0,"oszv_pintu_am", 33.2464,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
	}else{
		EnableDoorTrigger( 10101, false );
		SetThingAnim( 1, "oszv_pintu_aa", 0,1,0);

		if( IsEventHappen( 303 )) {
			// ���۾������ҵķ���
			AddThing( 10,0,0,"oszv_pintu_ab",30.5460,-39.9379,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 11,0,0,"oszv_pintu_ac",30.5460,-44.5975,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 12,0,0,"oszv_pintu_ad",30.5460,-41.4805,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 13,0,0,"oszv_pintu_ae",31.9101,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 14,0,0,"oszv_pintu_af", 30.5460,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 15,0,0,"oszv_pintu_ag", 31.9101,-41.4805,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 16,0,0,"oszv_pintu_ah", 30.5460,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 17,0,0,"oszv_pintu_ai", 33.2464,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 18,0,0,"oszv_pintu_aj", 33.2464,-41.4805,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 19,0,0,"oszv_pintu_ak", 31.9101,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 20,0,0,"oszv_pintu_al", 33.2464,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 21,0,0,"oszv_pintu_am", 33.2464,-44.5975,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );

			AddActTrigger( 2,  23.0000,-51.0000,264.0000,41.0000,-42.0000,270.0000  );	//���õ��鷶Χ����
			SetActTrigSelCnt( 2, 2 );
			SetActTrigString( 2, 0, 305 );											//�Ƿ�Ҫ��ʼƴͼ��
			SetActTrigString( 2, 1, 3 );
			SetActTrigString( 2, 2, 4 );

			serial
			{
				iClub1 = 12;
				iClub2 = 15;
				iClub3 = 18;
				iClub4 = 14;
				iClub5 = 13;
				iClub6 = 20;
				iClub7 = 11;
				iClub8 = 0;
				iClub9 = 21;
				iClub10 = 16;
				iClub11 = 19;
				iClub12 = 17;
				iTime = 0;
			}

			enableTask("��ʼƴͼ");
		}else{	
			AddActTrigger( 1,  23.0000,-51.0000,264.0000,41.0000,-42.0000,270.0000  );	//���õ��鷶Χ����
			SetActTrigString( 1, 0, 302 );

			AddItemTrigger( 2, 58,  23.0000,-51.0000,264.0000,41.0000,-42.0000,270.0000  );	//ʹ�����������
			enableTask("�������");
			enableTask("ʹ���۾�");

			// ���۾��������ķ���
			AddThing( 10,0,0,"oszv_pintu_ab",30.5460,-41.4805,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 11,0,0,"oszv_pintu_ac",31.9101,-41.4805,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 12,0,0,"oszv_pintu_ad",33.2464,-41.4805,266.4  , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 13,0,0,"oszv_pintu_ae",30.5460,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 14,0,0,"oszv_pintu_af", 31.9101,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 15,0,0,"oszv_pintu_an", 33.2464,-43.0549,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 16,0,0,"oszv_pintu_ah", 30.5460,-44.5975,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 17,0,0,"oszv_pintu_ai", 31.9101,-44.5975,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 18,0,0,"oszv_pintu_aj", 33.2464,-44.5975,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 19,0,0,"oszv_pintu_ak", 30.5460,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 20,0,0,"oszv_pintu_al", 31.9101,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
			AddThing( 21,0,0,"oszv_pintu_am", 33.2464,-46.1720,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		}
	}

	//SetThingColi( 10, false );
	//SetThingColi( 11, false );
	//SetThingColi( 12, false );
	//SetThingColi( 13, false );
	//SetThingColi( 14, false );
	//SetThingColi( 15, false );
	//SetThingColi( 16, false );
	//SetThingColi( 17, false );
	//SetThingColi( 18, false );
	//SetThingColi( 19, false );
	//SetThingColi( 20, false );
	//SetThingColi( 21, false );

	EnableThingLight( 10, false );
	EnableThingLight( 11, false );
	EnableThingLight( 12, false );
	EnableThingLight( 13, false );
	EnableThingLight( 14, false );
	EnableThingLight( 15, false );
	EnableThingLight( 16, false );
	EnableThingLight( 17, false );
	EnableThingLight( 18, false );
	EnableThingLight( 19, false );
	EnableThingLight( 20, false );
	EnableThingLight( 21, false );

	//��������
	if(IsEventHappen( 309 ) == 0 ){
		AddThing(22,0,-1,"oszp_guilian_a", 54.6203,-44.4465,262.8570 ,0.1169,0.0000,0.0335,0.0000,0.1216,0.0000,-0.0335,0.0000,0.1169,false); //��ӹ���[���22]
		SetThingAnim(22,"oszp_guilian_a",0,1,0);

		enableTask("����");
	}else{
		AddThing(22,0,-1,"oszp_guilian_a",54.6203,-44.4465,262.8570,0.1169,0.0000,0.0335,0.0000,0.1216,0.0000,-0.0335,0.0000,0.1169,false);
		SetThingAnim(22,"oszp_guilian_b",300,1,1);
		EnableThingLight( 22,false);
	}

	//������
	AddThing(23,0,-1,"oszp_shiti_c",18.4185,-48.0961,238.8659,0.0000,0.0000,-0.2018,0.0000,0.2768,0.0000,0.2048,0.0000,0.0000 ,false); //��Ӵ���ʬ��[���23]
	SetThingAnim(23,"oszp_shiti_c",0,1,0);
	EnableThingLight( 23,false);
	enableTask("��ʬ��");


	//�浵---------------------------------------------------
	//    AddActTrigger( 100 ,43.0000,-52.0000,229.5416,49.2083,-49.0000,239.0000 );	//��Ӵ浵�Ĵ���
	//	SetActTrigSelCnt( 100 , 2 );
	//	SetActTrigString( 100 , 0, 15 );// [������Ϸ��]
	//	SetActTrigString( 100 , 1, 3 ); // Yes
	//	SetActTrigString( 100 , 2, 4 ); // No
	//
	//	enableTask("�浵");

	enableTask("��Ч01");
	if(IsEventHappen(319) == 0 ){																				//��û˵����
		enableTask("talk");
	}
}

//TASK�б���������������������������������������������������������������������������������������������������������������������������������������

VarName //���������
{
	(int) iClub1;// λ��1���ڵķ���
	(int) iClub2;// λ��2���ڵķ���
	(int) iClub3;// λ��3���ڵķ���
	(int) iClub4;// λ��4���ڵķ���
	(int) iClub5;// λ��5���ڵķ���
	(int) iClub6;// λ��6���ڵķ���
	(int) iClub7;// λ��7���ڵķ���
	(int) iClub8;// λ��8���ڵķ���
	(int) iClub9;// λ��9���ڵķ���
	(int) iClub10;// λ��10���ڵķ���
	(int) iClub11;// λ��11���ڵķ���
	(int) iClub12;// λ��12���ڵķ���
	(int) iTime;// ��ҳ��ԵĴ���
}

�������():(GetActTrigValue( 1 ) == 1)
{
	serial
	{
		SetKeyMask( true, true, true, true );									//���ΰ���
		EnableActTrigger( 1, false );
		ClearActTrigValue( 1 );
	}
	wait(FadeOut( 0,0,0,8 ));
	serial
	{
		FreezeCameraTrigger(true);
		SetCameraDetail( 1,32.4459,-42.7970,253.8785 ,32.4562,-42.8503,254.8770, 0, "", 0, false, 0 );//һ����д��ͷ�۲�װ��
		SetPlayerVisible(false);												//����ʾ������⵲����д��ͷ�ۿ�װ��
	}
	wait(FadeIn( 0,0,0,8 ));

	SetKeyMask( false, true, true, true );									//�򿪶�����	
	OpenDialog(301);// һ�������������и������ǿն���
	wait(IsDialogClose()==1);

	wait(FadeOut( 0,0,0,8 ));
	serial
	{
		FreezeCameraTrigger(false);
		SetPlayerVisible(true);													//������ʾ���
	}
	wait(FadeIn( 0,0,0,8 ));
	serial
	{
		EnableActTrigger( 1, true );
		SetKeyMask( false, false, false, false );								//�ָ����ΰ���
	}
}

ʹ���۾�():(GetPlayerUsedItem() == 58)
{
	serial
	{
		disableTask("�������");
		EnableActTrigger( 1, false );
		SetKeyMask( false, true, true, true );									//���ΰ���
	}

	wait(FadeOut( 0,0,0,8 ));
	serial
	{
		// �滻�۾�	
		RemoveThing( 15 );
		AddThing( 15,0,0,"oszv_pintu_ag", 33.2464,-43.0507,266.4   , 1.0000,0.0000,0.0000,0.0000,0.0000,-1.0000,0.0000,1.0000,0.0000 , true );
		SetThingColi( 15, false );
		FreezeCameraTrigger(true);
		SetCameraDetail( 1,32.4459,-42.7970,253.8785 ,32.4562,-42.8503,254.8770, 0, "", 0, false, 0 );//һ����д��ͷ�۲�װ��
		SetPlayerVisible(false);												//����ʾ������⵲����д��ͷ�ۿ�װ��
	}
	wait(FadeIn( 0,0,0,8 ));

	OpenDialog(306);// ���ڿ������������ˡ�
	wait(IsDialogClose()==1);
	SetKeyMask( true, true, true, true );	

	// ���鿪ʼ����
	PlayMusic("t_machine02",true);//��
	wait( MoveThingTo( 10, 30.5460,-39.9379,266.4 , 0.5 ) );
	wait( MoveThingTo( 11, 30.5460,-41.4805,266.4 , 0.5 ) );
	wait( MoveThingTo( 14, 31.9101,-41.4805,266.4 , 0.5 ) );
	OpenTurtDialog(303,48);// ������Щ�����ڷ��ı仯����ô����
	wait( MoveThingTo( 13, 31.9101,-43.0549,266.4 , 0.5 ) );
	wait( MoveThingTo( 11, 30.5460,-43.0549,266.4 , 0.5 ) );
	wait( MoveThingTo( 14, 30.5460,-41.4805,266.4  , 0.5 ) );
	wait( MoveThingTo( 12, 31.9101,-41.4805,266.4  , 0.5 ) );
	wait( MoveThingTo( 15, 33.2464,-41.4805,266.4  , 0.5 ) );
	wait( MoveThingTo( 18, 33.2464,-43.0549,266.4  , 0.5 ) );
	wait( MoveThingTo( 21, 33.2464,-44.5975,266.4  , 0.5 ) );
	wait( MoveThingTo( 20, 33.2464,-46.1720,266.4  , 0.5 ) );
	wait( MoveThingTo( 20, 33.2464,-46.1720,266.4  , 0.5 ) );
	wait( MoveThingTo( 17, 31.9101,-46.1720,266.4  , 0.5 ) );
	wait( MoveThingTo( 21, 31.9101,-44.5975,266.4  , 0.5 ) );
	wait( MoveThingTo( 20, 33.2464,-44.5975,266.4  , 0.5 ) );
	wait( MoveThingTo( 17, 33.2464,-46.1720,266.4  , 0.5 ) );
	wait( MoveThingTo( 19, 31.9101,-46.1720,266.4  , 0.5 ) );
	wait( MoveThingTo( 16, 30.5460,-46.1720,266.4  , 0.5 ) );
	wait( MoveThingTo( 11, 30.5460,-44.5975,266.4  , 0.5 ) );
	wait( MoveThingTo( 14, 30.5460,-43.0549,266.4   , 0.5 ) );
	wait( MoveThingTo( 12, 30.5460,-41.4805,266.4   , 0.5 ) );
	wait( MoveThingTo( 15, 31.9101,-41.4805,266.4    , 0.5 ) );
	wait( MoveThingTo( 18, 33.2464,-41.4805,266.4    , 0.5 ) );
	wait( MoveThingTo( 20, 33.2464,-43.0549,266.4    , 0.5 ) );
	wait( MoveThingTo( 21, 33.2464,-44.5975,266.4    , 0.5 ) );
	StopMusic();

	// �����ۿ�
	wait(FadeOut( 0,0,0,8 ));
	serial
	{
		FreezeCameraTrigger(false);
		SetPlayerVisible(true);													//������ʾ���
		SetKeyMask( false, false, false, false );								//�ָ����ΰ���
		ClearPlayerUsedItem();
		PlayerLoseItem(58);
		SetEventHappen(303);
		EnableItemTrigger( 2, false );
		iClub1 = 12;
		iClub2 = 15;
		iClub3 = 18;
		iClub4 = 14;
		iClub5 = 13;
		iClub6 = 20;
		iClub7 = 11;
		iClub8 = 0;
		iClub9 = 21;
		iClub10 = 16;
		iClub11 = 19;
		iClub12 = 17;
		iTime = 0;
	}

	disableTask("ʹ���۾�");
	wait(FadeIn( 0,0,0,8 ));

	OpenDialog(304);// �����ҵð���Щ��������ƴ�á�
	wait(IsDialogClose()==1);

	serial
	{
		AddActTrigger( 2,  23.0000,-51.0000,264.0000,41.0000,-42.0000,270.0000  );	//���õ��鷶Χ����
		SetActTrigSelCnt( 2, 2 );
		SetActTrigString( 2, 0, 305 );											//�Ƿ�Ҫ��ʼƴͼ��
		SetActTrigString( 2, 1, 3 );
		SetActTrigString( 2, 2, 4 );
		enableTask("��ʼƴͼ");
	}
}

��ʼƴͼ():(GetActTrigValue( 2 ) == 1)
{
	serial
	{
		ClearActTrigValue( 2 );
		EnableActTrigger( 2, false );
		disableTask("��ʼƴͼ");
		SetKeyMask( true, true, true, true );								//�ָ����ΰ���
	}
	wait(FadeOut( 0,0,0,8 ));
	serial
	{
		FreezeCameraTrigger(true);
		SetCameraDetail( 1,32.4459,-42.7970,253.8785 ,32.4562,-42.8503,254.8770, 0, "", 0, false, 0 );//һ����д��ͷ�۲�װ��
		SetPlayerVisible(false);												//����ʾ������⵲����д��ͷ�ۿ�װ��
	}
	wait(FadeIn( 0,0,0,8 ));
	serial
	{
		SetKeyMask( false, true, true, false );								//�ָ����ΰ���
		PausePlayer( true );
		enableTask("�˳�");
		enableTask("����");
		enableTask("����");
		enableTask("����");
		enableTask("����");
		enableTask("����");	
	}
}

�˳�():(IsKeyClick( 5 ))
{
	wait(FadeOut( 0,0,0,8 ));

	serial
	{
		disableTask("����");	
		disableTask("�˳�");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		SetKeyMask( false, false, false, false );								//�ָ����ΰ���
		PausePlayer( false );
		SetPlayerVisible(true);
		FreezeCameraTrigger(false);
	}

	wait(FadeIn( 0,0,0,8 ));
	EnableActTrigger( 2, true );
	enableTask("��ʼƴͼ");
}

�ɹ�():()
{
	if( 
		(iClub2 == 11) &&
		(iClub3 == 12) &&
		(iClub4 == 13) &&
		(iClub5 == 14) &&
		(iClub6 == 15) &&
		(iClub7 == 16) &&
		(iClub8 == 17) &&
		(iClub9 == 18) &&
		(iClub10 == 19) &&
		(iClub11 == 20) &&
		(iClub12 == 21)
		){
			serial
			{
				disableTask("����");	
				disableTask("�˳�");
				disableTask("����");
				disableTask("����");
				disableTask("����");
				disableTask("����");
			}
			PlayMusic("t_machine02",true);//��
			wait( MoveThingTo( 10, 30.5460,-41.4805,266.4 , 0.5 ) );
			SetThingAnim( 1, "oszv_pintu_aa", 100,1,0);
			wait( IsThingAnimOver(1));
			wait(FadeOut( 0,0,0,12 ));
			serial
			{
				//runTask("ȡ����������");
				StopMusic();
				PausePlayer( false );
				FreezeCameraTrigger(false);
				SetPlayerVisible(true);													//������ʾ���
			}
			wait(FadeIn( 0,0,0,12 ));
			serial
			{
				SetEventHappen( 301 );
				EnableDoorTrigger( 10101, true );
				SetKeyMask( false, false, false, false );								//�ָ����ΰ���
			}
		}
}

����():(IsKeyClick( 1 ))
{
	serial
	{
		//runTask("��ֹ��������");
		disableTask("�˳�");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		if( (iClub1 == 0) && (iClub4 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub4, 30.5460,-41.4805,266.4, 0.2  ) );
			iClub1 = iClub4;
			iClub4 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub2 == 0)  && (iClub5 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub5, 31.9101,-41.4805,266.4, 0.2   ) );
			iClub2 = iClub5;
			iClub5 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub3 == 0)  && (iClub6 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub6, 33.2464,-41.4805,266.4, 0.2    ) );
			iClub3 = iClub6;
			iClub6 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub4 == 0)  && (iClub7 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub7, 30.5460,-43.0549,266.4, 0.2    ) );
			iClub4 = iClub7;
			iClub7 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub5 ==0 )  && (iClub8 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub8, 31.9101,-43.0549,266.4, 0.2   ) );
			iClub5 = iClub8;
			iClub8 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub6 ==0 )  && (iClub9 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub9, 33.2464,-43.0549,266.4, 0.2    ) );
			iClub6 = iClub9;
			iClub9 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub7 ==0 )  && (iClub10 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub10, 30.5460,-44.5975,266.4, 0.2     ) );
			iClub7 = iClub10;
			iClub10 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub8 ==0 )  && (iClub11 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub11, 31.9101,-44.5975,266.4, 0.2      ) );
			iClub8 = iClub11;
			iClub11 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub9 ==0 )  && (iClub12 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub12, 33.2464,-44.5975,266.4, 0.2       ) );
			iClub9 = iClub12;
			iClub12 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		runTask("������������");

		PlaySound( "ui_false" );
	}
}

����():(IsKeyClick( 2 ))
{
	serial
	{
		//runTask("��ֹ��������");
		disableTask("�˳�");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		if( (iClub4 == 0) && (iClub1 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub1, 30.5460,-43.0549,266.4 , 0.2  ) );
			iClub4 = iClub1;
			iClub1 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}

		if( (iClub5 == 0) && (iClub2 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub2, 31.9101,-43.0549,266.4 , 0.2  ) );
			iClub5 = iClub2;
			iClub2 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}

		if(  (iClub6 == 0) && (iClub3 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub3, 33.2464,-43.0549,266.4, 0.2  ) );
			iClub6 = iClub3;
			iClub3 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}

		if( (iClub7 == 0) && (iClub4 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub4, 30.5460,-44.5975,266.4 , 0.2  ) );
			iClub7 = iClub4;
			iClub4 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub8 == 0)  && (iClub5 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub5, 31.9101,-44.5975,266.4 , 0.2   ) );
			iClub8 = iClub5;
			iClub5 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub9 == 0)  && (iClub6 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub6, 33.2464,-44.5975,266.4 , 0.2    ) );
			iClub9 = iClub6;
			iClub6 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub10 == 0)  && (iClub7 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub7, 30.5460,-46.1720,266.4 , 0.2    ) );
			iClub10 = iClub7;
			iClub7 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub11 ==0 )  && (iClub8 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub8, 31.9101,-46.1720,266.4 , 0.2   ) );
			iClub11 = iClub8;
			iClub8 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub12 ==0 )  && (iClub9 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub9, 33.2464,-46.1720,266.4, 0.2    ) );
			iClub12 = iClub9;
			iClub9 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		runTask("������������");
		PlaySound( "ui_false" );
	}
}

����():(IsKeyClick( 3 ))
{
	serial
	{	
		//runTask("��ֹ��������");
		disableTask("�˳�");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		if( (iClub1 ==0 )  && (iClub2 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub2, 30.5460,-41.4805,266.4 , 0.2    ) );
			iClub1 = iClub2;
			iClub2 = 0;
			runTask("�ɹ�");
			runTask("������������");
			return();
		}
		if((iClub2 ==0 )  && (iClub3 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub3, 31.9101,-41.4805,266.4  , 0.2    ) );
			iClub2 = iClub3;
			iClub3 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub4 ==0 )  && (iClub5 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub5, 30.5460,-43.0549,266.4  , 0.2    ) );
			iClub4 = iClub5;
			iClub5 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub5 ==0 )  && (iClub6 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub6, 31.9101,-43.0549,266.4  , 0.2    ) );
			iClub5 = iClub6;
			iClub6 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub7 ==0 )  && (iClub8 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub8, 30.5460,-44.5975,266.4  , 0.2    ) );
			iClub7 = iClub8;
			iClub8 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub8 ==0 )  && (iClub9 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub9, 31.9101,-44.5975,266.4   , 0.2    ) );
			iClub8 = iClub9;
			iClub9 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub10 ==0 )  && (iClub11 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub11, 30.5460,-46.1720,266.4    , 0.2    ) );
			iClub10 = iClub11;
			iClub11 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub11 ==0 )  && (iClub12 != 0) )
		{	
			PlaySound( "t_stonemove" );		
			wait( MoveThingTo( iClub12, 31.9101,-46.1720,266.4   , 0.2    ) );
			iClub11 = iClub12;
			iClub12 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		runTask("������������");
		PlaySound( "ui_false" );

	}
}

����():(IsKeyClick( 4 ))
{
	serial
	{
		//runTask("��ֹ��������");
		disableTask("�˳�");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		disableTask("����");
		if( (iClub2 ==0 )  && (iClub1 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub1, 31.9101,-41.4805,266.4 , 0.2    ) );
			iClub2 = iClub1;
			iClub1 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub3 ==0 )  && (iClub2 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub2, 33.2464,-41.4805,266.4   , 0.2    ) );
			iClub3 = iClub2;
			iClub2 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}

		if( (iClub5 ==0 )  && (iClub4 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub4, 31.9101,-43.0549,266.4   , 0.2    ) );
			iClub5 = iClub4;
			iClub4 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub6 ==0 )  && (iClub5 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub5, 33.2464,-43.0549,266.4    , 0.2    ) );
			iClub6 = iClub5;
			iClub5 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}

		if( (iClub8 ==0 )  && (iClub7 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub7, 31.9101,-44.5975,266.4    , 0.2    ) );
			iClub8 = iClub7;
			iClub7 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub9 ==0 )  && (iClub8 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub8, 33.2464,-44.5975,266.4     , 0.2    ) );
			iClub9 = iClub8;
			iClub8 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}

		if( (iClub11 ==0 )  && (iClub10 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub10, 31.9101,-46.1720,266.4   , 0.2    ) );
			iClub11 = iClub10;
			iClub10 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		if( (iClub12 ==0 )  && (iClub11 != 0) )
		{
			PlaySound( "t_stonemove" );
			wait( MoveThingTo( iClub11, 33.2464,-46.1720,266.4  , 0.2    ) );
			iClub12 = iClub11;
			iClub11 = 0;
			runTask("������������");
			runTask("�ɹ�");
			return();
		}
		runTask("������������");
		PlaySound( "ui_false" );

	}
}
��ֹ��������():()
{
	disableTask("�˳�");
	disableTask("����");
	disableTask("����");
	disableTask("����");
	disableTask("����");
}
������������():()
{		
	enableTask("�˳�");
	enableTask("����");
	enableTask("����");
	enableTask("����");
	enableTask("����");
	iTime += 1;
}
����():(iTime>80)
{
	//runTask("��ֹ��������");
	disableTask("�˳�");
	disableTask("����");
	disableTask("����");
	disableTask("����");
	disableTask("����");
	iTime = 0;
	OpenDialog(307);// �������ƴͼ������˭��Ƶ�
	wait(IsDialogClose()==1);
	serial
	{
		AddSeleDlgItem(0,3);
		AddSeleDlgItem(1,4);
		OpenSeleDialog( 308, 2, true );
	}
	wait( GetSeleDlgValue() != -1);
	if( GetSeleDlgValue() == 0 ){
		PlayMusic("t_machine02",true);//��
		SetThingAnim( 1, "oszv_pintu_aa", 100,1,0);
		wait( IsThingAnimOver(1));
		wait(FadeOut( 0,0,0,12 ));
		serial
		{
			StopMusic();
			PausePlayer( false );
			FreezeCameraTrigger(false);
			SetPlayerVisible(true);													//������ʾ���
		}
		wait(FadeIn( 0,0,0,12 ));
		serial
		{
			SetEventHappen( 301 );
			SetEventHappen( 308 );	/// ͨ���������������
			EnableDoorTrigger( 10101, true );
			disableTask("����");
			SetKeyMask( false, false, false, false );								//�ָ����ΰ���
		}
	}else{
		FreezeCameraTrigger(true);
		SetCameraDetail( 1,32.4459,-42.7970,253.8785 ,32.4562,-42.8503,254.8770, 0, "", 0, false, 0 );//һ����д��ͷ�۲�װ��
		SetPlayerVisible(false);												//����ʾ������⵲����д��ͷ�ۿ�װ��
		SetKeyMask( false, true, true, false );								//�ָ����ΰ���
		PausePlayer( true );
		runTask("������������");
	}
}

��ʬ��():(IsPlayerEnterBox(12.0000,-51.0000,230.0000,25.0000,-50.0000,232.0000)){
	//��ʬ��():(IsPlayerEnterBox(12.0000,-51.0000,231.0000,23.0000,-50.0000,247.0000 )){
	serial{
		SetThingAnim(23,"oszp_shiti_c",300,1,1);
		PlaySound("c_ken_emotion_07");
	}
	wait(IsPlayerLeaveBox(12.0000,-51.0000,230.0000,25.0000,-50.0000,232.0000));
	SetThingAnim(23,"oszp_shiti_c",0,1,0);
	//	SetEventHappen( 311 );															//E
	//	disableTask("��ʬ��");
}

����():(IsPlayerEnterBox( 48.0000,-51.0000,254.0000,51.0000,-48.0000,264.0000 ))
{
	serial{
		EnableThingLight(22,false);
		PlaySound("c_kate_squeal01");
		SetThingAnim(22,"oszp_guilian_a",300,1,0);
	}
	wait(IsThingAnimOver(22));
	SetThingAnim(22,"oszp_guilian_b",300,1,1);
	SetEventHappen( 309 );															//E
	disableTask("����");
}


��Ч01():()
{
	StartTimer(0);
	PlaySound("m_inhibition_02");
	wait(GetTime(0)>=400);
}

talk():()
{
	StartTimer(1);
	wait(GetTime(1) >= 4 );
	OpenDialog(145);																							//"�����ǡ��ҵ����ң������ģ���ô�����⸱ģ����"
	SetEventHappen( 319 );																						//E
	disableTask("talk");
}
