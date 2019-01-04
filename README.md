# TestingGrounds
FPS Game made under Unreal 4 with C++ &amp; Blueprints

This project is based on the course ["Unreal Engine Developer Course - Section 5".](Https://github.com/UnrealCourse/05_TestingGrounds)

[The original course](https://github.com/UnrealCourse/05_TestingGrounds) was developed on Unreal version 4.12 - 4.13.
This project is based on Unreal 4.21

## In This Section:

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

### 8 Added 2 patrol points and patrolling behavior (Blueprints).
Third person character now patrolling (running) between 2 points!

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

### TG 24. Now Guards aiming at player in RealTime!
When player changing its location, Guards aiming their Guns at player and walking along their patrol route.
Changed Blueprints of AI to do this.

### TG 25. Now Guards Chasing Player when they see him.
When they have no player in their sense, they patrolling route.
This is simple 2 branch behavior for our Guards.

### TG 26. Now Guards, when they chasing Player and lost sight of player, they move to last known location of player.
If they don't see player, they moving along their patrolling route.