package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;
import lime.app.Application;
import flixel.addons.transition.FlxTransitionableState;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;

class MuslimWarning extends MusicBeatState
{
	public static var leftState:Bool = false;

	var warnText:FlxText;
	override function create()
	{
		super.create();

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		add(bg);

		warnText = new FlxText(0, 0, FlxG.width,
			"if you don't understand arabic just press enter (or esc) \n
			if you are arabian please read the note down below \n
			: ﻦﻴﻤﻠﺴﻤﻠﻟ ﺔﻤﻬﻣ ًاﺪﺟ ﺔﻟﺎﺳﺭ
			دﻮﻤﻟﺍ اﺫ ﺐﻌﻠﺗ ﻻ ﻞﺒﻗ
 			دﻮﻤﻟﺍ اﺫ ﺐﻌﻟﺍ ﻦﻳﺪﻌﺑﻭ ﻚﺗﺍﻮﻠﺻ ﻞﻛ ﻲﻠﺻ حﻭﺭ
			(ﻂﻘﻓ ﺔﻌﺘﻤﻠﻟ هﺎﻨﻤﻤﺻ لﺎﺑ) ةﺩﺎﺒﻌﻟﺍ وﺍ ةﻼﺼﻟﺍ ﻦﻋ ﻲﻬﻠﻟ هﺎﻨﻤﻤﺻ ﺎﻣ دﻮﻤﻟﺍ اﺫ نﻷ
			(ﻪﻠﻟﺍ ﻻﺇ ﻪﻟﺇ ﻻ) ﻪﻟﺇ ﺮﺒﺘﻌﻳ ﺎﻣ دﻮﻤﻟﺍ اﺫ ﻲﻓ ﻞﺼﻴﻓﻭ
			ﻂﻘﻓ ﺶﺣﻭ ﺮﺒﺘﻌﻳ لﺎﺑ
			دﻮﻤﻟﺍ اﺬﺑ ﻚﺒﻌﻟ ﻲﻓ ﻲﻬﺘﻨﺗ ﺎﻣ ﺪﻌﺑﻭ
			نﺁﺮﻗ أﺮﻗﺍ حﻭﺭ
			(دﻮﻤﻟﺍ ﻦﻣ ﻲﻬﺘﻨﺗ ﺎﻣ ﺪﻌﺑ نﺁﺮﻗ أﺮﻗﺍ:ﺮﻛﺬﺗﻭ) دﻮﻤﻟﺎﺑ ﻊﺘﻤﺘﺳﺍ ﺲﺑﻭ",
			32);
		warnText.setFormat("Cairo ExtraLight", 32, FlxColor.WHITE, CENTER);
		warnText.screenCenter(Y);
		add(warnText);
	}

	override function update(elapsed:Float)
	{
		if(!leftState) {
			var back:Bool = controls.BACK;
			if (controls.ACCEPT || back) {
				leftState = true;
				FlxTransitionableState.skipNextTransIn = true;
				FlxTransitionableState.skipNextTransOut = true;
				if(!back) {
					ClientPrefs.flashing = false;
					ClientPrefs.saveSettings();
					FlxG.sound.play(Paths.sound('confirmMenu'));
					FlxFlicker.flicker(warnText, 2, 0.1, false, true, function(flk:FlxFlicker) {
						new FlxTimer().start(0.5, function (tmr:FlxTimer) {
							MusicBeatState.switchState(new TitleState());
						});
					});
				} else {
					ClientPrefs.flashing = false;
					ClientPrefs.saveSettings();
					FlxG.sound.play(Paths.sound('confirmMenu'));
					FlxFlicker.flicker(warnText, 2, 0.1, false, true, function(flk:FlxFlicker) {
						new FlxTimer().start(0.5, function (tmr:FlxTimer) {
							MusicBeatState.switchState(new TitleState());
						});
					});
				}
			}
		}
		super.update(elapsed);
	}
}
