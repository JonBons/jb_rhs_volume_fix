class CfgPatches
{
	class jb_rhs_c_btr
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_btr"};
		version = "0.1";
		magazines[] = {};
		ammo[] = {};
	};
};

class cfgVehicles {

	class Car;
	class Car_F: Car
	{
		class ViewPilot;
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
	};

	class rhs_btr_base: Wheeled_APC_F
	{
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",0.35481337,1,200};
				frequency = "0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",0.39810717,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",0.4466836,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",0.5011872,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",0.56234133,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",0.63095737,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",0.70794576,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",0.56234133,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",0.63095737,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",0.63095737,1,230};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",0.70794576,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",0.70794576,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",1.0,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",0.9220185,1,400};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",0.41622776,1};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",0.35481337,1};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",0.35481337,1};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
		};
	};
	class rhs_btr70_vmf: rhs_btr_base {};
	class rhs_btr70_vdv: rhs_btr70_vmf {};
	class rhs_btr70_vv: rhs_btr70_vmf {};
	class rhs_btr70_msv: rhs_btr70_vmf {};
	class rhs_btr80_msv: rhs_btr70_msv {};
	class rhs_btr80_vdv: rhs_btr80_msv {};
	class rhs_btr80_vv: rhs_btr80_msv {};
	class rhs_btr80_vmf: rhs_btr80_msv {};
	class rhs_btr80a_msv: rhs_btr80_msv {};
	class rhs_btr80a_vdv: rhs_btr80a_msv {};
	class rhs_btr80a_vv: rhs_btr80a_msv {};
	class rhs_btr80a_vmf: rhs_btr80a_msv {};

};