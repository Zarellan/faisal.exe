function opponentNoteHit()
    local noteHealth = 0.010
    if getProperty('health') > 0.2 then
            
                setProperty('health',getProperty('health') - noteHealth)

    end
function onUpdate()
    for i = 0, getProperty('unspawnNotes.length')-1 do
        setPropertyFromGroup('unspawnNotes', i, 'hitHealth', '0.015'); --Default value is: 0.023, health gained on 
    end
end
end