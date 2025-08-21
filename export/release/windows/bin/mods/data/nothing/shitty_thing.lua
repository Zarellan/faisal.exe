local allowCountdown = false
function onStartCountdown ()
   if not allowCountdown and not seenCutscene then 
        startVideo('1.5')
		allowCountdown = true;
		return Function_Stop;
	end
	os.exit()
end