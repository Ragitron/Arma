class cfgPatches
{
  class B_RC_GUER_Coastal_Militia
  {
    units[]={"B_RC_GUER_Squad_Leader","B_RC_GUER_Team_Leader","B_RC_GUER_Rifleman","B_RC_GUER_Rifleman_Light","B_RC_GUER_Rifleman_LAAT","B_RC_GUER_Rifleman_HAAT","B_RC_GUER_Machine_Gunner","B_RC_GUER_Assistant_Machine_Gunner","B_RC_GUER_Marksman","B_RC_GUER_Sharpshooter","B_RC_GUER_Combat_Life_Saver","B_RC_GUER_Specialist_Anti_Air","B_RC_GUER_Specialist_Anti_Tank","B_RC_GUER_Engineer","B_RC_GUER_Explosive_Specialist","B_RC_GUER_Radio_Operator","B_RC_GUER_Repair_Specialist","B_RC_GUER_Mine_Layer","B_RC_GUER_Mortar_Operator","B_RC_GUER_Assistant_Mortar_Operator","B_RC_GUER_Gunner_Emplaced_MG","B_RC_GUER_Assistant_Emplaced_Gunner","B_RC_GUER_Assistant_Emplaced_Antitank","B_RC_GUER_Gunner_Emplaced_AT","B_RC_GUER_Grenadier","B_RC_GUER_Pilot","B_RC_GUER_Autorifleman","B_RC_GUER_PD_24_Mortar","B_RC_GUER_Mk9_Beartrap","B_RC_GUER_DShKM_High_Mount","B_RC_GUER_DSHkM_Low_Mount","B_RC_GUER_Ute_DShKM","B_RC_GUER_Ute_Missile_Rack","B_RC_GUER_Ute_Mk9_Beartrap","B_RC_GUER_Ute","B_RC_GUER_Ute_Mk232L_Thunder","B_RC_GUER_Quad_Bike","B_RC_GUER_Ute_PD_24_Mortar","B_RC_GUER_Motorbike","B_RC_GUER_Transport_Truck","B_RC_GUER_Fuel_Truck","B_RC_GUER_Service_Vehicle","B_RC_GUER_Cargo_Van","B_RC_GUER_B_40_Tower_Civilian","B_RC_GUER_Ch400_Observer","B_RC_GUER_Mk232L_Thunder"};
    weapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_FlareGun","B_RC_GUER_CUP_arifle_AKMS_CUP_acc_Zenit_2DSCUP_optic_PSO_1_AK","B_RC_GUER_CUP_hgun_TaurusTracker455","B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_arifle_AKM_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_launch_RPG18_Loaded","B_RC_GUER_CUP_hgun_PMM","B_RC_GUER_CUP_launch_APILAS_Loaded","B_RC_GUER_CUP_lmg_PKM","B_RC_GUER_CUP_hgun_Makarov","B_RC_GUER_CUP_srifle_SVD_CUP_optic_PSO_1","B_RC_GUER_CUP_srifle_LeeEnfield_rail_CUP_optic_LeupoldMk4_25x50_LRTCUP_bipod_VLTOR_Modpod_black","B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_launch_Igla_Loaded","B_RC_GUER_CUP_launch_NLAW_Loaded","B_RC_GUER_sgun_HunterShotgun_01_F","B_RC_GUER_CUP_glaunch_M79","B_RC_GUER_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","B_RC_GUER_CUP_arifle_FNFAL5061_CUP_bipod_FNFAL"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","CUP_Weapons_SKS","CUP_Weapons_Flaregun","cfp_uniforms","A3_Characters_F_Exp_Vests","A3_Characters_F","A3_Characters_F_Enoch","CUP_Weapons_AK","CUP_Weapons_Revolver","CUP_Weapons_FNFAL","cfp_headgear","CUP_Weapons_Makarov","CUP_Weapons_RPG18","CUP_Weapons_APILAS","CUP_Weapons_PK","CUP_Weapons_SVD","CUP_Weapons_LeeEnfield","CUP_Weapons_IGLA","CUP_Weapons_NLAW","A3_Weapons_F_Enoch_Rifles_HunterShotgun_01","A3_Characters_F_Orange_Headgear","CUP_Weapons_GrenadeLaunchers","A3_Weapons_F_Pistols_Pistol_Heavy_02","CUP_Creatures_Military_Russia"};
  };
};

