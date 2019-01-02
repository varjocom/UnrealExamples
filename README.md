# VarjoUnrealExamples
Unreal example projects. Example folder(s) explained under:

-----------------------------------------------------------------------------------------------------

## VarjoSample

Using Varjo Eye Tracking API, device buttons and Vive controllers with Unreal Engine 4.21 and VarjoHMD.
Follow the next steps to get example scene and features running with Varjo HMD.
###### Prerequisites:

- Varjo environment installed and Varjo Unreal Engine 4.21 compiled from separate repository.

###### Install Steam

- Download and install Steam from https://store.steampowered.com/about/ .

###### Pair the Vive controllers or Valve Knuckles with your PC

- Open Services application. To find it click Start and type "Services".

- Find 'Varjo Process Server' from the list, right click it and select Stop.

- Start SteamVR by right clicking the Steam tray icon and selecting 'SteamVR'.

- Right click the SteamVR tray icon and select 'Devices' -> 'Pair Controller' and follow
  the instructions.

- From the tray, right click SteamVR icon and select 'Quit'.

- Open Services application, find 'Varjo Process Server' from the list, right click it and
  select Start.

###### Get started with the example project

- Right click the VarjoSample.uproject file in VarjoUnrealExamples\VarjoSample, select
  "Switch Unreal Engine version..." and select the engine folder compiled by you from the list.

- Open the project by double clicking the .uproject file.

- Press 'VR Preview' from the play menu.

- Now you should see the scene in Varjo HMD.

- When controllers are on and paired they should be visible, so that they are on the table when
  they are not tracking and in their correct positions when they are tracking.

- The battery level status of a controller is shown in an icon on the controller surface.

- Valve Knuckles are also shown as Vive controllers in the scene. Valve Knuckles grip sensors don't
  work yet.

###### Controller and eye tracking interactions

- Instructions on how to use controllers and eye tracking to interact with the scene can be found 
  from the scene floating in the air.
	
- The blueprint that contains all of the controller logic can be found from  next file:
  VarjoUnrealExamples\VarjoSample\Content\ControllerSetup\VRPawn.uasset.
	
- The blueprint which handles the eye tracking interactions can be found from next file:
  VarjoUnrealExamples\VarjoSample\Content\VarjoContent\Blueprints\ActorSelectionBP.uasset.

- The Level Blueprint of the Minimal_Default level handles device button events and eye tracking
  calibration requests. You can open the Level Blueprint from editor from:
  Blueprints -> Open Level Blueprint
	
-----------------------------------------------------------------------------------------------------

## HOWTO_CreatePawn 

Simple example howto create pawn for headset that can be moved and rotated with keys.
