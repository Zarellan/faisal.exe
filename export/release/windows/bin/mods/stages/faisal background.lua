function onCreate()
	-- background shit
	makeLuaSprite('faisal background', 'faisal background', -600, -300);
	setScrollFactor('faisal background', 0.9, 0.9);


	addLuaSprite('faisal background', false);

	
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end