class cfgFactionClasses
{
  class B_RC_GUER_Coastal_Militia
  {
    icon="";
    displayName="[REC] Coastal Militia";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class CUP_SKS;
  class CUP_hgun_FlareGun;
  class CUP_arifle_AKMS;
  class CUP_hgun_TaurusTracker455;
  class CUP_arifle_FNFAL5061_wooden;
  class CUP_arifle_AKMS_Early;
  class CUP_arifle_AKM_Early;
  class CUP_launch_RPG18_Loaded;
  class CUP_hgun_PMM;
  class CUP_launch_APILAS_Loaded;
  class CUP_lmg_PKM;
  class CUP_hgun_Makarov;
  class CUP_srifle_SVD;
  class CUP_srifle_LeeEnfield_rail;
  class CUP_srifle_LeeEnfield;
  class CUP_launch_Igla_Loaded;
  class CUP_launch_NLAW_Loaded;
  class sgun_HunterShotgun_01_F;
  class CUP_glaunch_M79;
  class hgun_Pistol_heavy_02_F;
  class CUP_arifle_FNFAL5061;

  class B_RC_GUER_CUP_SKS: CUP_SKS
  {
    displayName="SKS";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_hgun_FlareGun: CUP_hgun_FlareGun
  {
    displayName="Flare Pistol";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_arifle_AKMS_CUP_acc_Zenit_2DSCUP_optic_PSO_1_AK: CUP_arifle_AKMS
  {
    displayName="AKMSN";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="CUP_optic_PSO_1_AK";
      };
    };
  };

  class B_RC_GUER_CUP_hgun_TaurusTracker455: CUP_hgun_TaurusTracker455
  {
    displayName="Taurus Tracker Model 455";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS: CUP_arifle_FNFAL5061_wooden
  {
    displayName="FAL G";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="CUP_acc_Zenit_2DS";
      };
    };
  };

