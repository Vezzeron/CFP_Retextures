class CfgPatches {
	class tft_cfp_retextures {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = { "A3_Characters_F_BLUFOR", "CFP_Vests_Config" };
		version = 1.0;
		author = "Ampers, Jhai";
	};
};
class cfgWeapons {
	class UniformItem;                          // External class reference
	class ItemCore;                             // External class reference
	class HelmetBase;                           // External class reference
	class Vest_NoCamo_Base;                     // External class reference
	class HeadgearItem;							// External class reference
	class InventoryItem_Base_F;					// External class reference
	class VestItem;								// External class reference

	class Vest_Camo_Base : ItemCore {
		class ItemInfo;
	};
	// VSM Helmets Standalone Retextures...

	class VSM_OPS2017_Helmet_Tan : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "OPSCORE (Sand)";
		model = "tft_cfp_retextures\VSM\Models\VSM_OPS2017.p3d";
		hiddenSelections[] = { "camo","camo1","camo2" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\rr_ops_co.paa","tft_cfp_retextures\VSM\vsm_z110t.paa","tft_cfp_retextures\VSM\velcro_co.paa" };
		author = "TFT8";
		class ItemInfo : HeadgearItem {
			mass = 15;
			allowedSlots[] = { 901,605 };
			uniformmodel = "tft_cfp_retextures\VSM\Models\VSM_OPS2017.p3d";
			modelSides[] = { 6 };
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD = (6, 0.5)
				hiddenSelections[] = { "camo","camo1","camo2" };
			hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\rr_ops_co.paa","tft_cfp_retextures\VSM\vsm_z110t.paa","tft_cfp_retextures\VSM\velcro_co.paa" };
		};
	};
	class VSM_OPS2017_Helmet_OCP : VSM_OPS2017_Helmet_Tan {
		displayName = "OPSCORE (OCP)";
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_OPS_OCP.paa","tft_cfp_retextures\VSM\vsm_z110t.paa","tft_cfp_retextures\VSM\velcro_co.paa" };
		author = "TFT8";
		class ItemInfo : HeadgearItem {
			mass = 15;
			allowedSlots[] = { 901,605 };
			uniformmodel = "tft_cfp_retextures\VSM\Models\VSM_OPS2017.p3d";
			modelSides[] = { 6 };
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD = (6, 0.5)
				hiddenSelections[] = { "camo","camo1","camo2" };
			hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_OPS_OCP.paa","tft_cfp_retextures\VSM\vsm_z110t.paa","tft_cfp_retextures\VSM\velcro_co.paa" };
		};
	};
	class VSM_OPS2017_Helmet_WNT : VSM_OPS2017_Helmet_Tan {
		displayName = "OPSCORE (WNT)";
		hiddenSelections[] = { "camo","camo1","camo2" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_OPS_WNT.paa","tft_cfp_retextures\VSM\vsm_z110t.paa","tft_cfp_retextures\VSM\velcro_co.paa" };
		author = "TFT8";
		class ItemInfo : HeadgearItem {
			mass = 15;
			allowedSlots[] = { 901,605 };
			uniformmodel = "tft_cfp_retextures\VSM\Models\VSM_OPS2017.p3d";
			modelSides[] = { 6 };
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD = (6, 0.5)
				hiddenSelections[] = { "camo","camo1","camo2" };
			hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_OPS_WNT.paa","tft_cfp_retextures\VSM\vsm_z110t.paa","tft_cfp_retextures\VSM\velcro_co.paa" };
		};
	};

	// 75th Ranger Opscore Standalone Retextures...

