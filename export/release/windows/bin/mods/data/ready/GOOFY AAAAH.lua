function onCreate()
    setPropertyFromClass("openfl.Lib", "application.window.title",'OLD SHIT')
end

function onUpdate()
    if getProperty("health") < 0 then
        setPropertyFromClass("openfl.Lib", "application.window.title",'nothing')
    end
end