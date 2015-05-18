class Attachment_FL : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\flashlight_rifle\flashlight_rifle.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\flashlight_rifle\data\m_flashlight_rifle_ca.paa";
	
	displayName = $STR_DZ_ATT_FL_RFL_NAME;
	descriptionShort = "Rail attachable rifle flashlight TODO";
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};