# Spell System
## About
The motivation behind this project is to learn how to implement data-driven UI within the Unreal Engine.

A couple of objectives:

* UI displays two pieces of data:
    * Top left: Spell Modifiers (Fast, Large, Slow, etc)
    * Top right: Spells (Fire, Water, Earth, etc)
* Multiple Characters can have different variations of defined sets of Modifiers and Spells. Thus this UI should refresh based on the currently selected player character.
* The UI can extend when a key is pressed displaying a selection of Modifiers/Spells in the Left/Right section of the screen respectively.
* Once extended the user can cycle through the selection choosing their Modifier or Spell.
* Upon contraction the Modifier/Spell in a specific location around a point is chosen as the selected node for that UI element.

## TODO
Reorganize the project so that it uses event dispatchers for UI calls. This way if the UI is ever destroyed or changed playercontroller will not be affected. 

Implement selection of the modifier nodes. Needs to rotate around a point and repeat itself.

ZOrder based on selected node.

## Samples

Current Extension
![Test](./Markdown/LeftExtension.gif)