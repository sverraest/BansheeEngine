//********************************** Banshee Engine (www.banshee3d.com) **************************************************//
//**************** Copyright (c) 2016 Marko Pintera (marko.pintera@gmail.com). All rights reserved. **********************//
#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"

namespace BansheeEngine
{
	/** @addtogroup ScriptInteropEngine
	 *  @{
	 */

	/**	Interop class between C++ & CLR for GUIToggleGroup. */
	class BS_SCR_BE_EXPORT ScriptGUIToggleGroup : public ScriptObject<ScriptGUIToggleGroup>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "GUIToggleGroup")

		/**	Returns the native toggle group that this object wraps. */
		std::shared_ptr<GUIToggleGroup> getInternalValue() const { return mToggleGroup; }

	private:
		ScriptGUIToggleGroup(MonoObject* instance, const std::shared_ptr<GUIToggleGroup>& toggleGroup);

		std::shared_ptr<GUIToggleGroup> mToggleGroup;

		/************************************************************************/
		/* 								CLR HOOKS						   		*/
		/************************************************************************/
		static void internal_createInstance(MonoObject* instance, bool allowAllOff);
	};

	/** @} */
}