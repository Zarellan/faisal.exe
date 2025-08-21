function onCreate()
    doTweenAlpha('faisalStageDarker', 'background faisal', 0.2, 0.0001, 'linear');
    doTweenAlpha('CircleDark', 'Circle_dark', 0, 0.0001, 'linear');
    doTweenAlpha('faisal dark', 'dad', 0, 0.0001, 'linear');
    doTweenAlpha('speaker', 'gf', 0.9, 0.0001, 'linear');
    doTweenAlpha('BF dark', 'boyfriend', 0.9, 0.0001, 'linear');
    setProperty('timeBarBG.visible',false)
	setProperty('timeBar.visible',false)
    setProperty('timeTxt.visible',false)
	setProperty('scoreTxt.visible',false)
    setProperty('healthBar.visible',false)
    setProperty('healthBarBG.visible',false)
    setProperty('iconP1.visible',false)
    setProperty('iconP2.visible',false)
end



-- faisal place
faisalCamX = -1300;
faisalCamY = -600;
-- bf place
bfCamX = - 100;
bfCamY = -300;
-- 


function onStepHit()
    if curStep == 1 then
        doTweenAlpha('CircleDark', 'Circle_dark', 1 , 1, 'linear');
        end
        if curStep == 32 then
        doTweenAlpha('faisal dark', 'dad', 1, 0.0001, 'linear');

        doTweenX('lightMove','Circle_dark',faisalCamX , 1 , 'CircInOut');
        doTweenY('lightMove2','Circle_dark',faisalCamY, 1 , 'CircInOut');
        doTweenAlpha('faisal dark', 'dad', 1, 0.0001, 'linear');

        end
        if curStep == 64 then
            doTweenX('lightMove','Circle_dark', bfCamX , 1 , 'CircInOut');
            doTweenY('lightMove2','Circle_dark',bfCamY, 1 , 'CircInOut');
            end
            if curStep == 96 then
                doTweenX('lightMove','Circle_dark', faisalCamX , 1 , 'CircInOut');
                doTweenY('lightMove2','Circle_dark',faisalCamY, 1 , 'CircInOut');
                end
                if curStep == 127 then
                    doTweenX('lightMove','Circle_dark', bfCamX , 1 , 'CircInOut');
                    doTweenY('lightMove2','Circle_dark',bfCamY, 1 , 'CircInOut');
                    end
                    if curStep == 191 then
                        doTweenX('lightMove','Circle_dark', faisalCamX , 1 , 'CircInOut');
                        doTweenY('lightMove2','Circle_dark',faisalCamY, 1 , 'CircInOut');
                        end
     --  if curStep == 384 then
       -- doTweenX('bf','boyfriend', 300  , 1 , 'CircInOut');
       -- doTweenX('faisal','dad', 1500 , 1 , 'CircInOut');
      --  end
     --   if curStep == 387 then
           -- setProperty('boyfriend.flipX', true)
         --   setProperty('dad.flipX', true)
          --  end

        if curStep == 256 then
        doTweenAlpha('CircleDark', 'Circle_dark', 0 , 0.0001, 'linear');
        doTweenAlpha('stageGone', 'background faisal', 1, 0.0001, 'linear');
        setProperty('timeBarBG.visible',true)
	    setProperty('timeBar.visible',true)
        setProperty('timeTxt.visible',true)
        setProperty('scoreTxt.visible',true)
        setProperty('healthBar.visible',true)
        setProperty('healthBarBG.visible',true)
        setProperty('iconP1.visible',true)
        setProperty('iconP2.visible',true)
        doTweenAlpha('faisal dark', 'dad', 1, 0.0001, 'linear');
        doTweenAlpha('speaker', 'gf', 1, 0.0001, 'linear');

        end
        if curStep == 768 then
            triggerEvent('Change Character','bf','bf-defeat-scared');
        end
        if curStep == 901 then
            triggerEvent('Change Character','bf','bf-defeat-normal');
        end
end