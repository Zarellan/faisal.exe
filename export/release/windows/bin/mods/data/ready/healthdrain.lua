function opponentNoteHit()
    health = getProperty('health')
    if getProperty('health') > 0.3 and curBeat > 95  then
        setProperty('health', health- 0.03);
    end
end