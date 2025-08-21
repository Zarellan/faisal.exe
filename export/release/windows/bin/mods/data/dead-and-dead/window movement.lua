defaultWindowPos = {128,64};



function onCreate()
	setPropertyFromClass("openfl.Lib", "application.window.x", defaultWindowPos[1] + 0)
	setPropertyFromClass("openfl.Lib", "application.window.y", defaultWindowPos[2] + 0)
	setPropertyFromClass("FlxG", "fullscreen", false)
end


function onStepHit()
	if curStep == 20 then
		setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 10)
		setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2])
		setPropertyFromClass("FlxG", "fullscreen", false)
	end
	if curStep == 21 then
	setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1])
		setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2])
		setPropertyFromClass("FlxG", "fullscreen", false)
	end
		if curStep == 40 then
			setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 0)
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 10)
			setPropertyFromClass("FlxG", "fullscreen", false)
		end
		if curStep == 41 then
		setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1])
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2])
			setPropertyFromClass("FlxG", "fullscreen", false)
		end
		if curStep == 81 then
			setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 5)
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 2)
			setPropertyFromClass("FlxG", "fullscreen", false)
		end
		if curStep == 82 then
		setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1])
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2])
			setPropertyFromClass("FlxG", "fullscreen", false)
		end
end	