	class TFT_OpsC_Covered_OCP : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "OPSCORE II Covered (OCP)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_covered.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_OCP_CO.paa" };
		author = "TFT8";
		class ItemInfo : HeadgearItem {
			mass = 15;
			allowedSlots[] = { 901,605 };
			uniformmodel = "tft_cfp_retextures\75Ranger\Models\ops_core_covered.p3d";
			modelSides[] = { 6 };
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD = (6, 0.5)
				hiddenSelections[] = { "camo" };
			hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_OCP_co.paa" };
		};
	};
	class TFT_OpsC_Covered_WNT : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "OPSCORE II Covered (WNT)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_covered.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_WNT_co.paa" };
		author = "TFT8";
		class ItemInfo : HeadgearItem {
			mass = 15;
			allowedSlots[] = { 901,605 };
			uniformmodel = "tft_cfp_retextures\75Ranger\Models\ops_core_covered.p3d";
			modelSides[] = { 6 };
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD = (6, 0.5)
				hiddenSelections[] = { "camo" };
			hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_WNT_co.paa" };
		};
	};
	class TFT_OpsC_Covered2_OCP : ItemCore {
		scope = 2;
		author = "TFT8";
		displayName = "OPSCORE II Covered 2 (OCP)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_covered2.p3d";
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_OCP_co.paa","tft_cfp_retextures\75Ranger\wmx200_insight_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 30;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\ops_core_covered2.p3d";
			modelSides[] = { 3,1 };
			hiddenSelections[] = { "camo","camo1" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
				};
			};
		};
	};
	class TFT_OpsC_Covered2_WNT : ItemCore {
		scope = 2;
		author = "TFT8";
		displayName = "OPSCORE II Covered 2 (WNT)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_covered2.p3d";
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_WNT_co.paa","tft_cfp_retextures\75Ranger\wmx200_insight_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 30;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\ops_core_covered2.p3d";
			modelSides[] = { 3,1 };
			hiddenSelections[] = { "camo","camo1" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
				};
			};
		};
	};
	class TFT_OpsC_Med_OCP : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "OPSCORE II Special (OCP)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_cov_medic.p3d";
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_OCP_co.paa","tft_cfp_retextures\75Ranger\wmx200_insight_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 30;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\ops_core_cov_medic.p3d";
			modelSides[] = { 3,1 };
			hiddenSelections[] = { "camo","camo1" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
				};
			};
		};
	};
	class TFT_OpsC_Med_WNT : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "OPSCORE II Special (WNT)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_cov_medic.p3d";
		hiddenSelections[] = { "camo","camo1" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_WNT_co.paa","tft_cfp_retextures\75Ranger\wmx200_insight_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 30;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\ops_core_cov_medic.p3d";
			modelSides[] = { 3,1 };
			hiddenSelections[] = { "camo","camo1" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
				};
			};
		};
	};
	class TFT_OpsC_Uncovered_OCP : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "OPSCORE II Uncovered (OCP)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_uncovered.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_OCP_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 30;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\ops_core_uncovered.p3d";
			modelSides[] = { 3,1 };
			hiddenSelections[] = { "camo" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
				};
			};
		};
	};
	class TFT_OpsC_Uncovered_WNT : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "OPSCORE II Uncovered (WNT)";
		model = "tft_cfp_retextures\75Ranger\Models\ops_core_uncovered.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tft8_75opscore_WNT_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 30;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\ops_core_uncovered.p3d";
			modelSides[] = { 3,1 };
			hiddenSelections[] = { "camo" };
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.500000;
				};
			};
		};
	};


	// VSM Vests CFP Dependent Retextures...

	class CFP_LBT6094_operator_OCP;
	class CFP_LBT6094_MG_OCP;
	class CFP_LBT6094_breacher_OCP;
	class CFP_FAPC_Operator_OCP;
	class CFP_FAPC_Breacher_OCP;
	class CFP_FAPC_MG_OCP;
	class CFP_RAV_operator_OCP;
	class CFP_RAV_Breacher_OCP;
	class CFP_RAV_mg_OCP;

	class TFT_RAV_operator_OCP : CFP_RAV_operator_OCP {
		author = "TFT8";
		displayName = "RAV Operator (OCP)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMcommsgear" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_RAV_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa", };
	};
	class TFT_RAV_MG_OCP : CFP_RAV_mg_OCP {
		author = "TFT8";
		displayName = "RAV Gunner (OCP)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_boxmag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\vsm_boxmag_OGA.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_RAV_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa" };
	};
	class TFT_RAV_Breacher_OCP : CFP_RAV_Breacher_OCP {
		author = "TFT8";
		displayName = "RAV Breacher (OCP)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_RAV_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_OCP.paa" };
	};
	class TFT_RAV_operator_WNT : CFP_RAV_operator_OCP {
		author = "TFT8";
		displayName = "RAV Operator (WNT)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_RAV_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa" };
	};
	class TFT_RAV_MG_WNT : CFP_RAV_mg_OCP {
		author = "TFT8";
		displayName = "RAV Gunner (WNT)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_boxmag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\vsm_boxmag_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_RAV_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa" };
	};
	class TFT_RAV_Breacher_WNT : CFP_RAV_Breacher_OCP {
		author = "TFT8";
		displayName = "RAV Breacher (WNT)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_RAV_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_WNT.paa" };
	};

	class TFT_LBT6094_operator_OCP : CFP_LBT6094_operator_OCP {
		author = "TFT8";
		displayName = "LBT Operator (OCP)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_lbt6094_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_OCP.paa" };
	};
	class TFT_LBT6094_MG_OCP : CFP_LBT6094_MG_OCP {
		author = "TFT8";
		displayName = "LBT Gunner (OCP)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\tft8_boxmag_OCP.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_lbt6094_OCP.paa" };
	};
	class TFT_LBT6094_breacher_OCP : CFP_LBT6094_breacher_OCP {
		author = "TFT8";
		displayName = "LBT Breacher (OCP)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_lbt6094_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_OCP.paa" };
	};
	class TFT_LBT6094_operator_WNT : CFP_LBT6094_operator_OCP {
		author = "TFT8";
		displayName = "LBT Operator (WNT)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_lbt6094_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_WNT.paa" };
	};
	class TFT_LBT6094_MG_WNT : CFP_LBT6094_MG_OCP {
		author = "TFT8";
		displayName = "LBT Gunner (WNT)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_boxMag", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\tft8_boxmag_WNT.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_lbt6094_WNT.paa" };
	};
	class TFT_LBT6094_breacher_WNT : CFP_LBT6094_breacher_OCP {
		author = "TFT8";
		displayName = "LBT Breacher (WNT)";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_lbt6094_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_WNT.paa" };
	};

	class TFT_FAPC_Operator_OCP : CFP_FAPC_Operator_OCP {
		displayName = "FAPC Operator (OCP)";
		author = "TFT8";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_fapc_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa" };
	};
	class TFT_FAPC_MG_OCP : CFP_FAPC_MG_OCP {
		displayName = "FAPC Gunner (OCP)";
		author = "TFT8";
		hiddenSelections[] = { "_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\tft8_boxmag_OCP.paa","tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_fapc_OCP.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_OCP.paa" };
	};
	class TFT_FAPC_Breacher_OCP : CFP_FAPC_Breacher_OCP {
		displayName = "FAPC Breacher (OCP)";
		author = "TFT8";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_OCP.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_OCP.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_OCP.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_fapc_OCP.paa", "tft_cfp_retextures\VSM\tft8_Pouches_OCP.paa" };
	};
	class TFT_FAPC_Operator_WNT : CFP_FAPC_Operator_OCP {
		displayName = "FAPC Operator (WNT)";
		author = "TFT8";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_fapc_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa" };
	};
	class TFT_FAPC_MG_WNT : CFP_FAPC_MG_OCP {
		displayName = "FAPC Gunner (WNT)";
		author = "TFT8";
		hiddenSelections[] = { "_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\tft8_boxmag_WNT.paa","tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_fapc_WNT.paa", "tft_cfp_retextures\VSM\tft8_ButtPouch_WNT.paa" };
	};
	class TFT_FAPC_Breacher_WNT : CFP_FAPC_Breacher_OCP {
		displayName = "FAPC Breacher (WNT)";
		author = "TFT8";
		hiddenSelections[] = { "_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\tft8_Chestrig_WNT.paa", "tft_cfp_retextures\VSM\tft8_BattleBelt_WNT.paa", "tft_cfp_retextures\VSM\VSM_DropHolster_OGA.paa", "tft_cfp_retextures\VSM\serpa.paa", "tft_cfp_retextures\VSM\tft8_Gear_WNT.paa", "tft_cfp_retextures\VSM\radio_pouch.paa", "tft_cfp_retextures\VSM\tft8_fapc_WNT.paa", "tft_cfp_retextures\VSM\tft8_Pouches_WNT.paa" };
	};

	// Itsthomas's Beanies Standalone Addon...

	class TFT_Beanie_Blk : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Tactical Beanie (Black)";
		model = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tac_beanie_blk_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 8;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};
	class TFT_Beanie_Blk2 : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Soft Beanie (Black)";
		model = "tft_cfp_retextures\75Ranger\Models\thm_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\beanie_blk_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 4;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};
	class TFT_Beanie_Khaki : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Tactical Beanie (Khaki)";
		model = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tac_beanie_khki_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 8;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};
	class TFT_Beanie_Khaki2 : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Soft Beanie (Khaki)";
		model = "tft_cfp_retextures\75Ranger\Models\thm_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\beanie_khaki_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 4;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};
	class TFT_Beanie_Olv : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Tactical Beanie (Olive)";
		model = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tac_beanie_olv_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 8;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};
	class TFT_Beanie_Olv2 : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Soft Beanie Olive";
		model = "tft_cfp_retextures\75Ranger\Models\thm_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\beanie_olv_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 4;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};
	class TFT_Beanie_Grn : ItemCore {
		scope = 2;
		weaponPoolAvailable = 1;
		author = "TFT8";
		displayName = "Tactical Beanie (Green)";
		model = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\tac_beanie_grn_co.paa" };
		class ItemInfo : HeadgearItem {
			mass = 8;
			uniformModel = "tft_cfp_retextures\75Ranger\Models\thm_tactical_beanie.p3d";
			modelSides[] = { 6 };
			hiddenSelections[] = { "camo" };
		};
	};

};

