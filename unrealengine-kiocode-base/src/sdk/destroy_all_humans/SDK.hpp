#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// DH
// 4.22.3-0+++UE4+Release-4.22

// Includes the entire SDK, include files directly for faster compilation!

#include "SDK/Basic.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/BFGCore_classes.hpp"
/*#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/NiagaraCore_classes.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/MovieScene_structs.hpp"
#include "SDK/MovieScene_classes.hpp"
#include "SDK/NiagaraShader_structs.hpp"
#include "SDK/Niagara_structs.hpp"
#include "SDK/AudioPlatformConfiguration_structs.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/Niagara_classes.hpp"
#include "SDK/OnlineSubsystem_structs.hpp"
#include "SDK/OnlineSubsystem_classes.hpp"
#include "SDK/OnlineSubsystemUtils_structs.hpp"
#include "SDK/OnlineSubsystemUtils_classes.hpp"
#include "SDK/AudioMixer_structs.hpp"
#include "SDK/AudioMixer_classes.hpp"
#include "SDK/BP_EffectObject_Step_NPC_Female_HiHeels_classes.hpp"
#include "SDK/SoundVisualizations_classes.hpp"
#include "SDK/Ansel_structs.hpp"
#include "SDK/Ansel_classes.hpp"
#include "SDK/ApexDestruction_structs.hpp"
#include "SDK/ApexDestruction_classes.hpp"
#include "SDK/PacketHandler_structs.hpp"
#include "SDK/PacketHandler_classes.hpp"
#include "SDK/OnlineSubsystemSteam_classes.hpp"
#include "SDK/GameplayTags_structs.hpp"
#include "SDK/GameplayAbilities_structs.hpp"
#include "SDK/GameplayAbilities_classes.hpp"
#include "SDK/GameplayTasks_structs.hpp"
#include "SDK/GameplayTasks_classes.hpp"
#include "SDK/AnimationCore_structs.hpp"
#include "SDK/ControlRig_structs.hpp"
#include "SDK/ControlRig_classes.hpp"
#include "SDK/MovieSceneTracks_structs.hpp"
#include "SDK/MovieSceneTracks_classes.hpp"
#include "SDK/LevelSequence_structs.hpp"
#include "SDK/LevelSequence_classes.hpp"
#include "SDK/AnimGraphRuntime_structs.hpp"
#include "SDK/AnimGraphRuntime_classes.hpp"
#include "SDK/SoundUtilities_structs.hpp"
#include "SDK/SoundUtilities_classes.hpp"
#include "SDK/Synthesis_structs.hpp"
#include "SDK/Synthesis_classes.hpp"
#include "SDK/Rural_lady_PostAnimBP_classes.hpp"
#include "SDK/UMG_structs.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/AnimationBudgetAllocator_structs.hpp"
#include "SDK/AnimationBudgetAllocator_classes.hpp"
#include "SDK/BP_DamageType_ExtractBrain_classes.hpp"
#include "SDK/Paper2D_structs.hpp"
#include "SDK/Paper2D_classes.hpp"
#include "SDK/Blast_structs.hpp"
#include "SDK/Blast_classes.hpp"
#include "SDK/GeometryCache_structs.hpp"
#include "SDK/GeometryCache_classes.hpp"
#include "SDK/GeometryCacheTracks_structs.hpp"
#include "SDK/GeometryCacheTracks_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Urban_Crazy_classes.hpp"
#include "SDK/GenericGraphRuntime_classes.hpp"
#include "SDK/BP_AnimSharingSetup_classes.hpp"
#include "SDK/BFGSessionFoundation_structs.hpp"
#include "SDK/BFGSessionFoundation_classes.hpp"
#include "SDK/BFGVisualEffects_structs.hpp"
#include "SDK/BFGVisualEffects_classes.hpp"
#include "SDK/AnimationSharing_structs.hpp"
#include "SDK/AnimationSharing_classes.hpp"
#include "SDK/SignificanceManager_classes.hpp"
#include "SDK/PhysXVehicles_structs.hpp"
#include "SDK/PhysXVehicles_classes.hpp"
#include "SDK/DiscordRpc_structs.hpp"
#include "SDK/DiscordRpc_classes.hpp"
#include "SDK/Renderer_structs.hpp"
#include "SDK/LightPropagationVolumeRuntime_classes.hpp"
#include "SDK/FacialAnimation_classes.hpp"
#include "SDK/CinematicCamera_structs.hpp"
#include "SDK/DatasmithContent_structs.hpp"
#include "SDK/DatasmithContent_classes.hpp"
#include "SDK/BP_Zapomatic_BeamEffectActor_classes.hpp"
#include "SDK/VariantManagerContent_structs.hpp"
#include "SDK/VariantManagerContent_classes.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/BFGCore_structs.hpp"
#include "SDK/AIModule_classes.hpp"
#include "SDK/Enum_WhichBehaviorSound_structs.hpp"
#include "SDK/BP_Character_Civilian_Base_classes.hpp"
#include "SDK/AppleImageUtils_structs.hpp"
#include "SDK/AppleImageUtils_classes.hpp"
#include "SDK/AppleVision_structs.hpp"
#include "SDK/AppleVision_classes.hpp"
#include "SDK/HTML5Networking_classes.hpp"
#include "SDK/AvfMediaFactory_classes.hpp"
#include "SDK/MediaAssets_structs.hpp"
#include "SDK/MediaAssets_classes.hpp"
#include "SDK/ImgMedia_classes.hpp"
#include "SDK/ImgMediaFactory_classes.hpp"
#include "SDK/LinearTimecode_structs.hpp"
#include "SDK/LinearTimecode_classes.hpp"
#include "SDK/MediaCompositing_structs.hpp"
#include "SDK/MediaCompositing_classes.hpp"
#include "SDK/WmfMediaFactory_classes.hpp"
#include "SDK/TcpMessaging_classes.hpp"
#include "SDK/UdpMessaging_structs.hpp"
#include "SDK/UdpMessaging_classes.hpp"
#include "SDK/ActorSequence_structs.hpp"
#include "SDK/ActorSequence_classes.hpp"
#include "SDK/AndroidPermission_classes.hpp"
#include "SDK/ArchVisCharacter_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Base_classes.hpp"
#include "SDK/AudioCapture_classes.hpp"
#include "SDK/CableComponent_classes.hpp"
#include "SDK/CustomMeshComponent_structs.hpp"
#include "SDK/CustomMeshComponent_classes.hpp"
#include "SDK/MeshDescription_structs.hpp"
#include "SDK/EditableMesh_structs.hpp"
#include "SDK/EditableMesh_classes.hpp"
#include "SDK/LocationServicesBPLibrary_structs.hpp"
#include "SDK/LocationServicesBPLibrary_classes.hpp"
#include "SDK/OculusHMD_structs.hpp"
#include "SDK/HeadMountedDisplay_structs.hpp"
#include "SDK/OculusHMD_classes.hpp"
#include "SDK/OculusMR_structs.hpp"
#include "SDK/OculusMR_classes.hpp"
#include "SDK/BP_Character_Enemy_Majestic_AlienTechPistol_classes.hpp"
#include "SDK/ProceduralMeshComponent_structs.hpp"
#include "SDK/ProceduralMeshComponent_classes.hpp"
#include "SDK/Soldier_02_PostAnimBP_classes.hpp"
#include "SDK/SteamVR_structs.hpp"
#include "SDK/SteamVR_classes.hpp"
#include "SDK/SteamVRController_structs.hpp"
#include "SDK/SteamVRController_classes.hpp"
#include "SDK/ANIM_MovementDirection_Enum_structs.hpp"
#include "SDK/BP_NavArea_Road_classes.hpp"
#include "SDK/Foliage_structs.hpp"
#include "SDK/Foliage_classes.hpp"
#include "SDK/NavigationSystem_structs.hpp"
#include "SDK/NavigationSystem_classes.hpp"
#include "SDK/DH1_structs.hpp"
#include "SDK/DH1_classes.hpp"
#include "SDK/DH_classes.hpp"
#include "SDK/InputCore_classes.hpp"
#include "SDK/SlateCore_classes.hpp"
#include "SDK/Slate_classes.hpp"
#include "SDK/ImageWriteQueue_structs.hpp"
#include "SDK/ImageWriteQueue_classes.hpp"
#include "SDK/MaterialShaderQualitySettings_structs.hpp"
#include "SDK/MaterialShaderQualitySettings_classes.hpp"
#include "SDK/EngineSettings_structs.hpp"
#include "SDK/EngineSettings_classes.hpp"
#include "SDK/AugmentedReality_structs.hpp"
#include "SDK/AugmentedReality_classes.hpp"
#include "SDK/BP_AlertResponseLevel_Police_classes.hpp"
#include "SDK/HeadMountedDisplay_classes.hpp"
#include "SDK/BuildPatchServices_structs.hpp"
#include "SDK/BuildPatchServices_classes.hpp"
#include "SDK/Landscape_structs.hpp"
#include "SDK/Landscape_classes.hpp"
#include "SDK/TimeManagement_structs.hpp"
#include "SDK/TimeManagement_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/AssetRegistry_structs.hpp"
#include "SDK/AssetRegistry_classes.hpp"
#include "SDK/GameplayTags_classes.hpp"
#include "SDK/BP_TutorialManager_classes.hpp"
#include "SDK/MeshDescription_classes.hpp"
#include "SDK/ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/EyeTracker_structs.hpp"
#include "SDK/EyeTracker_classes.hpp"
#include "SDK/JsonUtilities_structs.hpp"
#include "SDK/JsonUtilities_classes.hpp"
#include "SDK/BP_Character_Enemy_Soldier_Rocket_classes.hpp"
#include "SDK/MovieSceneCapture_structs.hpp"
#include "SDK/MovieSceneCapture_classes.hpp"
#include "SDK/MRMesh_structs.hpp"
#include "SDK/MRMesh_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Farmer_Base_classes.hpp"
#include "SDK/MoviePlayer_structs.hpp"
#include "SDK/MoviePlayer_classes.hpp"
#include "SDK/BP_Character_Enemy_PsiMutant_Base_classes.hpp"
#include "SDK/BP_NPCAIController_Civilian_classes.hpp"
#include "SDK/Overlay_structs.hpp"
#include "SDK/Overlay_classes.hpp"
#include "SDK/BP_EA_SonicBoom_Muzzle_classes.hpp"
#include "SDK/ClothingSystemRuntime_structs.hpp"
#include "SDK/ClothingSystemRuntime_classes.hpp"
#include "SDK/FieldSystemCore_structs.hpp"
#include "SDK/FieldSystemCore_classes.hpp"
#include "SDK/FieldSystemEngine_classes.hpp"
#include "SDK/ChaosSolverEngine_classes.hpp"
#include "SDK/GeometryCollectionCore_structs.hpp"
#include "SDK/GeometryCollectionEngine_structs.hpp"
#include "SDK/GeometryCollectionSimulationCore_structs.hpp"
#include "SDK/GeometryCollectionEngine_classes.hpp"
#include "SDK/MediaUtils_structs.hpp"
#include "SDK/VectorVM_structs.hpp"
#include "SDK/BP_AlertResponseLevel_Military_classes.hpp"
#include "SDK/PropertyPath_structs.hpp"
#include "SDK/EngineMessages_structs.hpp"
#include "SDK/Serialization_structs.hpp"
#include "SDK/SessionMessages_structs.hpp"
#include "SDK/DmgTypeBP_Environmental_classes.hpp"
#include "SDK/BP_NavQueryFilter_TargetTracker_classes.hpp"
#include "SDK/BP_VirtualCrowdManager_classes.hpp"
#include "SDK/ENiagaraCoordinateSpace_structs.hpp"
#include "SDK/ENiagaraOrientationAxis_structs.hpp"
#include "SDK/ENiagaraBooleanLogicOps_structs.hpp"
#include "SDK/BP_Armquist_Rocket_AOE_classes.hpp"
#include "SDK/ENiagaraRandomnessMode_structs.hpp"
#include "SDK/ENiagaraExpansionMode_structs.hpp"
#include "SDK/BP_MenuFactory_classes.hpp"
#include "SDK/BP_InputDeviceTracker_classes.hpp"
#include "SDK/BP_DiscordRichPresence_classes.hpp"
#include "SDK/BP_GameInstance_classes.hpp"
#include "SDK/BP_AnimNotify_Step_classes.hpp"
#include "SDK/BPW_UI_Cursor_classes.hpp"
#include "SDK/BPW_LoadingSpinner_classes.hpp"
#include "SDK/BPW_LoadingSpinnerForFade_classes.hpp"
#include "SDK/BP_ChainReactionInterface_classes.hpp"
#include "SDK/BP_Component_ChainReaction_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOnScreen_Silhouette_classes.hpp"
#include "SDK/BP_Struct_Skylight_params_structs.hpp"
#include "SDK/BP_Enum_Color_structs.hpp"
#include "SDK/BP_Enum_TriggerShape_structs.hpp"
#include "SDK/BP_MissionTriggerZone_classes.hpp"
#include "SDK/Enum_MusicType_structs.hpp"
#include "SDK/BP_MusicSystem_Data_classes.hpp"
#include "SDK/Policeman_01_PostAnimBP_classes.hpp"
#include "SDK/Worker_overall_PostAnimBP_classes.hpp"
#include "SDK/Soldier_01_PostAnimBP_classes.hpp"
#include "SDK/EQContext_BBOverlappingCrypto_classes.hpp"
#include "SDK/Suburban_woman_01_PostAnimBP_classes.hpp"
#include "SDK/EQContext_AttackTargetsTarget_classes.hpp"
#include "SDK/EQContext_BBRelocateOrigin_classes.hpp"
#include "SDK/BBContext_BBAttackTargetActor_classes.hpp"
#include "SDK/EQContext_BBDefendTargetLocation_classes.hpp"
#include "SDK/EQContext_BBAttackTargetLocation_classes.hpp"
#include "SDK/BTTask_StopMovement_classes.hpp"
#include "SDK/BP_IsLowResActorDecorator_classes.hpp"
#include "SDK/BBContext_BBSuspiciousTargetActor_classes.hpp"
#include "SDK/BP_AnimNotify_Step_Right_classes.hpp"
#include "SDK/BP_AnimNotify_Step_Left_classes.hpp"
#include "SDK/ANIM_human_equip_weapon_Enum_structs.hpp"
#include "SDK/ANIM_HumanUnarmedRunsMaleEnum_structs.hpp"
#include "SDK/ANIM_HumanUnarmedWalksMaleEnum_structs.hpp"
#include "SDK/ANIM_HumanAlertRunsMaleEnum_structs.hpp"
#include "SDK/ANIM_GetHitEnum_structs.hpp"
#include "SDK/ANIM_HumanMoveDirection_structs.hpp"
#include "SDK/Farmer_01_PostAnimBP_classes.hpp"
#include "SDK/BPW_HumanoidOverheadDisplay_classes.hpp"
#include "SDK/Human_Male_AnimBP_classes.hpp"
#include "SDK/BP_NPCAIController_Enemy_classes.hpp"
#include "SDK/Struct_PhysMat_Step_structs.hpp"
#include "SDK/BP_EffectObject_Step_Crypto_classes.hpp"
#include "SDK/BP_EffectObject_Step_NPC_Male_Round_classes.hpp"
#include "SDK/BP_EffectObject_Step_NPC_Male_Pointy_classes.hpp"
#include "SDK/BPW_HealthIndicator_classes.hpp"
#include "SDK/Majestic_Agent_01_PostAnimBP_classes.hpp"
#include "SDK/BP_WidgetComponent_Alert_classes.hpp"
#include "SDK/BP_HealthWidgetComponent_classes.hpp"
#include "SDK/BP_Character_Enemy_Base_classes.hpp"
#include "SDK/BP_vehicleDestruction_afterburn_car_01_classes.hpp"
#include "SDK/BP_Character_Enemy_Majestic_Base_classes.hpp"
#include "SDK/BP_Character_Enemy_Soldier_Base_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOnScreen_Main_classes.hpp"
#include "SDK/BP_Character_Enemy_Cop_Base_classes.hpp"
#include "SDK/BP_vehicleDestruction_afterburn_car_GMinusMan_classes.hpp"
#include "SDK/BP_AlertResponseLevel_NoResponse_classes.hpp"
#include "SDK/BP_AlertResponseLevel_Civilian_classes.hpp"
#include "SDK/BP_AlertResponseLevel_Agent_classes.hpp"
#include "SDK/BP_AnimSharingProcessorNPCLowRes_classes.hpp"
#include "SDK/BP_AnimSharingTransitionHuman_classes.hpp"
#include "SDK/BP_AchievementActor_classes.hpp"
#include "SDK/BP_R250_HologramIndicator_Explosive_classes.hpp"
#include "SDK/BP_Grenade_PowerSuit_classes.hpp"
#include "SDK/BP_HologramIndicator_classes.hpp"
#include "SDK/BP_DamageType_Fire_classes.hpp"
#include "SDK/BP_StompJumpImpact_classes.hpp"
#include "SDK/Pickup_Brain_AnimBP_classes.hpp"
#include "SDK/BP_R800_GrenadePowerSuit_Indicator_classes.hpp"
#include "SDK/BP_DamageType_Weapon_EnemyBullet_classes.hpp"
#include "SDK/BP_ProjectileBullet_classes.hpp"
#include "SDK/BP_DamageType_Weapon_EnemyMindLinkPulse_classes.hpp"
#include "SDK/BP_DamageType_QuantumDeconstructor_DirectHit_classes.hpp"
#include "SDK/BP_ExplosiveRocket_classes.hpp"
#include "SDK/Struct_PhysMaterials_structs.hpp"
#include "SDK/BP_PSI_Link_Base2_In_and_Out_classes.hpp"
#include "SDK/BP_PSI_Link_Base_classes.hpp"
#include "SDK/BP_Transmogrify_Singularity_classes.hpp"
#include "SDK/BP_vehicleDestruction_parent_afterburn_classes.hpp"
#include "SDK/BP_vehicleDestruction_parent_explosion_classes.hpp"
#include "SDK/BP_LazerBeam_classes.hpp"
#include "SDK/BP_Skate_Crypto_01_classes.hpp"
#include "SDK/BP_vehicleDestruction_explosion_truckCircus_classes.hpp"
#include "SDK/BP_vehicleDestruction_explosion_milkTruck_classes.hpp"
#include "SDK/BP_vehicleDestruction_explosion_militaryTruck_classes.hpp"
#include "SDK/BP_vehicleDestruction_explosion_militaryTank_classes.hpp"
#include "SDK/BP_vehicleDestruction_explosion_car_01_classes.hpp"
#include "SDK/BP_vehicleDestruction_afterburn_car_police_classes.hpp"
#include "SDK/BP_vehicleDestruction_afterburn_car_04_classes.hpp"
#include "SDK/BP_vehicleDestruction_afterburn_car_03_classes.hpp"
#include "SDK/BP_vehicleDestruction_afterburn_car_02_classes.hpp"
#include "SDK/BP_Transmogrify_FX_classes.hpp"
#include "SDK/BP_PSYPulse_Link_classes.hpp"
#include "SDK/BP_AnalProbe_Link_classes.hpp"
#include "SDK/BP_bulletImpact_classes.hpp"
#include "SDK/BP_BurningGroundActorComponent_classes.hpp"
#include "SDK/BP_ProjectileQuantumDecontructor_classes.hpp"
#include "SDK/BP_ProjectileMindLinkPulseField_classes.hpp"
#include "SDK/BP_ProjectileIonDetonator_classes.hpp"
#include "SDK/BP_ProjectileDisintegrationRay_Smaller_classes.hpp"
#include "SDK/BP_ProjectileDisintegrationRay_classes.hpp"
#include "SDK/BP_ProjectileBullet_Shotgun_classes.hpp"
#include "SDK/BP_ProjectileBullet_Rifle_classes.hpp"
#include "SDK/BP_ProjectileBullet_Pistol_classes.hpp"
#include "SDK/BP_ProjectileAnalProbe_classes.hpp"
#include "SDK/BP_Grenade_classes.hpp"
#include "SDK/BP_Armquist_AOE_Stomp_classes.hpp"
#include "SDK/BP_Armquist_AOE_Leap_classes.hpp"
#include "SDK/BP_ProjectileBullet_Tank_classes.hpp"
#include "SDK/BP_ProjectileBullet_PowerSuit_classes.hpp"
#include "SDK/BP_ProjectileBullet_GunTurret_classes.hpp"
#include "SDK/BP_ProjectileBullet_ArmquistMachineGun_classes.hpp"
#include "SDK/BP_Projectile_SAM_classes.hpp"
#include "SDK/BP_Projectile_BossAOE_classes.hpp"
#include "SDK/BP_IonDetonator_Burn_classes.hpp"
#include "SDK/BP_Disintegrator_Burn_classes.hpp"
#include "SDK/CameraShake_impactsmall_classes.hpp"
#include "SDK/BP_BurningGround_DitheredMeshTransition_classes.hpp"
#include "SDK/BP_BurningGround_classes.hpp"
#include "SDK/BP_DamageType_PK_Kill_classes.hpp"
#include "SDK/BP_Foliage_Interactive_Burnable_classes.hpp"
#include "SDK/BP_ActorComponent_NPCBehaviorVO_classes.hpp"
#include "SDK/BP_PK_Object_Base_classes.hpp"
#include "SDK/BP_MentalAbility_Psycokinesis_classes.hpp"
#include "SDK/BP_PK_Bubble_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Base_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Vandalize_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Rampage_Kill_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Rampage_Data_Triple_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Rampage_Data_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Race_FreeDash_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Race_DataContainer_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Pickup_DNAProbe_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Pickup_DNABrain_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Optional_BonusKill_classes.hpp"
#include "SDK/BP_DamageType_Explosion_Missile_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Deliver_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Deliver_Double_classes.hpp"
#include "SDK/BP_OverheadWidgetSpawner_Pickup_Ammo_classes.hpp"
#include "SDK/BP_ItemPickup_Base_classes.hpp"
#include "SDK/BP_ItemDNABrain_classes.hpp"
#include "SDK/BP_ItemMissionBriefcase_classes.hpp"
#include "SDK/BP_ItemSaucerDeconstructorAmmo_classes.hpp"
#include "SDK/BP_ItemSaucerSonicBoomAmmo_classes.hpp"
#include "SDK/BP_ActorComponent_RadarObject_Default_classes.hpp"
#include "SDK/BP_Component_Magnet_classes.hpp"
#include "SDK/BP_ItemSaucerSonicBoomAmmo_Large_classes.hpp"
#include "SDK/BP_ItemSaucerDeconstructorAmmo_Large_classes.hpp"
#include "SDK/BPW_ScoreOverheadDisplay_classes.hpp"
#include "SDK/BP_ItemIonDetonatorAmmo_classes.hpp"
#include "SDK/BP_ItemDisintegratorRayAmmo_classes.hpp"
#include "SDK/BP_SpawnPool_classes.hpp"
#include "SDK/BP_DamageType_SonicBoom_classes.hpp"
#include "SDK/BP_DamageType_QuantumDeconstructor_classes.hpp"
#include "SDK/BP_DamageType_DeathRay_classes.hpp"
#include "SDK/BP_DamageType_ZapMinusoMinusmatic_classes.hpp"
#include "SDK/BP_DamageType_IonDetonator_classes.hpp"
#include "SDK/BP_DamageType_DisintegratorRay_classes.hpp"
#include "SDK/BP_DamageType_AnalProbe_classes.hpp"
#include "SDK/BP_DamageType_PK_classes.hpp"
#include "SDK/ANIM_UFOWeaponEnum_structs.hpp"
#include "SDK/BP_ForceField_Base_classes.hpp"
#include "SDK/BP_ForceField_Crypto_classes.hpp"
#include "SDK/BP_ForceField_Saucer_classes.hpp"
#include "SDK/BP_AbductoBeam_effectActor_classes.hpp"
#include "SDK/BP_UFO_Aperture_Beam_classes.hpp"
#include "SDK/Crypo_PostProcess_AnimBP_classes.hpp"
#include "SDK/BPW_MentalAbilityAutoTargetMarker_classes.hpp"
#include "SDK/BP_DamageType_Environment_Smash_classes.hpp"
#include "SDK/FunctionLibrary_Audio_classes.hpp"
#include "SDK/UFO_AnimBP_classes.hpp"
#include "SDK/Crypto_Pilot_AnimBP_classes.hpp"
#include "SDK/BP_RTB_Decorator_InputAction_Saucer_FocusMode_classes.hpp"
#include "SDK/BP_RTB_Decorator_InputAction_Crypto_FocusMode_classes.hpp"
#include "SDK/BPW_OpportunityOverheadDisplay_classes.hpp"
#include "SDK/BP_OVerheadOpportunityWidgetComponent_classes.hpp"
#include "SDK/BP_SceneComponent_HighlightableSceneObject_classes.hpp"
#include "SDK/BP_ActorComponent_RadarObject_NPC_classes.hpp"
#include "SDK/BP_SceneComponent_OOBNotifier_classes.hpp"
#include "SDK/BP_PlayerUFO_classes.hpp"
#include "SDK/BP_RTB_Decorator_Mission_Icons_classes.hpp"
#include "SDK/BP_VirtualCrowd_Humanoid_classes.hpp"
#include "SDK/BP_Character_Enemy_Majestic_AlienTechRifle_classes.hpp"
#include "SDK/BP_DamageType_Explosion_classes.hpp"
#include "SDK/BP_DamageType_Explosion_Grenade_classes.hpp"
#include "SDK/BP_OverheadManager_classes.hpp"
#include "SDK/BP_ObjectiveMarker_MapIcon_Main_Number1_classes.hpp"
#include "SDK/BP_MothershipTransitionManager_classes.hpp"
#include "SDK/BP_UFOManager_classes.hpp"
#include "SDK/BP_StatisticManager_classes.hpp"
#include "SDK/BP_SpawnPoolManager_classes.hpp"
#include "SDK/BP_DamageType_Environment_Water_classes.hpp"
#include "SDK/BP_TransmogrifyLootManager_classes.hpp"
#include "SDK/BP_LockOnManager_classes.hpp"
#include "SDK/BP_InputRebindingSystem_classes.hpp"
#include "SDK/BP_DynamicStaticObjectManager_classes.hpp"
#include "SDK/BP_AchievementManager_classes.hpp"
#include "SDK/BP_DamageType_FallDamage_classes.hpp"
#include "SDK/BP_AlertSystem_classes.hpp"
#include "SDK/BP_AimAssistManager_classes.hpp"
#include "SDK/BP_TrafficCrowdSystem_classes.hpp"
#include "SDK/BP_MusicSystem_classes.hpp"
#include "SDK/BP_MissionTriggerZone_Indoor_classes.hpp"
#include "SDK/BP_Tool_Skydome_classes.hpp"
#include "SDK/BP_HUD_Mothership_classes.hpp"
#include "SDK/BP_HUDVisibilityStateManager_classes.hpp"
#include "SDK/BP_Component_PortalAssignator_classes.hpp"
#include "SDK/BP_GameState_classes.hpp"
#include "SDK/BP_ActorComponent_ChainReactionManager_classes.hpp"
#include "SDK/BP_PlayerState_classes.hpp"
#include "SDK/BP_GameMode_Menus_classes.hpp"
#include "SDK/MainMenu_Main_classes.hpp"
#include "SDK/BP_ActorComponent_ObjectiveMarkerScreen_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Beam_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Beam_F2S_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOffscreen_Side_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Beam_F2S_SideQuest_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Beam_F2S_Thin_classes.hpp"
#include "SDK/BP_ActorComponent_RadarObject_QuestMarker_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Beam_MapIconOnly_classes.hpp"
#include "SDK/BP_ObjectiveMarker_LocateArea_classes.hpp"
#include "SDK/BP_ObjectiveMarker_MapIcon_Main_classes.hpp"
#include "SDK/BP_ObjectiveMarker_MapIcon_Main_Number2_classes.hpp"
#include "SDK/BP_ObjectiveMarker_MapIcon_Side_classes.hpp"
#include "SDK/BP_ObjectiveMarker_RestrictedArea_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Screen_Locate_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Screen_Main_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Screen_Main_Number1_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Screen_Main_Number2_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Screen_Side_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Beam_F2S_Silhouette_classes.hpp"
#include "SDK/BP_ObjectiveMarker_Screen_Silhouette_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_Missile_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOffscreen_Locate_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOffscreen_Main_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOffscreen_Main_Number1_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOffscreen_Main_Number2_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOnScreen_Locate_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number1_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOnScreen_Main_Number2_classes.hpp"
#include "SDK/BPW_SceneObjectHighlighter_QuestOnScreen_Side_classes.hpp"
#include "SDK/EQContext_AimingAtLocation_classes.hpp"
#include "SDK/BP_NavQueryFilter_EnemyBig_classes.hpp"
#include "SDK/ANIM_AccelerationDirection_Enum_structs.hpp"
#include "SDK/Anim_Power_Suit_Weapon_Enum_structs.hpp"
#include "SDK/BP_Weapon_PowerSuit_ArmGrenades_classes.hpp"
#include "SDK/BP_Weapon_PowerSuit_ArmCannon_classes.hpp"
#include "SDK/BP_EffectObject_Step_NPC_PowerSuit_classes.hpp"
#include "SDK/Army_Power_suit_AnimBP_classes.hpp"
#include "SDK/BP_NPCAIController_PowersuitSoldier_classes.hpp"
#include "SDK/Psi_Mutant_PostAnimBP_classes.hpp"
#include "SDK/Nurse_PostAnimBP_classes.hpp"
#include "SDK/BP_RTB_Decorator_InputAction_UI_classes.hpp"
#include "SDK/Farmer_wife_02_PostAnimBP_classes.hpp"
#include "SDK/Rural_woman_crazy_PostAnimBP_classes.hpp"
#include "SDK/Suburban_woman_02_PostAnimBP_classes.hpp"
#include "SDK/Swimsuit_Woman_01_PostAnimBP_classes.hpp"
#include "SDK/ANIM_HumanUnarmedWalksFemaleEnum_structs.hpp"
#include "SDK/ANIM_HumanAlertRunsFemaleEnum_structs.hpp"
#include "SDK/BP_EffectObject_Step_NPC_Female_Heels_classes.hpp"
#include "SDK/Farmer_wife_01_PostAnimBP_classes.hpp"
#include "SDK/Urban_woman_01_PostAnimBP_classes.hpp"
#include "SDK/Human_Female_AnimBP_classes.hpp"
#include "SDK/Funfair_worker_01_PostAnimBP_classes.hpp"
#include "SDK/Senator_01_PostAnimBP_classes.hpp"
#include "SDK/Scientist_00_PostAnimBP_classes.hpp"
#include "SDK/Suburbanman_02_PostAnimBP_classes.hpp"
#include "SDK/Suburbanman_01_PostAnimBP_classes.hpp"
#include "SDK/Swimsuit_Man_01_PostAnimBP_classes.hpp"
#include "SDK/Mouthy_Youth_PostAnimBP_classes.hpp"
#include "SDK/Urban_Man_Crazy_PostAnimBP_classes.hpp"
#include "SDK/Urban_Man_01_PostAnimBP_classes.hpp"
#include "SDK/Orange_worker_PostAnimBP_classes.hpp"
#include "SDK/Tinfoil_Hat_man_PostAnimBP_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Base_classes.hpp"
#include "SDK/Majestic_Agent_02_PostAnimBP_classes.hpp"
#include "SDK/BP_ActorComponent_RadarObject_Vehicle_classes.hpp"
#include "SDK/BP_CryptoWeapnHitEffectsComponent_classes.hpp"
#include "SDK/BP_Character_Enemy_Soldier_Sergeant_classes.hpp"
#include "SDK/BP_Character_Enemy_Majestic_Tommy_classes.hpp"
#include "SDK/BP_Character_Enemy_Cop_Sheriff_classes.hpp"
#include "SDK/BP_Character_Civilian_Crackpot_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Worker_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Worker_Majestic_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Urban_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Urban_Crazy_CC_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Swimsuit_01_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Suburban_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Suburban_Young_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Suburban_Bathrobe_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Senator_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Scientist_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Scientist_Lab_classes.hpp"
#include "SDK/BP_Character_Civilian_Male_Rural_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Urban_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Swimsuit_01_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_SubUrban_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Suburban_Bathrobe_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Rural_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Rural_Crazy_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Nurse_Base_classes.hpp"
#include "SDK/BP_Character_Civilian_Female_Farmer_Base_classes.hpp"
#include "SDK/BP_Character_Enemy_Farmer_Base_classes.hpp"
#include "SDK/BP_Character_Enemy_PowerSuit_Base_classes.hpp"
#include "SDK/BP_RTB_Decorator_THP_Icons_classes.hpp"
#include "SDK/BPW_TutorialPage_2ndIteration_classes.hpp"
#include "SDK/BPW_InputHintBlock_classes.hpp"
#include "SDK/BPW_TutorialInputAction_classes.hpp"
#include "SDK/BP_GameFlowState_GamestartSequence_classes.hpp"
#include "SDK/BP_GameFlowState_IIS_classes.hpp"
#include "SDK/BPW_IIS_classes.hpp"
*/