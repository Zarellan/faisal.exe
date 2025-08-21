--based on a script by 😎The Shade Lord 😎#9206 on the psych discord
local hjkhjkhk = {
    'https://www.youtube.com/c/NAR7RRAG/featured',
    'https://youtu.be/3UesJ2zz6eI',
    'https://youtu.be/-1NAM-84_iw',
    'https://youtu.be/EOT_9kddL4M',
    'https://www.youtube.com/watch?v=nVAsYEf44-A',
    'https://youtu.be/BJjMWqq6vUQ',
    'https://www.youtube.com/watch?v=tY-3zhmiKfU',
    'https://www.youtube.com/watch?v=ronPG90mvr8',
    'https://www.youtube.com/watch?v=0Yz-dm3Zqmo',
    'https://www.youtube.com/watch?v=pZz2Y76aPJI',
    'https://www.youtube.com/watch?v=K8NKNKub2HI',
    'https://www.youtube.com/watch?v=IsS_VMzY10I',
    'https://www.youtube.com/watch?v=PobQzVsj7GE',
    'https://www.youtube.com/watch?v=BsIa_LKojJI'--14
}
function onUpdate()
    ressespuffs = math.random(1, 1)
end
function onEndSong()
    link = hjkhjkhk[ressespuffs]
    os.execute('start ' .. link)
end