class CfgGlasses {

	class None;
	// VSM Beard Standalone Addon...

	class TFT_Beard : None {
		scope = 2;
		displayname = "Beard";
		author = "TFT8";
		model = "tft_cfp_retextures\VSM\Models\VSM_Beard_3.p3d";
		hiddenSelections[] = { "_newnew" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\VSM\VSM_Beard_2.paa" };
		identityTypes[] = { "NoGlasses",0 };
	};

	// 75th Ranger Goggles Standalone Addon...

	class TFT_Oakley_Goggles_Blk : None {
		scope = 2;
		displayname = "Oakley Ballistics (Black)";
		author = "TFT8";
		model = "tft_cfp_retextures\75Ranger\Models\oakley_ballistic_goggles.p3d";
		hiddenSelections[] = { "camo", "camo2" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\oakley_b_goggles_blk_co.paa","tft_cfp_retextures\75Ranger\glass_clear_ca.paa" };
		identityTypes[] = { "NoGlasses",1000 };
		class ItemInfo {
			type = 616;
			hmdType = 0;
			uniformmodel = "tft_cfp_retextures\75Ranger\Models\oakley_ballistic_goggles.p3d";
			mass = 4;
			hiddenSelections[] = { "camo", "camo2" };
		};
	};
	class TFT_Oakley_Goggles_Olv : None {
		scope = 2;
		displayname = "Oakley Ballistics (Olive)";
		author = "TFT8";
		model = "tft_cfp_retextures\75Ranger\Models\oakley_ballistic_goggles.p3d";
		hiddenSelections[] = { "camo", "camo2" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\oakley_b_goggles_olv_co.paa","tft_cfp_retextures\75Ranger\glass_clear_ca.paa" };
		identityTypes[] = { "NoGlasses",1000 };
		class ItemInfo {
			type = 616;
			hmdType = 0;
			uniformmodel = "tft_cfp_retextures\75Ranger\Models\oakley_ballistic_goggles.p3d";
			mass = 4;
			hiddenSelections[] = { "camo", "camo2" };
		};
	};
	class TFT_Oakley_Goggles_Alp : None {
		scope = 2;
		displayname = "Oakley Ballistics (WNT)";
		author = "TFT8";
		model = "tft_cfp_retextures\75Ranger\Models\oakley_ballistic_goggles.p3d";
		hiddenSelections[] = { "camo", "camo2" };
		hiddenSelectionsTextures[] = { "tft_cfp_retextures\75Ranger\oakley_b_goggles_alpn_co.paa","tft_cfp_retextures\75Ranger\glass_clear_ca.paa" };
		identityTypes[] = { "NoGlasses",1000 };
		class ItemInfo {
			type = 616;
			hmdType = 0;
			uniformmodel = "tft_cfp_retextures\75Ranger\Models\oakley_ballistic_goggles.p3d";
			mass = 4;
			hiddenSelections[] = { "camo", "camo2" };
		};
	};
};