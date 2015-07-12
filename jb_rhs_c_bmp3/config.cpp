class CfgPatches
{
	class jb_rhs_c_bmp3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_bmp3"};
		version = "0.1";
		magazines[] = {};
		ammo[] = {};
	};
};

class cfgVehicles {

	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class rhs_bmp3tank_base: Tank_F
	{
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",0.70794576,1,200};
				frequency = "0.95 + ((rpm/ 5200) factor[(400/ 5200),(900/ 5200)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 5200) factor[(100/ 5200),(200/ 5200)]) * ((rpm/ 5200) factor[(900/ 5200),(700/ 5200)]))";
			};
			class Engine
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",0.7943282,1,200};
				frequency = "0.8 + ((rpm/ 5200) factor[(700/ 5200),(1100/ 5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 5200) factor[(705/ 5200),(850/ 5200)]) * ((rpm/ 5200) factor[(1100 / 5200),(950/ 5200)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",0.7943282,1,200};
				frequency = "0.8 + ((rpm/ 5200) factor[(950/ 5200),(1400/ 5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 5200) factor[(900/ 5200),(1050/ 5200)]) * ((rpm/ 5200) factor[(1400/ 5200),(1200/ 5200)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",0.8912509,1,250};
				frequency = "0.8 + ((rpm/ 5200) factor[(1200/ 5200),(1700/ 5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 5200) factor[(1170/ 5200),(1380/ 5200)]) * ((rpm/ 5200) factor[(1700/ 5200),(1500/ 5200)]))";
			};
			class Engine3_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",1.0,1,300};
				frequency = "0.8 + ((rpm/ 5200) factor[(1500/ 5200),(2100/ 5200)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 5200) factor[(1500/ 5200),(1670/ 5200)]) * ((rpm/ 5200) factor[(2100/ 5200),(1800/ 5200)]))";
			};
			class Engine4_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",1.1220185,1,340};
				frequency = "0.8 + ((rpm/ 5200) factor[(1800/ 5200),(2300/ 5200)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 5200) factor[(1780/ 5200),(2060/ 5200)]) * ((rpm/ 5200) factor[(2450/ 5200),(2200/ 5200)]))";
			};
			class Engine5_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",1.4125376,1,400};
				frequency = "0.8 + ((rpm/ 5200) factor[(2100/ 5200),(2640/ 5200)])*0.1";
				volume = "engineOn*camPos*((rpm/ 5200) factor[(2150/ 5200),(2500/ 5200)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",0.8912509,1,200};
				frequency = "0.8 + ((rpm/ 5200) factor[(400/ 5200),(900/ 5200)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5200) factor[(100/ 5200),(200/ 5200)]) * ((rpm/ 5200) factor[(900/ 5200),(700/ 5200)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",1.1220185,1,200};
				frequency = "0.8 + ((rpm/ 5200) factor[(700/ 5200),(1100/ 5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5200) factor[(705/ 5200),(850/ 5200)]) * ((rpm/ 5200) factor[(1100 / 5200),(950/ 5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",1.2589254,1,200};
				frequency = "0.8 + ((rpm/ 5200) factor[(950/ 5200),(1400/ 5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5200) factor[(900/ 5200),(1050/ 5200)]) * ((rpm/ 5200) factor[(1400/ 5200),(1200/ 5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",1.4125376,1,250};
				frequency = "0.8 + ((rpm/ 5200) factor[(1200/ 5200),(1700/ 5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5200) factor[(1170/ 5200),(1380/ 5200)]) * ((rpm/ 5200) factor[(1700/ 5200),(1500/ 5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",1.5848932,1,350};
				frequency = "0.8 + ((rpm/ 5200) factor[(1500/ 5200),(2100/ 5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5200) factor[(1500/ 5200),(1670/ 5200)]) * ((rpm/ 5200) factor[(2100/ 5200),(1800/ 5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",1.7782794,1,400};
				frequency = "0.8 + ((rpm/ 5200) factor[(1800/ 5200),(2300/ 5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5200) factor[(1780/ 5200),(2060/ 5200)]) * ((rpm/ 5200) factor[(2450/ 5200),(2200/ 5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",1.9952624,1,450};
				frequency = "0.8 + ((rpm/ 5200) factor[(2100/ 5200),(2640/ 5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 5200) factor[(2150/ 5200),(2500/ 5200)])";
			};
		};
	};
	class rhs_bmp3_msv: rhs_bmp3tank_base {};
	class rhs_bmp3_late_msv: rhs_bmp3tank_base {};
	class rhs_bmp3m_msv: rhs_bmp3tank_base {};
	class rhs_bmp3mera_msv: rhs_bmp3m_msv {};

};