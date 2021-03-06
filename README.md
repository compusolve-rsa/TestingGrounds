<p align="center">
  This text available in different languages.
</p>
<p align="center">
  <span><a href="https://github.com/pvlunegov/TestingGrounds/blob/master/README.md">English</a></span> |
  <a href="https://github.com/pvlunegov/TestingGrounds/blob/master/README.RU.md">На русском Языке</a>
</p>

# TestingGrounds
FPS Game made under Unreal 4 with C++ &amp; Blueprints

This project is based on the course ["Unreal Engine Developer Course - Section 5".](Https://github.com/UnrealCourse/05_TestingGrounds)

[The original course](https://github.com/UnrealCourse/05_TestingGrounds) was developed on Unreal version 4.12 - 4.13.
This project is based on Unreal 4.21

## Some screenshots from latest commits:

| Some screnshots | Some screnshots |
| --- | --- |
| `Guards chasing and firing at player Guards patrolling and walking their route. When Guards see player (player close to) or hear player (Player jumps or firing) they chasing him, firing in run. When they close to player, they stoping and firing. Guards firing 3 burst fire in random duration. ` ![guards chasing and firing at player](https://user-images.githubusercontent.com/28482025/51083450-4c793800-173c-11e9-8735-79fe88a0bc37.png) | `Guards may die (player shoots them) falling to the ground holding weapons in their hands` ![guards may die falling to the ground in arms](https://user-images.githubusercontent.com/28482025/51083697-f908e900-173f-11e9-92e5-60413846e116.png) |
| `Player dying falls to the ground with a weapon in hand. The third-person mesh is lying on the ground. First-person mesh hangs above ground. So far, there has not been worked out a method of changing from a first-person view to a third-person view. Meshes themselves work correctly with all the animation. As you noticed, the Guardians have meshes from both the first person and the third person. Moreover, the player and the guard have same Blueprint.`![player dying falls to the ground with a weapon in hand](https://user-images.githubusercontent.com/28482025/51084132-da5a2080-1746-11e9-9a37-6e42fc44eae4.png) | `Meshes (Trees, barrels, sacks ant etc.) spawning at random location in a Tile. Tile is place fixed sizes with walls. Game spawning infinite amount of Tiles. Player can move through this Tiles.` ![spawning meshes and debug spheres png](https://user-images.githubusercontent.com/28482025/51083466-aaa61b00-173c-11e9-884c-4bf12a8a891c.png) |
| `Green transparent barrier dividing Tiles. Player can move through it to next Tile. When moving to next Tile, Game generating forward following Tile with random generating meshes at correct locations do not intersect each other.` ![green barrier dividing tiles](https://user-images.githubusercontent.com/28482025/51083723-4be2a080-1740-11e9-8eaa-1e6a349f1592.png) | `Red barrier dividing Tiles. Player can not move through it to the past Tile. Player can move only to forward Tile.` ![red barrier dividing tiles player can not move through it](https://user-images.githubusercontent.com/28482025/51083728-759bc780-1740-11e9-9152-021def0f9af3.png) |

## Comments for Commits:

### 1 Testing Grounds Introduction
This is first commit, I make new C++ project in Unreal Editor 4.21

### 2 Testing Grounds GDD
Added FPS content to repository
Using Git LFS (Large File Support)

### 3 Marketing & Markdown
Deleted some editor settings

### 5  Added some staff to level map. 
Added(ramp, staircase, 2nd floor) to main level map

### 6  Added Nav Mesh Volume and Third Person Character to main level map. 
Added Nav Mesh Volume
Added Third Person Character to project and placed it to level map.

### 7 Added Behavior Tree and BlackBoard Data

### 9 Added Blueprint functions to sequentially move along an array of patrol points defined on the map to each platoon soldier.
Now many platoon soldiers run endlessly around the map, each moving from point to point, each with its own set of points.

### TG 10. Blueprint logic has been moved to C ++. 
C ++ classes and territory patrol logic have been created. 
Now Guards Patrolling territory of level map, their logic controlled by C++

### TG 11. C ++ logic has been moved from the inherited classes to the component system. 
At the moment, every guy has a component class that is responsible for moving the guy.

### TG 12. Added Instanced material for 2 Guards. 
Each guard now have different colors.

### TG 13. Making AI_sense for patrolling Guards. 
Now they see each other and player. They reporting in Console log whoom they see and what sence they used (seing, hearing and etc).

### TG 14. Guards hearing player jumps and reporting it to Console and to screen. 
Hearing done with Blueprints.

### TG 15. Added Free Animation Starter Pack from Unreal MarketPlace.

### TG 16. Added animation Blueprint from starter pack to our Guards. 
Now they moving along with rifles in hands.
Unfortunately, I have not yet managed to display the guns in the correct position in the hands of the mesh. In addition, the guns are not displayed during the game (during the animation). This will be fixed later.

### TG 17. Changed Guards BluePrint Class to simple class from animation pack. 
Now Guards Blueprints classes have more simplicity and university.

### TG 18. Refactoring file folder content system. 
Now folders organized much better and nice may. Deleted trash content.

### TG 19. Refactoring C++ class source structure.
Now we have folder "Player", where we moved C++ class with dependencies.

### TG 20. More Refactoring C++ class source structure.
In folder "Source", now we have folders, which reflect the structure of the project.

### TG 21. Added Gun to arms of our Guards.
Now they run, crouch and carry guns in arms.
Added socked to skeleton of Npc blueprint, where gun mesh attached. Also removed trash staff.

### TG 22. Added animation BlenSpace "Walking_Ironsight" for our Guards.
Now they are walking along the route aiming their weapons along the course.

### TG 23. Added AimOffset to do smoth animation when Guard aiming up and down with gun.
This animation offset presented only in Editor. In future I will use it for Guards animations.

### TG 24. Added aiming behavior to our Guards.
Now they moving across their patrol route, aiming at starting point of player.

### TG 24.1. Now Guards aiming at player in RealTime!
When player changing its location, Guards aiming their Guns at player and walking along their patrol route.
Changed Blueprints of AI to do this.

### TG 25. Now Guards Chasing Player when they see him.
When they have no player in their sense, they patrolling route.
This is simple 2 branch behavior for our Guards.

### TG 26. Now Guards, when they chasing Player and lost sight of player, they move to last known location of player.
If they don't see player, they moving along their patrolling route.

### TG 27. Fixed bug when 2 Guards chased each other and don't do anything after that.
Now Guards ignore each other, patrolling route and chaising player.

### TG 28. Created a Gun C++ class. A Gun instance now created at begin play in hands of a player.
In future I will use fire function of Gun in player hands.

### TG 28.1. Now our player can fire projectile from gun in hands. Fire animations, sound, projectile physics also included.
Gun has its own C++ class with functions. Class FirstPersonCharacter calls Fire function from Gun class.

### TG 29. Moved all large file assets in Static folder.
This will help to do faster commits with Git LFS system.

### TG 30. Updated .gitattributes to track only static sub folder and all it content.
Now git LFS give only files in Static folder. All other staff in other folders will give Git commits.
Remind, in future, all big files I will take to Static folder.

### TG 31. Moved some LFS assets to Dynamic folder from Static folder.
This assets will frequently changing in future. LFS will not track this assets. This assets will move to Git commits directly.

### TG 32. Corrected Inverse Kinematics of our Player Blueprint.
Now Player hands hold arms properly.

### TG 33. Corrected bug with aiming of Guards.
Now they not aiming their guns when patrolling and not percepting enemy. When they percept enemy (see or hear noise), they chase them with aiming Guns on it. When they lost perception, they moving to last seen location and after seconds they run to patrolling duty.

### TG 34. Now Guards using Shooting animation when chasing player.
Added blend poses in animation graph. Under the terms of the character can run, go aiming, go shooting, run, shooting from the hip. And all this thanks ?? blend poses.

### TG 35. Added damage to health of Guards and death animation to them.
Now player can shoot at Guards and can damage them to death.
Also refactor animation Blueprint functions.

### TG 36. Now player and Guards have one Blueprint with First and Fird Person Camera, firing and death animations.
Player can Die and took damage, same as Guards.

### TG 37. Proceduraly spawning Terrain in the GameMode for loop.
Now at the start of the game we spawning terrain in 10 tiles.

### TG 38. Now when entering the next tile, the previous tile is cut off by the red barrier. 
Ahead, the next tile is separated from the current tile by a green barrier.

### TG 39. Now we have Garbage collector, that delete old Tiles, that we can't move to. In ahead, generating new 2 Tiles, that we can see and move to.
So we have an endless runner with generating Tiles, Garbage collector of old Tiles.

### TG 40. Merging Our TP and FP Files in project Structure. Repaired bug shooting weapons.
Now shooting take projectile in normal direction, causes right damage to Guards, also accompanying messages of projectile hit events are displayed.

### TG 41. Maked Dynamic NavMesh volume. Now Guards moving along their patrol route. 
Earlier they can't move because our static Navmesh can't work with dynamic Tile.

### TG 42. Redid AI Blueprints to method called SUDO code.
Now they much simpler to read at high level of abstraction.

### TG 43. Exclude *_BuildData.uasset from Git, reinstating the gun child actor.
This is do for physical Gun Architector instead of component architecture.
Also renamed some assets to do [UE4 Style Guide](https://github.com/Allar/ue4-style-guide)

### TG 44. Converting a Character BP to C++
Now we have C++ class of Character with fire function, calling Fire function of Gun C++ class

### TG 45. Redoing Architecture of calling Fire function.
Earlier fire function called from animation event. Now fire function called from method in C++ Character class.
Now our Guards can do rapid, very rapid firing!

### TG 46. Our Guards now make Burst firing 3 bullets in rapid random time sequence.

### TG 47. Reattaching the Gun to Blueprint skeletal mesh socket with C++ class Manneguin.
Now our Guards holding a weapon in their hands with proper animation at walking, firing and dying!
Our player hold weapon in hands when firing, dying, lying on the ground from the third person

### TG 48. Added Free Assets from Unreal MarketPlace for meshes of ground, flora, rocks, barrels, cans, bags and other industrial items.
Also added some staff to main level for testing purposes.

### TG 49. Spawning Bluepint meshes in the Tile at random locations. 
Now we have nice random locations!

### TG 50. Spawning Debug Trace Channel Spheres to test debug collisions of meshes.
Now we see in spawning Tiles debug spheres. This spheres we wil use later for more intelegent procedural spawning objects.

### TG 51. Fixed bugs, caused by missing some assets in the Blueprint assembly.
Unreal Editor crashes when starting a game. Now all ok, bugs fixed, starting game works correctly.

### TG 52.1. Changed ReadMe in English, added ReadMe in Russian.
Fixed issues with merging changes to ReadMe files in Git and local changes.

### TG 53. Randomising Rotation & Scale of generated assets.
Now assets generate and place in a Tile in random places with random rotation and Scale (rocks). Also added much more generating grass for more beatiful terrain.

### TG 54. Flyweight Pattern for Grass. Now we have beatiful grass carpet is like a solid meadow grass covering the ground. Swaying in the wind.
This is done by new C++ class Grass added as component to Tile Blueprint. In this class we have function at begin play that generate Hierarchical static mesh instances of grass in great amount. This gives a powerful performance boost to the application and a beautiful view.