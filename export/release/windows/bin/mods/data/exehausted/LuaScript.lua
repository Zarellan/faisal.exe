function onCreate()
	setProperty('gf.visible', false)
	doTweenAlpha('stageGone' , 'MazeLOL', 0 , 0.00001 , 'linear');
	setProperty('background faisal.visible',false);
    setProperty('Circle_dark.visible',false);
	setProperty('skipCountdown',true);

	doTweenAlpha('adasd','camGame',0,0.00001,'linear');
	doTweenAlpha('adasd2','camGame',1,10,'linear');
	doTweenAlpha('adasd22','camHUD',0,0.00001,'linear');
	doTweenAlpha('adasd23','camHUD',1,10,'linear');
	doTweenZoom('camz1','camGame', 0.3 , 0.00001 ,'linear');
	doTweenZoom('camz','camGame', 0.8 , 22 ,'linear');
end

function onStepHit()
	if curStep == 2384 then
		doTweenAlpha('adasd23','camHUD',0,2,'linear');
		doTweenAlpha('adasd2','camGame',0,2,'linear');
	end
end