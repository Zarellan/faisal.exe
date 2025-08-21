function onStepHit()
    if curStep == 30 then
        function onUpdate(pepe) -- don't ask
            if getProperty('health') > 1.5 then
                setProperty('health', 1.5)
            end
        end
    end
end
