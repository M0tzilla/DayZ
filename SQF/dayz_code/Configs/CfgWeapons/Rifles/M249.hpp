class M249_CCO_DZ : M249
{
	model = "z\addons\dayz_communityweapons\m249\m249_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_cco_ca.paa";
	displayName = $STR_DZ_WPN_M249_CCO_NAME;
	
	type = WeaponSlotPrimary;
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M249_DZ'] call player_removeAttachment";
		};
	};
};

class M249_DZ : M249_CCO_DZ
{
	model = "ca\weapons\m249.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_ca.paa";
	displayName = $STR_DZ_WPN_M249_NAME;
	
	//iron sight zeroing
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_CCO",
			"Attachment_Holo"
		};
		
		Attachment_CCO = "M249_CCO_DZ";
		Attachment_Holo = "M249_Holo_DZ";
	};
	
	class ItemActions {};
};

class M249_Holo_DZ : M249_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m249\m249_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m249\data\w_m249_holo_ca.paa";
	displayName = $STR_DZ_WPN_M249_HOLO_NAME;
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M249_DZ'] call player_removeAttachment";
		};
	};
};