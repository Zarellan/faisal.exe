function opponentNoteHit()
    local noteHealth = 0.02
    if getProperty('health') > 0.5 then
            
                setProperty('health',getProperty('health') - noteHealth)

    end
end
