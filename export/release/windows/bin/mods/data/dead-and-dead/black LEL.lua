function onStepHit()
    if curStep >= 272 then
    doTweenAlpha ('game','camGame',0,1)
doTweenAlpha ('hud','camHUD',0,1)
    end
    if curStep >= 329 then
        doTweenAlpha ('game','camGame',0,1)
    doTweenAlpha ('hud','camHUD',1,1)
        end
        if curStep >= 352 then
            doTweenAlpha ('game','camGame',1,0.01)
        doTweenAlpha ('hud','camHUD',1,0.01)
            end
end