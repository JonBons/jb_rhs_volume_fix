class CfgPatches
{
	class jb_rhs_c_a2port_car_uaz
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_a2port_car"};
		version = "0.1";
		magazines[] = {};
		ammo[] = {};
	};
};

class cfgVehicles {

	class RHS_UAZ_Base: Offroad_01_base_F
	{
		class Sounds
		{
			class Engine
			{
				sound[]	= {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_acceleration", db+5.5, 1, 200};
			};
			class Idle_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle", db+3.5, 1};
			};
			class Engine_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_acceleration", db+4, 1};
			};
			class Engine1_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1", db+4, 1};
			};
			class Engine2_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", db+3.5, 1};
			};
			class Engine3_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", db+3, 1};
			};
			class Engine4_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", db+2.5, 1};
			};
			class Engine5_int
			{
				sound[]	=	{"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", db+2.5, 1};
			};
			class IdleThrust_int
		    {
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust", db+3,1 };
		  	};
		  	class EngineThrust_int
		  	{
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", db+3,1 };
		  	};
		  	class Engine1_Thrust_int
		  	{
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", db+2.5,1 };
		  	};
		  	class Engine2_Thrust_int
		  	{
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+2,1 };
		  	};
		  	class Engine3_Thrust_int
		  	{
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1.5,1 };
		  	};
		  	class Engine4_Thrust_int
		  	{
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1.5,1 };
		  	};
		  	class Engine5_Thrust_int
		  	{
		    	sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", db+1.5,1 };
	  		};
		};
	};

	class rhs_uaz_open_Base: RHS_UAZ_Base {};
	class RHS_UAZ_MSV_Base: RHS_UAZ_Base {};
	class rhs_uaz_open_MSV_Base: rhs_uaz_open_Base {};
	class RHS_UAZ_MSV_01: RHS_UAZ_MSV_Base {};
	class rhs_uaz_vdv: RHS_UAZ_MSV_01 {};
	class rhs_uaz_vmf: RHS_UAZ_MSV_01 {};
	class rhs_uaz_vv: RHS_UAZ_MSV_01 {};
	class rhs_uaz_open_MSV_01: rhs_uaz_open_MSV_Base {};
	class rhs_uaz_open_vdv: rhs_uaz_open_MSV_01 {};
	class rhs_uaz_open_vmf: rhs_uaz_open_MSV_01 {};
	class rhs_uaz_open_vv: rhs_uaz_open_MSV_01 {};

};