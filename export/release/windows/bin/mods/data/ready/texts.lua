
function onStepHit()
	
	if	curStep == 1  then
		makeLuaText('textobj', 'this was actually cancelled build of faisal.exe mod due to stupid drama but then we decide to bring it back ', 800, 200, 400);
		addLuaText('textobj')
		setTextColor('textobj', 'FFFFFF')
		setTextBorder('textobj', 2.0, '000000')
		setTextSize('textobj', 23.0)
	end

	if curStep == 40 then
		removeLuaText('textobj',true);

	end
end
