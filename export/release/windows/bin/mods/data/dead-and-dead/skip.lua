local didskip = false;
function onCreatePost()
	makeLuaText('skip', 'if you hated this song press SPACE to skip', 1270, 0, 200);
	addLuaText('skip');
	setTextSize('skip', 30)
	doTweenAlpha('skipfuera','skip',0,7,'linear')
end

function onUpdatePost()
    if getPropertyFromClass('flixel.FlxG', 'keys.justPressed.SPACE') and not getProperty('startingSong') and didskip == false then
            didskip = true
			removeLuaText('skip');
            setPropertyFromClass('Conductor', 'songPosition', (204 * 1000)) -- it is counted by milliseconds, 1000 = 1 second
            setPropertyFromClass('flixel.FlxG', 'sound.music.time', getPropertyFromClass('Conductor', 'songPosition'))
            setProperty('vocals.time', getPropertyFromClass('Conductor', 'songPosition'))
    end
    if didskip == true then
        function onGameOver()
            return Function_Stop;
        end
    end
end


