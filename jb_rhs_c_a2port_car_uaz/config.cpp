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
	class Offroad_01_base_F: Car_F {};

	class RHS_UAZ_Base: Offroad_01_base_F
	{
		class Sounds
		{
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle","db+2.1",1};
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_acceleration","db+2.4",1};
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1","db+2.4",1};
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1","db+2.1",1};
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1","db+1.8",1};
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1","db+1.5",1};
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1","db+1.5",1};
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust","db+1.8",1};
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db+1.8",1};
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db+1.5",1};
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+1.2",1};
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+0.9",1};
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+0.9",1};
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db+0.9",1};
			};
			class RainIn
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss","db+0.9",1};
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+1.8",1.0};
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+1.8",1.0};
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+1.8",1.0};
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+1.8",1.0};
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+1.8",1.0};
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+1.8",1.0};
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+3",1.0};
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db+2.6",1};
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+2.6",1};
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+2.6",1};
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+2.6",1};
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db+2.6",1};
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db+2.6",1};
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+2.6",1};
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+2.6",1};
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