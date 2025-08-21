defaultWindowPos = {128,64};



function onCreate()
	setPropertyFromClass("openfl.Lib", "application.window.x", defaultWindowPos[1] + 0)
	setPropertyFromClass("openfl.Lib", "application.window.y", defaultWindowPos[2] + 0)
	setPropertyFromClass("FlxG", "fullscreen", false)
end

function onStepHit()
	if curStep == 544 then
     function onUpdatePost()
		setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 64 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 1) * math.pi))
		setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 64 * math.sin(((getSongPosition() / 1000)*(bpm/60) * 1) * math.pi))
		setPropertyFromClass("FlxG", "fullscreen", false)
	end
function onStepHit()
	if curStep == 784 then
		function onUpdatePost()
				setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 0)
				setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 0)
				setPropertyFromClass("FlxG", "fullscreen", false)
	end
function onStepHit()
		if curStep == 800 then
			function onUpdatePost()
			setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.2) * math.pi))
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.3) * math.pi))
			setPropertyFromClass("FlxG", "fullscreen", false)
		end
		function onStepHit()
			if curStep == 848 then
				function onUpdatePost()
				setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 100)
				setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 50)
				setPropertyFromClass("FlxG", "fullscreen", false)
			end
			function onStepHit()
				if curStep == 854 then
					function onUpdatePost()
					setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 50)
					setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ -100)
					setPropertyFromClass("FlxG", "fullscreen", false)
				end
		function onStepHit()
		if curStep == 860 then
			function onUpdatePost()
			setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ -50)
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 100)
			setPropertyFromClass("FlxG", "fullscreen", false)
					end
			function onStepHit()
			if curStep == 864 then
			function onUpdatePost()
			setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.2) * math.pi))
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.3) * math.pi))
			setPropertyFromClass("FlxG", "fullscreen", false)
					end
			function onStepHit()
			if curStep == 928 then
			function onUpdatePost()
			setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.3) * math.pi))
			setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.2) * math.pi))
			setPropertyFromClass("FlxG", "fullscreen", false)
			end
			function onStepHit()
				if curStep == 992 then
				function onUpdatePost()
				setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.3) * math.pi))
				setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2]+ 64 * math.sin(((getSongPosition() / 500)*(bpm/60) * 0.3) * math.pi))
				setPropertyFromClass("FlxG", "fullscreen", false)
				end
				function onStepHit()
					if curStep == 1056 then
					function onUpdatePost()
					setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1])
					setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2])
					setPropertyFromClass("FlxG", "fullscreen", false)
					end
					function onStepHit()
						if curStep == 1072 then
						function onUpdatePost()
						setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 0.7) * math.pi))
						setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
						setPropertyFromClass("FlxG", "fullscreen", false)
						end
						function onStepHit()
						if curStep == 1152 then
							function onUpdatePost()
							setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 1.5) * math.pi))
							setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
							setPropertyFromClass("FlxG", "fullscreen", false)
							end
							function onStepHit()
							if curStep == 1156 then
								function onUpdatePost()
								setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 2.3) * math.pi))
								setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
								setPropertyFromClass("FlxG", "fullscreen", false)
								end	
								function onStepHit()
									if curStep == 1159 then
										function onUpdatePost()
										setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 3.5) * math.pi))
										setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
										setPropertyFromClass("FlxG", "fullscreen", false)
										end
								function onStepHit()
									if curStep == 1168 then
									function onUpdatePost()
									setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 0.7) * math.pi))
								setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
								setPropertyFromClass("FlxG", "fullscreen", false)
								end

						function onStepHit()
							if curStep == 1328 then
							function onUpdatePost()
							setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 0) * math.pi))
							setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 30 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0.7) * math.pi))
							setPropertyFromClass("FlxG", "fullscreen", false)
							end
	
						function onStepHit()
							if curStep == 1583 then
							function onUpdatePost()
							setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 0 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 0) * math.pi))
							setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 0 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
							setPropertyFromClass("FlxG", "fullscreen", false)
							function onStepHit()
							if curStep == 1599 then
							function onUpdatePost()
							setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 0.4) * math.pi))
							setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0.3) * math.pi))
							setPropertyFromClass("FlxG", "fullscreen", false)
							end
							function onStepHit()
							if curStep == 1855 then
								function onUpdatePost()
								setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 0 * math.sin(((getSongPosition() / 2300)*(bpm/60) * 0) * math.pi))
								setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 0 * math.sin(((getSongPosition() / 1500)*(bpm/60) * 0) * math.pi))
								setPropertyFromClass("FlxG", "fullscreen", false)
								end
				function onStepHit()
				if curStep == 2127 then
					function onUpdatePost()
					setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 50 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 0.7) * math.pi))
					setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 69 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 0.4) * math.pi))
					setPropertyFromClass("FlxG", "fullscreen", false)
					end
					function onStepHit()
						if curStep == 2207 then
							function onUpdatePost()
							setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 50 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 1.3) * math.pi))
							setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 69 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 1.0) * math.pi))
							setPropertyFromClass("FlxG", "fullscreen", false)
							end
					function onStepHit()
							if curStep == 2213 then
						function onUpdatePost()
							setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 50 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 1.9) * math.pi))
							setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 69 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 1.7) * math.pi))
							setPropertyFromClass("FlxG", "fullscreen", false)
								end
					function onStepHit()
						if curStep == 2217 then
						function onUpdatePost()
						setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 50 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 2.3) * math.pi))
						setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 69 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 2.0) * math.pi))
						setPropertyFromClass("FlxG", "fullscreen", false)
								end
					function onStepHit()
					if curStep == 2223 then
						function onUpdatePost()
						setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 64 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 0.7) * math.pi))
						setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 64 * math.sin(((getSongPosition() / 3000)*(bpm/60) * 0.4) * math.pi))
						setPropertyFromClass("FlxG", "fullscreen", false)
								end
								function onStepHit()
								if curStep == 2383 then
									function onUpdatePost()
									setPropertyFromClass("openfl.Lib", "application.window.x",  defaultWindowPos[1] + 0)
									setPropertyFromClass("openfl.Lib", "application.window.y",  defaultWindowPos[2] + 0)
									setPropertyFromClass("FlxG", "fullscreen", false)
											end
								
							
end
end	
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end
end