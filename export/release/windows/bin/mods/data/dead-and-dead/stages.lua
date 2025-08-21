
function onCreate()
    doTweenAlpha('stageGone' , 'MazeLOL', 0 , 0.00001 , 'linear');
    setProperty('Circle_dark.visible',false)
    setProperty('skipCountdown',true)
end


function onStepHit()
    if curStep == 4 then
        doTweenAlpha ('stageAppear', 'MazeLOL', 1, 0.0001, 'linear');
        --doTweenAlpha('stageGone', 'background faisal', 0, 0.0001, 'linear');
    end
end