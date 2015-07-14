class CfgPatches
{
	class jb_rhs_c_a2port_car_ural
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
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation = 1;
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};

	class RHS_Ural_BaseTurret: Truck_F
	{
		class Sounds
		{
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-idle","db+8",1};
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-acceleration","db+8",1};
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-low","db+7",1};
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db+7",1};
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db+6",1};
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db+6",1};
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db+6",1};
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust","db+10",1};
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db+9",1};
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db+8",1};
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+7",1};
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+6",1};
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+5",1};
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+4",1};
			};
			class RainIn
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss","db+3",1};
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+6",1.0};
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+6",1.0};
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+6",1.0};
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+6",1.0};
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+6",1.0};
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+6",1.0};
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+12",1.0};
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db+10",1};
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db+10",1};
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db+10",1};
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
			};
		};
	};

	class RHS_Ural_Base: RHS_Ural_BaseTurret {};
	class RHS_Ural_MSV_Base: RHS_Ural_Base {};
	class RHS_Ural_MSV_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_VDV_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_VMF_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_VV_01: RHS_Ural_MSV_Base {};

	class RHS_Ural_Flat_MSV_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_Flat_VDV_01: RHS_Ural_Flat_MSV_01 {};
	class RHS_Ural_Flat_VMF_01: RHS_Ural_Flat_MSV_01 {};
	class RHS_Ural_Flat_VV_01: RHS_Ural_Flat_MSV_01 {};
	class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_Open_VDV_01: RHS_Ural_Open_MSV_01 {};
	class RHS_Ural_Open_VMF_01: RHS_Ural_Open_MSV_01 {};
	class RHS_Ural_Open_VV_01: RHS_Ural_Open_MSV_01 {};
	class RHS_Ural_Open_Flat_MSV_01: RHS_Ural_Open_MSV_01 {};
	class RHS_Ural_Open_Flat_VDV_01: RHS_Ural_Open_Flat_MSV_01 {};
	class RHS_Ural_Open_Flat_VMF_01: RHS_Ural_Open_Flat_MSV_01 {};
	class RHS_Ural_Open_Flat_VV_01: RHS_Ural_Open_Flat_MSV_01 {};
	class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
	class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01 {};
	class RHS_Ural_Fuel_VDV_01: RHS_Ural_Fuel_MSV_01 {};
	class RHS_Ural_Fuel_VMF_01: RHS_Ural_Fuel_MSV_01 {};
	class RHS_Ural_Fuel_VV_01: RHS_Ural_Fuel_MSV_01 {};
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret {};
	class RHS_BM21_VDV_01: RHS_BM21_MSV_01 {};
	class RHS_BM21_VMF_01: RHS_BM21_MSV_01 {};
	class RHS_BM21_VV_01: RHS_BM21_MSV_01 {};
	class RHS_Ural_Civ_Base: RHS_Ural_Base {};
	class RHS_Ural_Civ_01: RHS_Ural_Civ_Base {};
	class RHS_Ural_Civ_02: RHS_Ural_Civ_01 {};
	class RHS_Ural_Civ_03: RHS_Ural_Civ_01 {};
	class RHS_Ural_Open_Civ_01: RHS_Ural_Civ_Base {};
	class RHS_Ural_Open_Civ_02: RHS_Ural_Open_Civ_01 {};
	class RHS_Ural_Open_Civ_03: RHS_Ural_Open_Civ_01 {};

};