  class B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS: CUP_arifle_AKMS_Early
  {
    displayName="AKMS";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="CUP_PicatinnySideMountAK";
        item="CUP_acc_Zenit_2DS";
      };
    };
  };

  class B_RC_GUER_CUP_arifle_AKM_Early_CUP_acc_Zenit_2DS: CUP_arifle_AKM_Early
  {
    displayName="AKM";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="CUP_PicatinnySideMountAK";
        item="CUP_acc_Zenit_2DS";
      };
    };
  };

  class B_RC_GUER_CUP_launch_RPG18_Loaded: CUP_launch_RPG18_Loaded
  {
    displayName="RPG18";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_hgun_PMM: CUP_hgun_PMM
  {
    displayName="PMM-12";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_launch_APILAS_Loaded: CUP_launch_APILAS_Loaded
  {
    displayName="APILAS";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_lmg_PKM: CUP_lmg_PKM
  {
    displayName="PKM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_hgun_Makarov: CUP_hgun_Makarov
  {
    displayName="Makarov PM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_srifle_SVD_CUP_optic_PSO_1: CUP_srifle_SVD
  {
    displayName="SVD";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="CUP_optic_PSO_1";
      };
    };
  };

  class B_RC_GUER_CUP_srifle_LeeEnfield_rail_CUP_optic_LeupoldMk4_25x50_LRTCUP_bipod_VLTOR_Modpod_black: CUP_srifle_LeeEnfield_rail
  {
    displayName="No.4 Mk. I (RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="CUP_optic_LeupoldMk4_25x50_LRT";
      };
      class LinkedItemsUnder
      {
        slot="CUP_PicatinnyUnderMountEndfield";
        item="CUP_bipod_VLTOR_Modpod_black";
      };
    };
  };

  class B_RC_GUER_CUP_srifle_LeeEnfield: CUP_srifle_LeeEnfield
  {
    displayName="No.4 Mk. I";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_launch_Igla_Loaded: CUP_launch_Igla_Loaded
  {
    displayName="Igla 9K38";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_launch_NLAW_Loaded: CUP_launch_NLAW_Loaded
  {
    displayName="NLAW";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_sgun_HunterShotgun_01_F: sgun_HunterShotgun_01_F
  {
    displayName="Kozlice 12G";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_CUP_glaunch_M79: CUP_glaunch_M79
  {
    displayName="M79";
    scope=1;
    class LinkedItems
    {
    };
  };

  class B_RC_GUER_hgun_Pistol_heavy_02_F_acc_flashlight_pistol: hgun_Pistol_heavy_02_F
  {
    displayName="Zubr .45 ACP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight_pistol";
      };
    };
  };

  class B_RC_GUER_CUP_arifle_FNFAL5061_CUP_bipod_FNFAL: CUP_arifle_FNFAL5061
  {
    displayName="FAL 50.61";
    scope=1;
    class LinkedItems
    {

    };
  };

};

class cfgVehicles
{
  class I_E_Soldier_SL_F;
  class I_E_Soldier_TL_F;
  class I_E_Soldier_F;
  class I_E_Soldier_lite_F;
  class I_E_Soldier_LAT2_F;
  class I_E_Soldier_LAT_F;
  class I_E_Soldier_AR_F;
  class I_E_Soldier_AAR_F;
  class B_CivilianBackpack_01_Everyday_Black_F;
  class I_E_soldier_M_F;
  class I_E_Medic_F;
  class B_Messenger_Gray_F;
  class I_E_Soldier_AA_F;
  class I_E_Soldier_AT_F;
  class I_E_Engineer_F;
  class B_CivilianBackpack_01_Everyday_Astra_F;
  class I_E_Soldier_Exp_F;
  class B_CivilianBackpack_01_Sport_Blue_F;
  class I_E_RadioOperator_F;
  class B_RadioBag_01_ghex_F;
  class I_E_Soldier_Repair_F;
  class B_CivilianBackpack_01_Sport_Green_F;
  class I_E_soldier_Mine_F;
  class B_CivilianBackpack_01_Everyday_Vrana_F;
  class I_E_Support_Mort_F;
  class CUP_B_Podnos_Gun_Bag;
  class I_E_Support_AMort_F;
  class CUP_B_Podnos_Bipod_Bag;
  class I_E_Support_MG_F;
  class CUP_B_DShkM_Gun_Bag;
  class I_E_Support_AMG_F;
  class CUP_B_DShkM_TripodLow_Bag;
  class CUP_B_SPG9_Tripod_Bag;
  class I_E_Support_GMG_F;
  class CUP_B_SPG9_Gun_Bag;
  class I_E_Soldier_GL_F;
  class I_E_Helipilot_F;
  class CUP_O_2b14_82mm_RU_M_MSV;
  class CUP_O_SPG9_ChDKZ;
  class CUP_O_DSHKM_ChDKZ;
  class CUP_O_DSHkM_MiniTriPod_ChDKZ;
  class CUP_I_Hilux_DSHKM_IND_G_F;
  class CUP_I_Hilux_MLRS_IND_G_F;
  class I_G_Offroad_01_AT_F;
  class I_G_Offroad_01_F;
  class CUP_I_Hilux_zu23_IND_G_F;
  class I_G_Quadbike_01_F;
  class CUP_B_Hilux_podnos_BLU_G_F;
  class CUP_O_TT650_TKA;
  class CUP_C_Ural_Open_Civ_03;
  class I_G_Van_01_fuel_F;
  class I_G_Offroad_01_repair_F;
  class I_G_Van_02_vehicle_F;
  class CUP_C_Plane_Orbit;
  class CUP_C_412_Sheriff;
  class CUP_I_ZU23_NAPA;

  class B_RC_GUER_Squad_Leader: I_E_Soldier_SL_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Squad Leader";
    uniformClass="CFP_GUER_Tigerpants";
    weapons[]={"Binocular","B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    respawnMagazines[]={"SmokeShell","SmokeShell","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_tan","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular","H_Cap_tan","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    backpack="";
  };

  class B_RC_GUER_Team_Leader: I_E_Soldier_TL_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Team Leader";
    uniformClass="CFP_GUER_M81Tee";
    weapons[]={"Binocular","B_RC_GUER_CUP_arifle_AKMS_CUP_acc_Zenit_2DSCUP_optic_PSO_1_AK","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_arifle_AKMS_CUP_acc_Zenit_2DSCUP_optic_PSO_1_AK","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellYellow","SmokeShellYellow","SmokeShellRed","SmokeShellRed","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"};
    respawnMagazines[]={"SmokeShell","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","SmokeShellYellow","SmokeShellYellow","SmokeShellRed","SmokeShellRed","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_police","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_police","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    backpack="";
  };

  class B_RC_GUER_Rifleman: I_E_Soldier_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Rifleman";
    uniformClass="CFP_GUER_TanTee";
    weapons[]={"B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    respawnMagazines[]={"CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_PatrolCap_GreenOlive","V_TacChestrig_grn_F","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_PatrolCap_GreenOlive","V_TacChestrig_grn_F","G_Bandanna_khk"};
    backpack="";
  };

  class B_RC_GUER_Rifleman_Light: I_E_Soldier_lite_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Rifleman (Light)";
    uniformClass="CFP_GUER_PolyDesert";
    weapons[]={"B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGO","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGO","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_red","V_TacChestrig_grn_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_red","V_TacChestrig_grn_F","G_Bandanna_oli"};
    backpack="";
  };

  class B_RC_GUER_Rifleman_LAAT: I_E_Soldier_LAT2_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Rifleman (LAAT)";
    uniformClass="CFP_GUER_MCampants";
    weapons[]={"B_RC_GUER_CUP_arifle_AKM_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_launch_RPG18_Loaded","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_arifle_AKM_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_launch_RPG18_Loaded","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","CUP_HandGrenade_RGD5"};
    respawnMagazines[]={"CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","CUP_HandGrenade_RGD5"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Booniehat_tan","V_TacChestrig_grn_F","G_Bandanna_blk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Booniehat_tan","V_TacChestrig_grn_F","G_Bandanna_blk"};
    backpack="";
  };

  class B_RC_GUER_Rifleman_HAAT: I_E_Soldier_LAT_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Rifleman (HAAT)";
    uniformClass="CFP_GUER_ERDLpants";
    weapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_launch_APILAS_Loaded","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_launch_APILAS_Loaded","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    respawnMagazines[]={"CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_PatrolCap_NodUrban","V_TacChestrig_cbr_F","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_PatrolCap_NodUrban","V_TacChestrig_cbr_F","G_Bandanna_khk"};
    backpack="";
  };

  class B_RC_GUER_Machine_Gunner: I_E_Soldier_AR_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Machine Gunner";
    uniformClass="CFP_GUER_ChocChippants";
    weapons[]={"B_RC_GUER_CUP_lmg_PKM","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_lmg_PKM","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShellGreen","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
    respawnMagazines[]={"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShellGreen","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_blk","V_TacChestrig_cbr_F","G_Bandanna_beast"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_blk","V_TacChestrig_cbr_F","G_Bandanna_beast"};
    backpack="";
  };

  class B_RC_GUER_Assistant_Machine_Gunner: I_E_Soldier_AAR_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Assistant Machine Gunner";
    uniformClass="CFP_GUER_PolyDesert";
    weapons[]={"Binocular","B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShellGreen","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_HandGrenade_RGD5","SmokeShell","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"};
    respawnMagazines[]={"CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShellGreen","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_HandGrenade_RGD5","SmokeShell","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_tan","V_TacChestrig_oli_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_tan","V_TacChestrig_oli_F","G_Bandanna_oli"};
    backpack="B_RC_GUER_Assistant_Machine_Gunner_pack";
  };

  class B_RC_GUER_Marksman: I_E_soldier_M_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Marksman";
    uniformClass="CFP_GUER_GreenTan";
    weapons[]={"Binocular","B_RC_GUER_CUP_srifle_SVD_CUP_optic_PSO_1","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_srifle_SVD_CUP_optic_PSO_1","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_StarClusterGreen_265_M","CUP_StarClusterRed_265_M","SmokeShell","SmokeShell","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
    respawnMagazines[]={"SmokeShellGreen","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareRed_265_M","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_StarClusterGreen_265_M","CUP_StarClusterRed_265_M","SmokeShell","SmokeShell","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Booniehat_khk","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Booniehat_khk","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    backpack="";
  };

  class B_RC_GUER_Sharpshooter: I_E_soldier_M_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Sharpshooter";
    uniformClass="CFP_GUER_Tigerpants";
    weapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield_rail_CUP_optic_LeupoldMk4_25x50_LRTCUP_bipod_VLTOR_Modpod_black","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield_rail_CUP_optic_LeupoldMk4_25x50_LRTCUP_bipod_VLTOR_Modpod_black","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Booniehat_oli","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Booniehat_oli","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    backpack="";
  };

  class B_RC_GUER_Combat_Life_Saver: I_E_Medic_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Combat Life Saver";
    uniformClass="CFP_GUER_Khk_Wdl";
    weapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_FlareYellow_265_M","CUP_FlareYellow_265_M","CUP_FlareYellow_265_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_FlareYellow_265_M","CUP_FlareGreen_265_M","CUP_FlareRed_265_M","SmokeShellGreen"};
    respawnMagazines[]={"SmokeShellGreen","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_FlareGreen_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_FlareYellow_265_M","CUP_FlareYellow_265_M","CUP_FlareYellow_265_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_FlareYellow_265_M","CUP_FlareGreen_265_M","CUP_FlareRed_265_M","SmokeShellGreen"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Blue","V_TacChestrig_grn_F","CFP_Shemagh_Neck_Gold"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Blue","V_TacChestrig_grn_F","CFP_Shemagh_Neck_Gold"};
    backpack="B_RC_GUER_Combat_Life_Saver_pack";
  };

  class B_RC_GUER_Specialist_Anti_Air: I_E_Soldier_AA_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Specialist Anti-Air";
    uniformClass="CFP_GUER_Tigerpants";
    weapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_launch_Igla_Loaded","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_launch_Igla_Loaded","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_TweedCheckedBrown","V_TacChestrig_oli_F","CFP_Shemagh_Neck_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_TweedCheckedBrown","V_TacChestrig_oli_F","CFP_Shemagh_Neck_Black"};
    backpack="";
  };

  class B_RC_GUER_Specialist_Anti_Tank: I_E_Soldier_AT_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Specialist Anti-Tank";
    uniformClass="CFP_GUER_M81Tee";
    weapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_launch_NLAW_Loaded","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_launch_NLAW_Loaded","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_red","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_red","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    backpack="";
  };

  class B_RC_GUER_Engineer: I_E_Engineer_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Engineer";
    uniformClass="CFP_GUER_MCampants";
    weapons[]={"B_RC_GUER_sgun_HunterShotgun_01_F","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_sgun_HunterShotgun_01_F","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGO","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_IED_V3_M","IEDLandSmall_Remote_Mag"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGO","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No00_Buck","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Pellets_No4_Bird","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_2Rnd_12Gauge_Slug","CUP_IED_V3_M","IEDLandSmall_Remote_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CFP_BaseballCap_ANA2","V_TacChestrig_grn_F","CFP_Shemagh_Neck_Gold"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CFP_BaseballCap_ANA2","V_TacChestrig_grn_F","CFP_Shemagh_Neck_Gold"};
    backpack="B_RC_GUER_Engineer_pack";
  };

  class B_RC_GUER_Explosive_Specialist: I_E_Soldier_Exp_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Explosive Specialist";
    uniformClass="CFP_GUER_TanTee";
    weapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGO","CUP_HandGrenade_RGD5","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_PipeBomb_M","CUP_IED_V4_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGO","CUP_HandGrenade_RGD5","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_PipeBomb_M","CUP_IED_V4_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Green","V_TacChestrig_grn_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Green","V_TacChestrig_grn_F","G_Bandanna_oli"};
    backpack="B_RC_GUER_Explosive_Specialist_pack";
  };

  class B_RC_GUER_Radio_Operator: I_E_RadioOperator_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Radio Operator";
    uniformClass="CFP_GUER_Tigerpants";
    weapons[]={"B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_blk","V_TacChestrig_oli_F","CUP_TK_NeckScarf"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_blk","V_TacChestrig_oli_F","CUP_TK_NeckScarf"};
    backpack="B_RC_GUER_Radio_Operator_pack";
  };

  class B_RC_GUER_Repair_Specialist: I_E_Soldier_Repair_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Repair Specialist";
    uniformClass="CFP_GUER_ChocChippants";
    weapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit"};
    magazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_HandGrenade_RGD5","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_HandGrenade_RGD5","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_EarProtectors_orange_F","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_EarProtectors_orange_F","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    backpack="B_RC_GUER_Repair_Specialist_pack";
  };

  class B_RC_GUER_Mine_Layer: I_E_soldier_Mine_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Mine Layer";
    uniformClass="CFP_GUER_Khk_Wdl";
    weapons[]={"B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGO","CUP_HandGrenade_RGO","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","IEDLandSmall_Remote_Mag","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGO","CUP_HandGrenade_RGO","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","IEDLandSmall_Remote_Mag","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Black","V_TacChestrig_grn_F","CFP_Shemagh_Neck_Gold"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Black","V_TacChestrig_grn_F","CFP_Shemagh_Neck_Gold"};
    backpack="B_RC_GUER_Mine_Layer_pack";
  };

  class B_RC_GUER_Mortar_Operator: I_E_Support_Mort_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Mortar Operator";
    uniformClass="CFP_GUER_MCampants";
    weapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Booniehat_tan","V_TacChestrig_oli_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Booniehat_tan","V_TacChestrig_oli_F","G_Bandanna_oli"};
    backpack="B_RC_GUER_Mortar_Operator_pack";
  };

  class B_RC_GUER_Assistant_Mortar_Operator: I_E_Support_AMort_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Assistant Mortar Operator";
    uniformClass="CFP_GUER_Khk_Wdl";
    weapons[]={"Binocular","B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_arifle_FNFAL5061_wooden_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGO","SmokeShell","SmokeShell","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_HandGrenade_RGO","SmokeShell","SmokeShell","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","CFP_BaseballCap_ANA2","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","CFP_BaseballCap_ANA2","V_TacChestrig_cbr_F","G_Bandanna_tan"};
    backpack="B_RC_GUER_Assistant_Mortar_Operator_pack";
  };

  class B_RC_GUER_Gunner_Emplaced_MG: I_E_Support_MG_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Gunner Emplaced MG";
    uniformClass="CFP_GUER_ERDLpants";
    weapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_SKS","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Hunter2","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Hunter2","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    backpack="B_RC_GUER_Gunner_Emplaced_MG_pack";
  };

  class B_RC_GUER_Assistant_Emplaced_Gunner: I_E_Support_AMG_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Assistant Emplaced Gunner";
    uniformClass="CFP_GUER_3CDespants";
    weapons[]={"Binocular","B_RC_GUER_CUP_arifle_AKM_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_arifle_AKM_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_FlareGun","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareGreen_265_M","CUP_IllumFlareGreen_265_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGO","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"};
    respawnMagazines[]={"SmokeShellGreen","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareRed_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareWhite_265_M","CUP_IllumFlareGreen_265_M","CUP_IllumFlareGreen_265_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGO","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_blk_ION","V_TacChestrig_oli_F","G_Bandanna_beast"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_blk_ION","V_TacChestrig_oli_F","G_Bandanna_beast"};
    backpack="B_RC_GUER_Assistant_Emplaced_Gunner_pack";
  };

  class B_RC_GUER_Assistant_Emplaced_Antitank: I_E_Support_AMG_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Assistant Emplaced Antitank";
    uniformClass="CFP_GUER_Tigerpants";
    weapons[]={"Binocular","B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"Binocular","B_RC_GUER_CUP_arifle_AKMS_Early_CUP_acc_Zenit_2DS","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    respawnMagazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_tan","V_TacChestrig_grn_F","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Cap_tan","V_TacChestrig_grn_F","G_Bandanna_khk"};
    backpack="B_RC_GUER_Assistant_Emplaced_Antitank_pack";
  };

  class B_RC_GUER_Gunner_Emplaced_AT: I_E_Support_GMG_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Gunner Emplaced AT";
    uniformClass="CFP_GUER_PolyDespants";
    weapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_srifle_LeeEnfield","B_RC_GUER_CUP_hgun_TaurusTracker455","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    respawnMagazines[]={"SmokeShellGreen","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","CUP_6Rnd_45ACP_M","SmokeShell","SmokeShell","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Green","V_TacChestrig_grn_F","G_Bandanna_beast"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_BaseballCap_Green","V_TacChestrig_grn_F","G_Bandanna_beast"};
    backpack="B_RC_GUER_Gunner_Emplaced_AT_pack";
  };

  class B_RC_GUER_Grenadier: I_E_Soldier_GL_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Grenadier";
    uniformClass="CFP_GUER_ERDLpants";
    weapons[]={"B_RC_GUER_CUP_glaunch_M79","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_glaunch_M79","B_RC_GUER_CUP_hgun_PMM","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeGreen_M203","CUP_1Rnd_SmokeGreen_M203"};
    respawnMagazines[]={"SmokeShellGreen","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_12Rnd_9x18_PMM_M","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeYellow_M203","CUP_1Rnd_SmokeGreen_M203","CUP_1Rnd_SmokeGreen_M203"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_red","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_red","V_TacChestrig_cbr_F","G_Bandanna_oli"};
    backpack="";
  };

  class B_RC_GUER_Pilot: I_E_Helipilot_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Pilot";
    uniformClass="U_Rangemaster";
    weapons[]={"B_RC_GUER_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"6Rnd_45ACP_Cylinder","SmokeShellGreen","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","SmokeShellGreen","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_Cap_marshal","V_Rangemaster_belt","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_Cap_marshal","V_Rangemaster_belt","G_Aviator"};
    backpack="";
  };

  class B_RC_GUER_Autorifleman: I_E_Soldier_AR_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Autorifleman";
    uniformClass="CFP_GUER_ERDLpants";
    weapons[]={"B_RC_GUER_CUP_arifle_FNFAL5061_CUP_bipod_FNFAL","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    respawnWeapons[]={"B_RC_GUER_CUP_arifle_FNFAL5061_CUP_bipod_FNFAL","B_RC_GUER_CUP_hgun_Makarov","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    respawnMagazines[]={"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","SmokeShellGreen","SmokeShell","CUP_HandGrenade_RGD5","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M","CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_H_RUS_Cap_ATACSFG","V_TacChestrig_cbr_F","G_Bandanna_beast"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_H_RUS_Cap_ATACSFG","V_TacChestrig_cbr_F","G_Bandanna_beast"};
    backpack="";
  };

  class B_RC_GUER_PD_24_Mortar: CUP_O_2b14_82mm_RU_M_MSV
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="PD-24 Mortar";
    hiddenSelectionsTextures[]={};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Mk9_Beartrap: CUP_O_SPG9_ChDKZ
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Mk9 Beartrap";
    hiddenSelectionsTextures[]={};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_DShKM_High_Mount: CUP_O_DSHKM_ChDKZ
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="DShKM High Mount";
    hiddenSelectionsTextures[]={};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_DSHkM_Low_Mount: CUP_O_DSHkM_MiniTriPod_ChDKZ
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="DSHkM Low Mount";
    hiddenSelectionsTextures[]={};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Ute_DShKM: CUP_I_Hilux_DSHKM_IND_G_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ute (DShKM)";
    hiddenSelectionsTextures[]={"x\cfp\addons\vehicles\hilux\body_blue_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\hilux_casemate_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Ute_Missile_Rack: CUP_I_Hilux_MLRS_IND_G_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ute (Missile Rack)";
    hiddenSelectionsTextures[]={"cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\body_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\hilux_casemate_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Ute_Mk9_Beartrap: I_G_Offroad_01_AT_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ute (Mk9 Beartrap)";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Ute: I_G_Offroad_01_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ute";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Ute_Mk232L_Thunder: CUP_I_Hilux_zu23_IND_G_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ute (Mk232L Thunder)";
    hiddenSelectionsTextures[]={"x\cfp\addons\vehicles\hilux\body_blue_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\hilux_casemate_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Quad_Bike: I_G_Quadbike_01_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Quad Bike";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\quadbike_01\data\quadbike_01_indp_hunter_co.paa","a3\soft_f_gamma\quadbike_01\data\quadbike_01_wheel_indp_hunter_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Ute_PD_24_Mortar: CUP_B_Hilux_podnos_BLU_G_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ute (PD-24 Mortar)";
    hiddenSelectionsTextures[]={"x\cfp\addons\vehicles\hilux\body_creme_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_hilux\data\v2\hilux_casemate_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Motorbike: CUP_O_TT650_TKA
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Motorbike";
    hiddenSelectionsTextures[]={"cup\wheeledvehicles\cup_wheeledvehicles_tt650\data\tt650_eciv_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Transport_Truck: CUP_C_Ural_Open_Civ_03
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Transport Truck";
    hiddenSelectionsTextures[]={"cup\wheeledvehicles\cup_wheeledvehicles_ural\data\ural_kabina_civ2_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ural\data\ural_plachta_civil_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Fuel_Truck: I_G_Van_01_fuel_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Fuel Truck";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_01_co.paa","a3\soft_f_bootcamp\van_01\data\van_01_tank_ig_01_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Service_Vehicle: I_G_Offroad_01_repair_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Service Vehicle";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_Cargo_Van: I_G_Van_02_vehicle_F
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Cargo Van";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_fia_02_co.paa","a3\soft_f_orange\van_02\data\van_wheel_co.paa","a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa","a3\soft_f_orange\van_02\data\van_body_fia_02_co.paa"};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };

  class B_RC_GUER_B_40_Tower_Civilian: CUP_C_Plane_Orbit
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="B 40 Tower Civilian";
    hiddenSelectionsTextures[]={"cup\airvehicles\cup_airvehicles_motorplane\data\orbit_btt_ext_01_racer_co.paa","cup\airvehicles\cup_airvehicles_motorplane\data\orbit_btt_ext_02_racer_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"};
    crew="B_RC_GUER_Pilot";
    typicalCargo[]={"B_RC_GUER_Pilot"};
  };

  class B_RC_GUER_Ch400_Observer: CUP_C_412_Sheriff
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Ch400 Observer";
    hiddenSelectionsTextures[]={"cup\airvehicles\cup_airvehicles_412\data\heli_medium01_sheriff_main_co.paa","cup\airvehicles\cup_airvehicles_412\data\heli_medium01_sheriff_ext_co.paa","cup\airvehicles\cup_airvehicles_412\data\heli_medium01_sheriff_ext1_co.paa","cup\airvehicles\cup_airvehicles_412\data\stickers\heli_medium01_stickers_ca.paa"};
    crew="B_RC_GUER_Squad_Leader";
    typicalCargo[]={"B_RC_GUER_Squad_Leader"};
  };

  class B_RC_GUER_Mk232L_Thunder: CUP_I_ZU23_NAPA
  {
    faction="B_RC_GUER_Coastal_Militia";
    side=1;
    displayName="Mk232L Thunder";
    hiddenSelectionsTextures[]={};
    crew="B_RC_GUER_Rifleman_Light";
    typicalCargo[]={"B_RC_GUER_Rifleman_Light"};
  };


  class B_RC_GUER_Assistant_Machine_Gunner_pack: B_CivilianBackpack_01_Everyday_Black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M {count=4;magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Combat_Life_Saver_pack: B_Messenger_Gray_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
    };
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=7;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class B_RC_GUER_Engineer_pack: B_CivilianBackpack_01_Everyday_Astra_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_CUP_IED_V3_M {count=1;magazine="CUP_IED_V3_M";};
     class _xx_IEDLandSmall_Remote_Mag {count=1;magazine="IEDLandSmall_Remote_Mag";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };


  class B_RC_GUER_Explosive_Specialist_pack: B_CivilianBackpack_01_Sport_Blue_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_CUP_PipeBomb_M {count=1;magazine="CUP_PipeBomb_M";};
     class _xx_CUP_IED_V4_M {count=1;magazine="CUP_IED_V4_M";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };


  class B_RC_GUER_Radio_Operator_pack: B_RadioBag_01_ghex_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Repair_Specialist_pack: B_CivilianBackpack_01_Sport_Green_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class B_RC_GUER_Mine_Layer_pack: B_CivilianBackpack_01_Everyday_Vrana_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_IEDLandSmall_Remote_Mag {count=1;magazine="IEDLandSmall_Remote_Mag";};
     class _xx_APERSTripMine_Wire_Mag {count=3;magazine="APERSTripMine_Wire_Mag";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };


  class B_RC_GUER_Mortar_Operator_pack: CUP_B_Podnos_Gun_Bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Assistant_Mortar_Operator_pack: CUP_B_Podnos_Bipod_Bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Gunner_Emplaced_MG_pack: CUP_B_DShkM_Gun_Bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Assistant_Emplaced_Gunner_pack: CUP_B_DShkM_TripodLow_Bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Assistant_Emplaced_Antitank_pack: CUP_B_SPG9_Tripod_Bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class B_RC_GUER_Gunner_Emplaced_AT_pack: CUP_B_SPG9_Gun_Bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line ////////////////
